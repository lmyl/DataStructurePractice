//
//  LCBChapterFourSqString.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/29.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFourSqString.h"


void sqStrAssign(SqString *string ,char stringValue[]){
    int count = 0 ;
    while (stringValue[count] != '\0') {
        string->data[count] = stringValue[count] ;
        count ++ ;
    }
    string->length = count ;
}


void sqStrCopy(SqString *toString ,SqString fromString ) {
    int count = 0 ;
    while (count < fromString.length) {
        toString->data[count] = fromString.data[count] ;
        count ++ ;
    }
    toString->length = count ;
}

bool SqStrEqual(SqString stringOne , SqString stringTwo)  {
    int count = 0 ;
    if (stringOne.length != stringTwo.length) {
        return false ;
    }
    while (count < stringOne.length) {
        if (stringOne.data[count] != stringOne.data[count]) {
            return false ;
        }
        count ++ ;
    }
    return true ;
}


int SqStrLength(SqString string) {
    return string.length ;
}

SqString concatSqStr(SqString stringOne , SqString stringTwo)  {
    SqString result ;
    int count = 0 ;
    while (count < stringOne.length) {
        result.data[count] = stringOne.data[count] ;
        count ++ ;
    }
    int countTwo = 0;
    while (countTwo < stringTwo.length) {
        result.data[count + countTwo] = stringTwo.data[countTwo] ;
        countTwo ++ ;
    }
    result.length = count + countTwo ;
    return result ;
}

SqString subSqStr(SqString string ,int start ,int end)  {
    SqString result ;
    int count = start ;
    if (start <= 0 || start > string.length || end < start || end > string.length) {
        result.length = 0 ;
        return result ;
    }
    while (count <= end) {
        result.data[count-start] = string.data[count-1];
        count ++ ;
    }
    result.length = end - start + 1;
    return result ;
}

SqString insertSqStr(SqString stringOne , int index ,SqString stringTwo) {
    SqString result ;
    if (index <= 0 || index > stringOne.length + 1) {
        result.length = 0 ;
        return result ;
    }
    int count = 0;
    while (count < index-1) {
        result.data[count] = stringOne.data[count];
        count ++ ;
    }
    int countTwo = 0;
    while (countTwo < stringTwo.length) {
        result.data[count] = stringTwo.data[countTwo];
        count ++ ;
        countTwo ++ ;
    }
    countTwo = index - 1;
    while (countTwo < stringTwo.length) {
        result.data[count] = stringOne.data[countTwo] ;
        count ++;
        countTwo ++ ;
    }
    result.length = stringOne.length + stringTwo.length ;
    return result ;
    
}

SqString deleteSqStr(SqString string , int start,int end)  {
    SqString result ;
    if (start <= 0 || start > string.length || end < start || end > string.length) {
        result.length = 0 ;
        return result ;
    }
    int count = 0;
    while (count < start-1) {
        result.data[count] = string.data[count];
        count ++ ;
    }
    int countTwo = end  ;
    while (countTwo < string.length) {
        result.data[count] = string.data[countTwo] ;
        count ++ ;
        countTwo ++ ;
    };
    result.length = count ;
    return result ;
}

SqString replaceSqStr(SqString stringOne , int start ,int end ,SqString stringTwo ) {
    SqString result ;
    if (start <= 0 || start > stringOne.length || end < start || end > stringOne.length) {
        result.length = 0 ;
        return result ;
    }
    int count = 0 ;
    while (count < start - 1) {
        result.data[count] = stringOne.data[count];
        count ++ ;
    }
    int countTwo = 0 ;
    while (countTwo < stringTwo.length) {
        result.data[count] = stringTwo.data[countTwo];
        count ++ ;
        countTwo ++ ;
    }
    countTwo = end ;
    while (countTwo < stringOne.length) {
        result.data[count] = stringOne.data[countTwo];
        count ++;
        countTwo ++;
    }
    result.length = count ;
    return result ;
}

void displaySqStr(SqString string) {
    int count = 0;
    printf("(");
    while (count < string.length) {
        printf("%c",string.data[count]);
        count ++ ;
    }
    printf(")\n");
}

