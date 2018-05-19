//
//  WDChapterTwoPointTheePracticeQuestionNine.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPointTheePracticeQuestionNine.h"
#include "WDChapterTwoPointTheePracticeQuestionSix.h"


void displayIncreaseLinkList(LinkList *list)  {
    sortIncreaseLinkListWDDesign(list);
    LinkList *next = list->next;
    list = NULL ;
    printf("(");
    while (next != NULL) {
        list = next->next;
        printf("%d  ",next->data);
        free(next);
        next = list ;
    }
    printf(")\n");
}
