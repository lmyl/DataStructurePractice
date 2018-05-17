//
//  LCBXXZDChapterTwoAlgorithmDesignTwenty.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignTwenty.h"


OrderLinkList * mergeOrderLinkListToDecrease(OrderLinkList *first ,OrderLinkList *second) {
    OrderLinkList *result = initOrderLinkList();
    OrderLinkList *firstNext = first->next;
    OrderLinkList *firstAfter ;
    OrderLinkList *secondNext = second->next;
    OrderLinkList *secondAfter ;
    first->next = NULL;
    second->next = NULL;
    while (firstNext != NULL && secondNext != NULL) {
        firstAfter = firstNext->next;
        secondAfter = secondNext->next ;
        if (firstNext->data <= secondNext->data) {
            firstNext->next = result->next;
            result->next = firstNext;
            firstNext = firstAfter ;
        }else{
            secondNext->next = result->next;
            result->next = secondNext;
            secondNext = secondAfter ;
        }
    }
    while (firstNext != NULL) {
        firstAfter = firstNext->next;
        firstNext->next = result->next;
        result->next = firstNext;
        firstNext = firstAfter ;
    }
    while (secondNext != NULL) {
        secondAfter = secondNext->next ;
        secondNext->next = result->next;
        result->next = secondNext;
        secondNext = secondAfter ;
    }
    return result ;
}
