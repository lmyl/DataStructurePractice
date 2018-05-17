//
//  LCBXXZDChapterTwoAlgorithmDesignTwentyOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignTwentyOne.h"


void deletElementRangeInOrderLinkList(OrderLinkList *list,int min,int max)  {
    OrderLinkList *next = list->next;
    OrderLinkList *nextPre = list;
    while (next != NULL && next->data <= min) {
            next = next->next;
            nextPre = nextPre->next;
    }
    while (next != NULL && next->data < max) {
        nextPre->next = next->next;
        free(next);
        next = nextPre->next;
    }
}
