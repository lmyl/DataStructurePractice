//
//  LCBChapterTwoLinkList.c
//  DataStructurePractice
//
//  Created by ly on 2018/4/1.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoLinkList.h"


LinkList * createLinkListF(ElemType numbers[], int count) {
    LinkList *list = initLinkList() ;
    for (int i = 0; i<count; i++) {
        LinkList *data = initLinkList() ;
        data->data = numbers[i];
        data->next = list->next ;
        list->next = data ;
    }
    return list ;
}


LinkList * createLinkListR(ElemType numbers[], int count) {
    LinkList *list = initLinkList() ;
    LinkList *next = list ;
    for (int i = 0; i<count; i++) {
        LinkList *data = initLinkList();
        data->data = numbers[i];
        next->next = data ;
        next = data ;
    }
    return list;
}

LinkList * initLinkList(void) {
    LinkList * list = (LinkList *)malloc(sizeof(LinkList)) ;
    list->next = NULL ;
    return list ;
}


void destoryLinkList(LinkList *list) {
    LinkList *next ;
    while (list != NULL) {
        next = list ;
        list = list->next ;
        free(next) ;
    }
}

bool listLinkEmpty(LinkList *list) {
    return list->next == NULL ;
}

int listLinkLength(LinkList *list) {
    int count = 0 ;
    LinkList *next = list->next ;
    while (next != NULL) {
        count ++ ;
        next = next->next ;
    }
    return count ;
}


void dispLinkList(LinkList *list) {
    LinkList *next = list->next ;
    printf("(");
    while (next != NULL) {
        printf("%d  ",next->data);
        next = next->next;
    }
    printf(")\n");
}

bool getLinkElem(LinkList *list,int location,ElemType *element) {
    int count = 1 ;
    LinkList *next = list->next ;
    if (location <= 0) {
        return false;
    }
    while (count < location && next != NULL) {
        count ++ ;
        next = next->next ;
    }
    if (next != NULL) {
        *element = next->data ;
        return true ;
    }else {
        return false ;
    }
}

int locateLinkElem(LinkList *list,ElemType element) {
    int count = 1 ;
    LinkList *next = list->next ;
    while (next != NULL ) {
        if (next->data == element) {
            return count ;
        }else{
            count ++ ;
            next = next->next ;
        }
    }
    return 0;
}

bool listLinkInsert(LinkList *list,int location,ElemType element) {
    int count = 1 ;
    LinkList *next = list ;
    if (location <= 0) {
        return false;
    }
    while (count < location && next != NULL) {
        next = next->next ;
        count ++ ;
    }
    if (next != NULL) {
        LinkList *new = initLinkList();
        new->data = element;
        new->next = next->next;
        next->next = new ;
        return true;
    }else {
        return false ;
    }
}

bool listLinkDelete(LinkList *list,int location,ElemType *element) {
    int count = 1 ;
    LinkList *next = list ;
    if (location <= 0) {
        return false ;
    }
    while (count <location && next != NULL) {
        next = next ->next ;
        count ++ ;
    }
    if (next != NULL && next->next != NULL) {
        *element = next->next->data ;
        LinkList *temp = next->next ;
        next ->next = next ->next->next ;
        free(temp);
        return true;
    }else{
        return false;
    }
}


