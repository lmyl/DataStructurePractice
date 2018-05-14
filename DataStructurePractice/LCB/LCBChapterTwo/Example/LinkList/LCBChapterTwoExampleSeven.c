//
//  LCBChapterTwoExampleSeven.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoExampleSeven.h"


void sortIncreaseLinkList(LinkList *list) {
    LinkList *next = list->next->next;
    LinkList *nextPre = list->next ;
    LinkList *action ,*actionPre;
    while (next != NULL) {
        action = list->next ;
        actionPre = list;
        while (action != next && action->data < next->data) {
            action = action->next ;
            actionPre = actionPre->next ;
        }
        if (action != next) {
            actionPre->next = next;
            nextPre->next = next->next;
            next->next = action ;
            next = nextPre->next;
        }else{
            nextPre = nextPre->next ;
            next = nextPre->next;
        }
    }
}
