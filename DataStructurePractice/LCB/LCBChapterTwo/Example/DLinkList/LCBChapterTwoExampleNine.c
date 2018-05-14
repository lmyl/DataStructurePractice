//
//  LCBChapterTwoExampleNine.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoExampleNine.h"


void sortIncreaseDLinkList(DLinkList *list)  {
    DLinkList *next = list->next->next;
    DLinkList *forntier = list->next ;
    DLinkList *action ;
    while (next != NULL) {
        action  = list->next ;
        while (action->data < next->data && action != next) {
            action = action->next ;
        }
        if (action != next) {
            forntier->next = next->next;
            if (next->next != NULL) {
                next->next->prior = forntier ;
            }
            action->prior->next = next;
            next->next = action;
            next->prior = action->prior;
            action->prior = next;
            next = forntier->next;
        }else{
            forntier = next;
            next = next->next;
        }
    }
}
