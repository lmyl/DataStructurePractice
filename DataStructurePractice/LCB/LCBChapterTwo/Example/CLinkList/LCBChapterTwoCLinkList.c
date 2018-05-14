//
//  LCBChapterTwoCLinkList.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoCLinkList.h"

CLinkList * createCLinkListF(ElemType numbers[], int count) {
    CLinkList *list = initCLinkList();
    for (int i = 0; i<count; i++) {
        CLinkList *data = initCLinkList();
        data->data = numbers[i];
        data->next = list->next;
        list->next = data;
    }
    return list;
}

CLinkList * createCLinkListR(ElemType numbers[], int count) {
    CLinkList *list = initCLinkList();
    CLinkList *next = list ;
    for (int i = 0; i<count; i++) {
        CLinkList *data  =initCLinkList();
        data->data = numbers[i];
        data->next = next->next;
        next->next = data;
        next  = next->next;
    }
    return list;
}


CLinkList * initCLinkList(void) {
    CLinkList *list = (CLinkList *)malloc(sizeof(CLinkList));
    list -> next = list ;
    return list ;
}


void destoryCLinkList(CLinkList *list) {
    CLinkList * next = list->next ;
    CLinkList *temp ;
    while (next != list) {
        temp = next->next;
        free(next);
        next = temp ;
    }
    free(list);
}

bool listCLinkEmpty(CLinkList *list) {
    return list->next == list;
}

int listCLinkLength(CLinkList *list) {
    int count = 0 ;
    CLinkList *next = list->next ;
    while (next != list) {
        count ++ ;
        next = next->next;
    }
    return count ;
}

void dispCLinkList(CLinkList *list) {
    printf("(");
    CLinkList *next = list->next ;
    while (next != list) {
        printf("%d  ",next->data);
        next = next->next ;
    }
    printf(")\n");
}

bool getCLinkElem(CLinkList *list,int location,ElemType *element) {
    int count = 1;
    CLinkList *next = list->next ;
    if (location <= 0) {
        return false;
    }
    while (next != list && count < location) {
        next = next->next;
        count ++;
    }
    if (next == list) {
        return false ;
    }else{
        *element = next->data;
        return true;
    }
}

int locateCLinkElem(CLinkList *list,ElemType element) {
    int count = 1;
    CLinkList *next = list->next ;
    while (next != list && next->data != element) {
        next = next->next;
        count ++;
    }
    if (next != list) {
        return count ;
    }else{
        return 0 ;
    }
}

bool listCLinkInsert(CLinkList *list,int location,ElemType element) {
    int count = 2;
    CLinkList *next = list ;
    if (location <= 0) {
        return  false;
    }
    
    CLinkList *data = initCLinkList();
    data->data = element;
    
    if (location == 1) {
        data->next = next->next;
        next->next = data ;
        return true ;
    }
    next = next->next;
    while (next != list && count < location) {
        next = next->next;
        count ++;
    }
    if (next != list) {
        data->next = next->next;
        next->next = data;
        return true ;
    }else{
        return false;
    }
}

bool listCLinkDelete(CLinkList *list,int location,ElemType *element) {
    int count = 2;
    CLinkList *next = list;
    if (location <= 0) {
        return false ;
    }
    CLinkList *temp ;
    if (location == 1 ) {
        if (listCLinkEmpty(list)) {
            return false;
        }else{
            temp = next->next ;
            next->next = temp->next;
            free(temp);
            return true;
        }
    }
    next = next->next;
    while (next != list && count < location) {
        next = next->next;
        count ++;
    }
    if (next != list && next->next != list) {
        temp = next->next;
        next->next = temp->next;
        free(temp);
        return true;
    }else{
        return false;
    }
}

