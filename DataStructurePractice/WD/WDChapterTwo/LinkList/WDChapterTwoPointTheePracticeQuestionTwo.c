//
//  WDChapterTwoPointTheePracticeQuestionTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPointTheePracticeQuestionTwo.h"


void deleteAllElementEqualValueInLinklist(LinkList *list ,int number) {
    LinkList *next = list->next;
    LinkList *nextPre = list ;
    while (next != NULL) {
        if (next->data == number) {
            nextPre->next = next->next;
            free(next);
            next = nextPre->next ;
        }else{
            next = next->next;
            nextPre = nextPre->next ;
        }
    }
}
