//
//  LCBChapterTwoExampleThirteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoExampleThirteen.h"


void interSectionThreeOrderLinkList(OrderLinkList *first,OrderLinkList *second,OrderLinkList *third) {
    OrderLinkList *firstNext = first->next;
    OrderLinkList *secondNext = second->next;
    OrderLinkList *thirdNext = third->next;
    OrderLinkList *resultNext = first ;
    first->next = NULL;
    while (firstNext != NULL && secondNext != NULL && thirdNext != NULL) {
        while (firstNext != NULL && firstNext->data < secondNext->data ) {
            OrderLinkList *temp = firstNext ;
            firstNext = firstNext->next;
            free(temp);
        }
        if (firstNext == NULL) {
            break ;
        }
        while (secondNext != NULL && firstNext->data > secondNext->data) {
            secondNext = secondNext->next;
        }
        if (secondNext == NULL) {
            break ;
        }
        if (firstNext->data == secondNext->data) {
            while (thirdNext != NULL && thirdNext->data < firstNext->data ) {
                thirdNext = thirdNext->next;
            }
            if (thirdNext == NULL) {
                break ;
            }
            if (thirdNext->data == firstNext->data) {
                OrderLinkList *data = initOrderLinkList();
                data->data = firstNext->data;
                data->next = resultNext->next;
                resultNext->next = data;
                resultNext = resultNext->next ;
                OrderLinkList *temp = firstNext;
                firstNext = firstNext->next;
                free(temp);
                secondNext = secondNext->next;
                thirdNext = thirdNext->next;
            }else{
                OrderLinkList *temp = firstNext;
                firstNext = firstNext->next;
                free(temp);
                secondNext = secondNext->next;
            }
        }
    }
    while (firstNext != NULL) {
        OrderLinkList *temp = firstNext ;
        firstNext = firstNext->next;
        free(temp);
    }
}
