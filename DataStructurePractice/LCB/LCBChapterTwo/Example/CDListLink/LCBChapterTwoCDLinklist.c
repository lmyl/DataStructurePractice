//
//  LCBChapterTwoCDLinklist.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoCDLinklist.h"

CDLinkList * createCDLinkListF(ElemType numbers[], int count){
    CDLinkList *list = initCDLinkList();
    for (int i = 0; i<count; i++) {
        CDLinkList *data = initCDLinkList();
        data->data = numbers[i];
        data->next = list->next;
        list->next->prior = data;
        list->next = data;
        data->prior = list ;
    }
    return list;
}



CDLinkList * createCDLinkListR(ElemType numbers[], int count) {
    CDLinkList *list = initCDLinkList();
    CDLinkList *next = list;
    for (int i = 0; i<count; i++) {
        CDLinkList *data = initCDLinkList();
        data->data = numbers[i];
        data->next = next->next;
        next->next->prior = data ;
        data->prior = next;
        next->next = data;
        next = next->next;
    }
    return  list ;
}


CDLinkList * initCDLinkList(void) {
    CDLinkList *list = (CDLinkList *)malloc(sizeof(CDLinkList));
    list->next = list;
    list->prior = list ;
    return list ;
}


void destoryCDLinkList(CDLinkList *list) {
    CDLinkList *next = list->next;
    CDLinkList *temp  ;
    while (next != list) {
        temp = next->next;
        free(next);
        next = temp ;
    }
    free(list);
}


bool listCDLinkEmpty(CDLinkList *list) {
    return list->next == list ;
}


int listCDLinkLength(CDLinkList *list) {
    int count = 0;
    CDLinkList *next = list->next ;
    while (next != list) {
        count ++;
        next = next->next ;
    }
    return count ;
}


void dispCDLinkList(CDLinkList *list) {
    printf("(");
    CDLinkList *next = list->next ;
    while (next != list) {
        printf("%d  ",next->data);
        next = next->next ;
    }
    printf(")\n");
}


bool getCDLinkElem(CDLinkList *list,int location,ElemType *element){
    int count = 1 ;
    if (location <= 0) {
        return false ;
    }
    CDLinkList *next = list->next ;
    while (next != list && count < location) {
        next = next->next;
        count ++;
    }
    if (next != list) {
        *element =  next->data ;
        return true ;
    }else{
        return false;
    }
}


int locateCDLinkElem(CDLinkList *list,ElemType element) {
    int count  = 1;
    CDLinkList *next = list->next ;
    while (next != list && next->data != element) {
        next  = next->next;
        count ++ ;
    }
    if (next != list) {
        return count;
    }else{
        return 0;
    }
}


bool listCDLinkInsert(CDLinkList *list,int location,ElemType element) {
    int count = 2;
    CDLinkList *next = list ;
    if (location <= 0) {
        return false;
    }
    CDLinkList *data = initCDLinkList();
    data->data = element;
    if (location == 1) {
        data->next = next->next;
        next->next->prior = data;
        next->next = data;
        data->prior = next;
        return true ;
    }
    next = next->next ;
    while (next != list && count < location) {
        next  = next->next;
        count ++;
    }
    if (next != list) {
        data->next = next->next;
        next->next->prior = data;
        next->next = data;
        data->prior = next;
        return true;
    }else{
        return false;
    }
    
}


bool listCDLinkDelete(CDLinkList *list,int location,ElemType *element) {
    int count = 1;
    if (location <= 0) {
        return false;
    }
    CDLinkList *next = list->next;
    while (next != list && count < location) {
        next = next->next;
        count ++;
    }
    if (next != list) {
        CDLinkList *temp = next->prior;
        temp->next = next->next;
        next->next->prior = temp;
        free(next);
        return true;
    }else{
        return false;
    }
}
