//
//  LCBChapterTwoPracticeQuestionSeven.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoPracticeQuestionSeven.h"


CDLinkList * insertTwoCDLinkList(CDLinkList *first,CDLinkList *second,int location) {
    CDLinkList *result = initCDLinkList();
    CDLinkList *resultNext = result;
    int count = 0 ;
    CDLinkList *firstNext = first->next;
    CDLinkList *secondNext = second->next;
    while (count < location && firstNext != first) {
        CDLinkList *data = initCDLinkList();
        data->data = firstNext->data;
        data->next = resultNext->next;
        resultNext->next->prior = data;
        resultNext->next = data;
        data->prior = resultNext;
        resultNext = resultNext ->next;
        firstNext = firstNext->next;
        count ++ ;
    }
    while (secondNext != second) {
        CDLinkList *data = initCDLinkList();
        data->data = secondNext->data;
        data->next = resultNext->next;
        resultNext->next->prior = data;
        resultNext->next = data;
        data->prior = resultNext;
        resultNext = resultNext ->next;
        secondNext = secondNext->next;
    }
    while (firstNext != first) {
        CDLinkList *data = initCDLinkList();
        data->data = firstNext->data;
        data->next = resultNext->next;
        resultNext->next->prior = data;
        resultNext->next = data;
        data->prior = resultNext;
        resultNext = resultNext ->next;
        firstNext = firstNext->next;
    }
    return result;
}
