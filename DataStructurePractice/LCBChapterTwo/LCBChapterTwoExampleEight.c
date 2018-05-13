//
//  LCBChapterTwoExampleEight.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoExampleEight.h"


void reverseDLinkList(DLinkList *list) {
    DLinkList *next = list->next;
    if (next == NULL || next->next == NULL) {
        return ;
    }
    DLinkList *nextToNext = next->next;
    next->next = NULL;
    next = nextToNext ;
    while (next != NULL) {
        nextToNext = next->next;
        next->next = list->next;
        if (list->next != NULL) {
            list->next->prior = next;
        }
        next->prior = list;
        list->next = next ;
        next = nextToNext;
    }
    
}
