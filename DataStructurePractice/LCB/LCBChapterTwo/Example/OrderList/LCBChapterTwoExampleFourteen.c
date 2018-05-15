//
//  LCBChapterTwoExampleFourteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoExampleFourteen.h"


void deleteAllSameInOrderLinkList(OrderLinkList *list) {
    OrderLinkList *next = list->next ;
    OrderLinkList *onlyElementPre = list;
    if (next == NULL || next->next == NULL) {
        return ;
    }
    while (next != NULL) {
        if (next->data == onlyElementPre->data) {
            onlyElementPre->next = next->next;
            free(next);
            next = onlyElementPre->next;
        }else{
            onlyElementPre = onlyElementPre->next;
            next = next->next;
        }
    }
}
