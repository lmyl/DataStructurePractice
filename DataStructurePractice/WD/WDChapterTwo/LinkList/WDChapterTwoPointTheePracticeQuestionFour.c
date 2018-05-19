//
//  WDChapterTwoPointTheePracticeQuestionFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPointTheePracticeQuestionFour.h"

void deleteTneMinValueInLinkList(LinkList *list)  {
    LinkList *next = list->next;
    LinkList *nextPre = list;
    LinkList *minNode = list->next ;
    LinkList *minPre = list ;
    if (next == NULL) {
        return ;
    }
    while (next != NULL) {
        if (next->data < minNode->data ) {
            minNode = next;
            minPre = nextPre ;
        }
        next = next->next;
        nextPre = nextPre->next ;
    }
    minPre->next = minNode->next;
    free(minNode);
}
