//
//  WDChapterTwoPointTheePracticeQuestionFifteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPointTheePracticeQuestionFifteen.h"

void interSectionOrderLinklistStoreInFirst(OrderLinkList *first ,OrderLinkList *second) {
    OrderLinkList *firstNext = first->next;
    OrderLinkList *resultNext = first ;
    OrderLinkList *secondNext = second->next;
    first->next = NULL;
    OrderLinkList *temp ;
    while (firstNext != NULL && secondNext != NULL) {
        while (firstNext != NULL && firstNext->data < secondNext->data) {
            temp = firstNext ;
            firstNext = firstNext->next;
            free(temp);
        }
        if (firstNext == NULL) {
            break ;
        }
        while (secondNext != NULL && secondNext->data < firstNext->data) {
            secondNext = secondNext->next;
        }
        if (secondNext == NULL) {
            break ;
        }
        if (secondNext->data == firstNext->data) {
            temp = firstNext->next;
            firstNext->next = resultNext->next;
            resultNext->next = firstNext;
            resultNext = resultNext->next;
            firstNext = temp;
            secondNext = secondNext->next ;
        }
    }
    while (firstNext != NULL) {
        temp = firstNext ;
        firstNext = firstNext->next;
        free(temp);
    }
}
