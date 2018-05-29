//
//  LCBChapterFourLiString.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/29.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFourLiString.h"

LiString * initLiString (void) {
    LiString *string = (LiString *)malloc(sizeof(LiString));
    string->next = NULL;
    return string ;
}


void LiStringAssign(LiString *string ,char stringValue[]) {
    LiString *next = string ->next ;
    while (next != NULL) {
        string->next = next->next ;
        free(next) ;
        next = string->next ;
    }
    int count = 0 ;
    next = string ;
    while (stringValue[count] != '\0') {
        LiString *data = initLiString();
        data->data = stringValue[count] ;
        data->next = next->next;
        next->next = data;
        next = next->next ;
        count ++;
    }
}


void LiStringCopy(LiString *toString ,LiString *fromString ) {
    LiString *next = toString ->next ;
    while (next != NULL) {
        toString->next = next->next ;
        free(next) ;
        next = toString->next ;
    }
    next = toString ;
    LiString *nextFrom = fromString ->next;
    while (nextFrom != NULL) {
        LiString *data = initLiString();
        data->data = nextFrom->data;
        data->next = next->next;
        next->next = data;
        next = next->next ;
        nextFrom = nextFrom->next ;
    }
}


bool LiStringEqual(LiString *stringOne , LiString *stringTwo) {
    LiString *nextOne = stringOne ->next ;
    LiString *nextTwo = stringTwo ->next ;
    while (nextOne != NULL && nextTwo != NULL) {
        if (nextTwo->data != nextOne->data) {
            return false ;
        }
        nextTwo = nextTwo->next;
        nextOne = nextOne->next ;
    }
    if (nextOne == NULL && nextTwo == NULL) {
        return true ;
    }else{
        return false ;
    }
}


int LiStringLength(LiString *string) {
    int count = 0;
    LiString *next = string->next ;
    while (next != NULL) {
        count ++ ;
        next = next->next ;
    }
    return count ;
}


LiString * concatLiString(LiString *stringOne , LiString *stringTwo)  {
    LiString *result = initLiString();
    LiString *next = result ;
    LiString *nextOne = stringOne ->next ;
    LiString *nextTwo = stringTwo ->next ;
    while (nextOne != NULL) {
        LiString *data = initLiString();
        data->data = nextOne->data;
        data->next = next->next;
        next->next = data ;
        next = next->next ;
        nextOne = nextOne ->next ;
    }
    while (nextTwo != NULL){
        LiString *data = initLiString();
        data->data = nextTwo->data;
        data->next = next->next;
        next->next = data ;
        next = next->next ;
        nextTwo = nextTwo ->next ;
    }
    return result ;
}


LiString * subLiString(LiString *string ,int start ,int end) {
    LiString *result = initLiString();
    LiString *next = result ;
    LiString *nextString = string->next ;
    if (start <= 0) {
        return initLiString() ;
    }
    int count = 1;
    while (count < start && nextString != NULL) {
        nextString = nextString->next ;
        count ++ ;
    }
    if (count < start && nextString == NULL) {
        return initLiString() ;
    }
    while (count < end + 1 && nextString != NULL) {
        LiString *data = initLiString();
        data->data = nextString->data;
        data->next = next->next;
        next->next = data ;
        next = next->next ;
        nextString = nextString->next ;
        count ++ ;
    }
    if (count < end + 1 && nextString == NULL ) {
        return initLiString() ;
    }
    return result ;
}


LiString * insertLiString(LiString *stringOne , int index ,LiString *stringTwo)  {
    LiString *result = initLiString();
    LiString *next = result ;
    LiString *nextOne = stringOne->next ;
    LiString *nextTwo = stringTwo->next ;
    if (index <= 0) {
        return initLiString() ;
    }
    int count = 1;
    while (count < index && nextOne != NULL) {
        LiString *data = initLiString();
        data->data = nextOne->data;
        data->next = next->next;
        next->next = data ;
        next = next->next ;
        nextOne = nextOne->next ;
        count ++ ;
    }
    if (count < index && nextOne == NULL) {
        return initLiString() ;
    }
    while (nextTwo != NULL) {
        LiString *data = initLiString();
        data->data = nextTwo->data;
        data->next = next->next;
        next->next = data ;
        next = next->next ;
        nextTwo = nextTwo->next ;
    }
    while (nextOne != NULL) {
        LiString *data = initLiString();
        data->data = nextOne->data;
        data->next = next->next;
        next->next = data ;
        next = next->next ;
        nextOne = nextOne->next ;
    }
    return result ;
}


LiString * deleteLiString(LiString *string , int start,int end) {
    LiString *result = initLiString();
    LiString *next = result ;
    LiString *nextString = string->next ;
    if (start <= 0) {
        return initLiString() ;
    }
    int count = 1;
    while (count < start && nextString != NULL) {
        LiString *data = initLiString();
        data->data = nextString->data;
        data->next = next->next;
        next->next = data ;
        next = next->next ;
        nextString = nextString->next ;
        count ++ ;
    }
    if (count < start && nextString == NULL) {
        return initLiString() ;
    }
    while (count < end + 1 && nextString != NULL) {
        count ++ ;
        nextString = nextString->next ;
    }
    if (count < end + 1 && nextString == NULL ) {
        return initLiString() ;
    }
    while (nextString != NULL) {
        LiString *data = initLiString();
        data->data = nextString->data;
        data->next = next->next;
        next->next = data ;
        next = next->next ;
        nextString = nextString->next ;
    }
    return result ;
}


LiString * replaceLiString(LiString *stringOne , int start ,int end ,LiString *stringTwo ) {
    LiString *result = initLiString();
    LiString *next = result ;
    LiString *nextOne = stringOne->next ;
    LiString *nextTwo = stringTwo->next ;
    if (start <= 0) {
        return initLiString() ;
    }
    int count = 1;
    while (count < start && nextOne != NULL) {
        LiString *data = initLiString();
        data->data = nextOne->data;
        data->next = next->next;
        next->next = data ;
        next = next->next ;
        nextOne = nextOne->next ;
        count ++ ;
    }
    if (count < start && nextOne == NULL) {
        return initLiString() ;
    }
    while (nextTwo != NULL) {
        LiString *data = initLiString();
        data->data = nextTwo->data;
        data->next = next->next;
        next->next = data ;
        next = next->next ;
        nextTwo = nextTwo->next ;
    }
    while (count < end + 1 && nextOne != NULL) {
        count ++ ;
        nextOne = nextOne->next ;
    }
    if (count < end + 1 && nextOne == NULL ) {
        return initLiString() ;
    }
    while (nextOne != NULL) {
        LiString *data = initLiString();
        data->data = nextOne->data;
        data->next = next->next;
        next->next = data ;
        next = next->next ;
        nextOne = nextOne->next ;
    }
    return result ;
}


void displayLiString(LiString *string) {
    printf("(");
    LiString *next = string ->next;
    while (next != NULL) {
        printf("%c",next->data);
        next = next->next;
    }
    printf(")\n");
}
