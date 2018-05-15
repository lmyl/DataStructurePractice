//
//  LCBChapterTwoOrderLinkList.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoOrderLinkList.h"

OrderLinkList * createOrderLinkList(ElemType numbers[], int count) {
    OrderLinkList *list = initOrderLinkList() ;
    OrderLinkList *next  ;
    OrderLinkList *nextPre  ;
    for (int i = 0; i<count; i++) {
        next  = list ->next;
        nextPre = list ;
        while (i != 0  && next != NULL && next->data < numbers[i]) {
            nextPre = nextPre ->next;
            next = next->next ;
        }
        OrderLinkList *data = initOrderLinkList() ;
        data->data = numbers[i];
        data->next = nextPre->next ;
        nextPre->next = data ;
    }
    return list ;
}



OrderLinkList * initOrderLinkList(void) {
    OrderLinkList * list = (OrderLinkList *)malloc(sizeof(OrderLinkList)) ;
    list->next = NULL ;
    return list ;
}


void destoryOrderLinkList(OrderLinkList *list) {
    OrderLinkList *next ;
    while (list != NULL) {
        next = list ;
        list = list->next ;
        free(next) ;
    }
}

bool listOrderLinkEmpty(OrderLinkList *list) {
    return list->next == NULL ;
}

int listOrderLinkLength(OrderLinkList *list) {
    int count = 0 ;
    OrderLinkList *next = list->next ;
    while (next != NULL) {
        count ++ ;
        next = next->next ;
    }
    return count ;
}


void dispOrderLinkList(OrderLinkList *list) {
    OrderLinkList *next = list->next ;
    printf("(");
    while (next != NULL) {
        printf("%d  ",next->data);
        next = next->next;
    }
    printf(")\n");
}

bool getOrderLinkElem(OrderLinkList *list,int location,ElemType *element) {
    int count = 1 ;
    OrderLinkList *next = list->next ;
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

int locateOrderLinkElem(OrderLinkList *list,ElemType element) {
    int count = 1 ;
    OrderLinkList *next = list->next ;
    while (next != NULL ) {
        if (next->data == element) {
            return count ;
        }else if (next->data > element) {
            return 0 ;
        }else{
            count ++ ;
            next = next->next ;
        }
    }
    return 0;
}

void listOrderLinkInsert(OrderLinkList *list, ElemType element) {
    OrderLinkList *next = list->next ;
    OrderLinkList *nextPre = list ;
    while (next != NULL && next->data < element) {
        next = next->next;
        nextPre = nextPre->next ;
    }
    OrderLinkList *new = initOrderLinkList();
    new->data = element;
    new->next = nextPre->next;
    nextPre->next = new ;
}

bool listOrderLinkDelete(OrderLinkList *list,int location,ElemType *element) {
    int count = 1 ;
    OrderLinkList *next = list ;
    if (location <= 0) {
        return false ;
    }
    while (count <location && next != NULL) {
        next = next ->next ;
        count ++ ;
    }
    if (next != NULL && next->next != NULL) {
        *element = next->next->data ;
        OrderLinkList *temp = next->next ;
        next ->next = next ->next->next ;
        free(temp);
        return true;
    }else{
        return false;
    }
}
