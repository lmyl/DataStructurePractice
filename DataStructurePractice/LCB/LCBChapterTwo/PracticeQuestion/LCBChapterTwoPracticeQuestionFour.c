//
//  LCBChapterTwoPracticeQuestionFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoPracticeQuestionFour.h"


void reverseLinkList(LinkList *list) {
    LinkList *next = list->next;
    LinkList *nextToNext ;
    list->next = NULL;
    while (next != NULL) {
        nextToNext = next->next;
        next->next = list->next;
        list->next = next;
        next = nextToNext ;
    }
}
