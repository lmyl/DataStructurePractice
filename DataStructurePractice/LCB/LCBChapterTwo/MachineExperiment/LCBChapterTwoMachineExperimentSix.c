//
//  LCBChapterTwoMachineExperimentSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoMachineExperimentSix.h"


OrderSetLinkList * creatOrderSetLinkList(int numbers[] ,int count) {
    OrderSetLinkList * result = initCLinkList();
    OrderSetLinkList *next ,*nextPre ;
    for (int i = 0; i<count; i++) {
        next = result->next;
        nextPre = result ;
        while (next != NULL && next->data < numbers[i]) {
            next = next ->next;
            nextPre = nextPre->next;
        }
        if (next != NULL && next->data == numbers[i]) {
            continue ;
        }else{
            OrderSetLinkList *data = initCLinkList();
            data->data = numbers[i];
            data->next = nextPre->next;
            nextPre->next = data;
        }
    }
    return result;
}

OrderSetLinkList * addOrderSetLinkList(OrderSetLinkList *setOne,OrderSetLinkList *setTwo) {
    OrderSetLinkList *result = initCLinkList();
    OrderSetLinkList *next =result;
    OrderSetLinkList *oneNext = setOne->next ;
    OrderSetLinkList *twoNext = setTwo->next;
    while (oneNext != NULL && twoNext != NULL) {
        if (oneNext ->data < twoNext->data) {
            OrderSetLinkList *data = initCLinkList();
            data->data = oneNext->data;
            data->next = next->next;
            next->next = data;
            next = next->next;
            oneNext = oneNext->next;
        }else if (oneNext->data == twoNext->data){
            OrderSetLinkList *data = initCLinkList();
            data->data = oneNext->data;
            data->next = next->next;
            next->next = data;
            next = next->next;
            oneNext = oneNext->next;
            twoNext = twoNext->next;
        }else{
            OrderSetLinkList *data = initCLinkList();
            data->data = twoNext->data;
            data->next = next->next;
            next->next = data;
            next = next->next;
            twoNext = twoNext->next;
        }
    }
    while (oneNext != NULL) {
        OrderSetLinkList *data = initCLinkList();
        data->data = oneNext->data;
        data->next = next->next;
        next->next = data;
        next = next->next;
        oneNext = oneNext->next;
    }
    while (twoNext != NULL) {
        OrderSetLinkList *data = initCLinkList();
        data->data = twoNext->data;
        data->next = next->next;
        next->next = data;
        next = next->next;
        twoNext = twoNext->next;
    }
    return result;
}

OrderSetLinkList * subOrderSetLinkList(OrderSetLinkList *setOne,OrderSetLinkList *setTwo) {
    OrderSetLinkList *result = initCLinkList();
    OrderSetLinkList *next = result;
    OrderSetLinkList *oneNext = setOne->next ;
    OrderSetLinkList *twoNext = setTwo->next;
    while (oneNext != NULL && twoNext != NULL) {
        while (twoNext != NULL && twoNext ->data < oneNext->data) {
            twoNext = twoNext->next;
        }
        if (twoNext != NULL && twoNext->data == oneNext->data) {
            oneNext = oneNext->next;
            twoNext = twoNext->next;
        }else if (twoNext != NULL && twoNext->data > oneNext->data) {
            OrderSetLinkList *data = initCLinkList();
            data->data = oneNext->data;
            data->next = next->next;
            next->next = data;
            next = next->next;
            oneNext = oneNext->next;
        }
    }
    if (twoNext == NULL) {
        while (oneNext != NULL) {
            OrderSetLinkList *data = initCLinkList();
            data->data = oneNext->data;
            data->next = next->next;
            next->next = data;
            next = next->next;
            oneNext = oneNext->next;
        }
    }
    return result;
    
}

OrderSetLinkList * interSectionOrderSetLinkList(OrderSetLinkList *setOne,OrderSetLinkList *setTwo) {
    OrderSetLinkList *result = initCLinkList();
    OrderSetLinkList *next = result;
    OrderSetLinkList *oneNext = setOne->next ;
    OrderSetLinkList *twoNext = setTwo->next;
    while (oneNext != NULL && twoNext != NULL) {
        while (oneNext != NULL && oneNext->data < twoNext->data) {
            oneNext = oneNext->next;
        }
        while (twoNext != NULL && oneNext != NULL && twoNext->data < oneNext->data) {
            twoNext = twoNext->next;
        }
        if (twoNext != NULL && oneNext != NULL && oneNext->data == twoNext->data) {
            OrderSetLinkList *data = initCLinkList();
            data->data = oneNext->data;
            data->next = next->next;
            next->next = data;
            next = next->next;
            oneNext = oneNext->next;
            twoNext = twoNext->next;
        }
    }
    return result;
}
