//
//  WDChapterTwoPointTheePracticeQuestionTwentyThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPointTheePracticeQuestionTwentyThree.h"


void deleteAllSameAbsValue(LinkList *list,int upNumebr) {
    int *flag = (int *)malloc(sizeof(int) * upNumebr);
    for (int i = 0 ; i<upNumebr; i++) {
        flag[i] = 0 ;
    }
    LinkList *next = list->next;
    LinkList *nextPre = list;
    while (next != NULL) {
        if (flag[abs(next->data)] == 0) {
            flag[abs(next->data)] = 1 ;
            next = next->next;
            nextPre = nextPre->next ;
        }else{
            nextPre ->next = next->next;
            free(next);
            next = nextPre->next;
        }
    }
}
