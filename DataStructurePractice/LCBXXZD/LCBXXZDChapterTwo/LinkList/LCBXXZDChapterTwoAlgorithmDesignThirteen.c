//
//  LCBXXZDChapterTwoAlgorithmDesignThirteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignThirteen.h"


void segmentationZerosElementInLinkList(LinkList *list) {
    LinkList *next = list->next;
    LinkList *nextPre = list;
    LinkList *action = list->next;
    LinkList *actionPre = list;
    while (next != NULL) {
        action = list->next;
        actionPre = list;
        while (action != next && action->data < next->data) {
            action = action->next;
            actionPre = actionPre->next;
        }
        if (next == action) {
            nextPre = nextPre->next;
            next = next->next;
        }else{
            actionPre ->next = next;
            nextPre ->next = next->next;
            next -> next = action ;
            next = nextPre->next;
        }
    }
}
