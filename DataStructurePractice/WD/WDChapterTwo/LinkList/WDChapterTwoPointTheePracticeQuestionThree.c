//
//  WDChapterTwoPointTheePracticeQuestionThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPointTheePracticeQuestionThree.h"

#define MaxSize 500

void reverseDisplayLinkList(LinkList *list) {
    ElemType data[MaxSize] ;
    int count = 0 ;
    LinkList *next = list->next ;
    while (next != NULL) {
        data[count] = next->data;
        next = next->next ;
        count ++ ;
    }
    printf("(") ;
    while (count >= 1) {
        printf("%d  ",data[count-1]) ;
        count --;
    }
    printf(")\n");
}

void reverseDisplayLinkListRecursive(LinkList *list) ;

void reverseDisplayLinkListAnotherSolution(LinkList *list) {
    printf("(");
    if (list->next != NULL) {
        reverseDisplayLinkListRecursive(list->next);
    }
    printf(")\n");
}

void reverseDisplayLinkListRecursive(LinkList *list){
    if (list->next != NULL) {
        reverseDisplayLinkListRecursive(list->next);
    }
    printf("%d  ",list->data) ;
}
