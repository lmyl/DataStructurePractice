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
    free(list) ;
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


void displayIncreaseLinkListAnotherSolution(LinkList *list)  {
    LinkList *minPre = list ,*min = list->next;
    LinkList *nextPre = list;
    LinkList *next = list->next;
    while (next != NULL) {
        if (next->data < min->data) {
            minPre = nextPre;
            min = next ;
        }
        next = next->next;
        nextPre = nextPre->next ;
    }
    if (list->next == NULL) {
        free(list);
        list = NULL;
        return ;
    }else{
        minPre->next = min->next ;
        printf("%d  ",min->data);
        free(min);
        displayIncreaseLinkListAnotherSolution(list);
    }
}
