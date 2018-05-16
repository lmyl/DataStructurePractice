//
//  LCBChapterTwoMachineExperimentSeven.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoMachineExperimentSeven.h"


void displayPolynomialLinkList(PolynomialLinkList *list) {
    PolynomialLinkList *next = list->next;
    int count = 0 ;
    while (next != NULL) {
        printf("%dx^%d ",next->data,count);
        count++;
        next = next->next;
    }
    printf("\n");
}

PolynomialLinkList * addPolynomialLinkList(PolynomialLinkList *listOne , PolynomialLinkList *listTwo) {
    PolynomialLinkList *result = initLinkList();
    PolynomialLinkList *oneNext = listOne->next;
    PolynomialLinkList *twoNext = listTwo->next;
    PolynomialLinkList *next = result ;
    while (oneNext != NULL && twoNext != NULL) {
        PolynomialLinkList *data = initLinkList();
        data->data = oneNext->data + twoNext->data;
        data->next = next->next;
        next->next = data;
        next = next->next;
        oneNext = oneNext->next;
        twoNext = twoNext->next;
    }
    while (oneNext != NULL) {
        PolynomialLinkList *data = initLinkList();
        data->data = oneNext->data;
        data->next = next->next;
        next->next = data;
        next = next->next;
        oneNext = oneNext->next;
    }
    while (twoNext != NULL) {
        PolynomialLinkList *data = initLinkList();
        data->data = twoNext->data;
        data->next = next->next;
        next->next = data;
        next = next->next;
        twoNext = twoNext->next;
    }
    return result ;
}
