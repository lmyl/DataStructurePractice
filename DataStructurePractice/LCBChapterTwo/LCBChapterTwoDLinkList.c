//
//  LCBChapterTwoDLinkList.c
//  DataStructurePractice
//
//  Created by ly on 2018/4/1.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoDLinkList.h"

DLinkList * createDLinkListF(ElemType numbers[], int count) {
    DLinkList *list = initDLinkList();
    for (int i = 0; i<count; i++) {
        DLinkList *data = initDLinkList();
        data->data = numbers[i];
        data->next = list->next;
        list->next = data;
        if (data->next != NULL) {
            data->next->prior = data;
        }
        data->prior = list;
    }
    return list;
}

DLinkList * createDLinkListR(ElemType numbers[], int count) {
    DLinkList *list = initDLinkList();
    DLinkList *next = list;
    for (int i = 0; i<count; i++) {
        DLinkList *data = initDLinkList();
        data->data = numbers[i];
        next->next = data;
        data->prior = next;
        next = next->next ;
    }
    return list;
}

DLinkList * initDLinkList(void) {
    DLinkList *list = (DLinkList *)malloc(sizeof(DLinkList));
    list->prior = NULL;
    list->next = NULL;
    return list;
}

void destoryDLinkList(DLinkList *list) {
    DLinkList *next = list;
    while (next != NULL) {
        list = list->next;
        free(next);
        next = list;
    }
}

bool listDLinkEmpty(DLinkList *list) {
    return list->next == NULL;
}

int listDLinkLength(DLinkList *list) {
    int count = 0 ;
    DLinkList *next = list->next;
    while (next != NULL) {
        count ++;
        next = next->next ;
    }
    return count ;
}

void dispDLinkList(DLinkList *list) {
    printf("(");
    DLinkList *next = list->next;
    while (next != NULL) {
        printf("%d  ",next->data);
        next = next->next;
    }
    printf(")\n");
}

bool getDLinkElem(DLinkList *list,int location,ElemType *element) {
    int count = 1 ;
    DLinkList *next = list->next ;
    if (location <= 0) {
        return false;
    }
    while (next != NULL && count < location) {
        next = next ->next;
        count ++ ;
    }
    if (next == NULL) {
        return false;
    }else{
        *element = next->data;
        return true;
    }
}

int locateDLinkElem(DLinkList *list,ElemType element) {
    int count = 1 ;
    DLinkList *next = list->next;
    while (next != NULL) {
        if (next->data == element) {
            return count;
        }else{
            count ++;
            next = next->next;
        }
    }
    return 0;
}

bool listDLinkInsert(DLinkList *list,int location,ElemType element) {
    int count = 1;
    DLinkList *next = list;
    if (location <= 0) {
        return false;
    }
    while (next != NULL && count <location) {
        next = next->next;
        count ++;
    }
    if (next != NULL) {
        DLinkList *data = initDLinkList();
        data->data = element;
        data->next = next->next;
        if (next->next != NULL) {
            next->next->prior = data;
        }
        next->next = data;
        data->prior = next;
        return true;
    }else{
        return false;
    }
}


bool listDLinkDelete(DLinkList *list,int location,ElemType *element) {
    int count = 1;
    DLinkList *next = list;
    if (location <= 0) {
        return false;
    }
    while (next != NULL && count < location) {
        next = next->next;
        count ++;
    }
    if (next != NULL && next->next != NULL) {
        DLinkList *temp = next->next;
        *element = temp->data;
        next->next = next->next->next ;
        if (next->next != NULL) {
            next->next->prior = next;
        }
        free(temp);
        return true;
    }else{
        return  false;
    }
}
