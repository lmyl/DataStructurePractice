//
//  WDChapterTwoPointTheePracticeQuestionFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPointTheePracticeQuestionFive.h"
#include "LCBChapterTwoPracticeQuestionFour.h"

void reverseLinkListWDDesign(LinkList *list) {
    reverseLinkList(list);
}


void reverseLinkListWDDesignAnotherSolution(LinkList *list) {
    LinkList *next = list->next;
    LinkList *nextPre = list ;
    LinkList *nextAfter ;
    if (next != NULL && next->next != NULL) {
        nextAfter = next->next;
        next->next = NULL;
        nextPre = next ;
        next = nextAfter;
    }else{
        return ;
    }
    while (next != NULL) {
        nextAfter = next->next;
        next->next = nextPre ;
        nextPre = next;
        next = nextAfter;
    }
    list->next = nextPre;
}
