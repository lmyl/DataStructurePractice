//
//  WDChapterTwoPointTheePracticeQuestionFourteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPointTheePracticeQuestionFourteen.h"

OrderLinkList * interSectionOrderLinklist(OrderLinkList *first ,OrderLinkList *second) {
    OrderLinkList *result = initOrderLinkList() ;
    OrderLinkList *resultNext = result ;
    OrderLinkList *firstNext = first->next;
    OrderLinkList *secondNext = second->next;
    while (firstNext != NULL && secondNext != NULL) {
        while (firstNext != NULL && firstNext->data < secondNext->data) {
            firstNext = firstNext->next;
        }
        if (firstNext == NULL) {
            break ;
        }
        while (secondNext != NULL &&  firstNext->data > secondNext->data) {
            secondNext = secondNext->next ;
        }
        if (secondNext == NULL) {
            break ;
        }
        if (firstNext->data == secondNext->data) {
            OrderLinkList *data = initOrderLinkList();
            data->data = firstNext->data;
            data->next = resultNext->next;
            resultNext->next = data;
            resultNext = resultNext->next ;
            firstNext = firstNext->next;
            secondNext = secondNext->next ;
        }
    }
    return result ;
}
