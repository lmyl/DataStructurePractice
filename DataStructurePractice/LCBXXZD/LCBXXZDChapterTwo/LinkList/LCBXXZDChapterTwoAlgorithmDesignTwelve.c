//
//  LCBXXZDChapterTwoAlgorithmDesignTwelve.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignTwelve.h"


LinkList * findCommonTailStoreLocationLinkList(LinkList *first ,LinkList *second) {
    LinkList *firstNext = first->next;
    LinkList *secondNext = second->next;
    int firstLength = 0;
    int secondLength = 0 ;
    while (firstNext != NULL) {
        firstNext = firstNext->next;
        firstLength ++;
    }
    while (secondNext != NULL) {
        secondNext = secondNext ->next;
        secondLength ++;
    }
    firstNext = first->next;
    secondNext = second->next;
    if (firstLength <= secondLength) {
        int after = secondLength - firstLength ;
        int count = 0;
        while (count < after) {
            secondNext = secondNext->next ;
            count ++;
        }
    }else{
        int after = firstLength - secondLength ;
        int count = 0;
        while (count < after) {
            firstNext = firstNext->next ;
            count ++;
        }
    }
    while (secondNext != NULL && firstNext != NULL && firstNext != secondNext) {
        firstNext = firstNext ->next;
        secondNext = secondNext->next;
    }
    if (secondNext == NULL) {
        return NULL ;
    }else{
        return firstNext ;
    }
}
