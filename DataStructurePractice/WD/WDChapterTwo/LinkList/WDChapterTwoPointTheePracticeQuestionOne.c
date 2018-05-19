//
//  WDChapterTwoPointTheePracticeQuestionOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPointTheePracticeQuestionOne.h"

LinkList * deleteAllElementEqualValueInNoHeadNodeLinklist(LinkList *list,int number)  {
    LinkList *next = list;
    LinkList *nextPre = list;
    LinkList *result = NULL ;
    list = NULL ;
    while (next != NULL) {
        if (nextPre == next && next->data == number) {
            next = next->next;
            free(nextPre);
            nextPre = next;
        }else if (nextPre == next && next->data != number) {
            next = next->next ;
            result = nextPre ;
        }else if (next->data != number) {
            next = next->next;
            nextPre = nextPre->next ;
        }else{
            nextPre->next = next->next;
            free(next);
            next = nextPre->next ;
        }
    }
    return result ;
}
