//
//  WDChapterTwoPointTheePracticeQuestionTwentyOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPointTheePracticeQuestionTwentyOne.h"


int findReciprocalLocationValue(LinkList *list, int reciprocalLocation) {
    if (reciprocalLocation <= 0) {
        return 0;
    }
    LinkList *next = list->next ;
    int count = 0 ;
    while (next != NULL && count < reciprocalLocation) {
        next = next->next;
        count ++ ;
    }
    LinkList *result = list->next ;
    if (next == NULL && count != reciprocalLocation){
        return 0 ;
    }
    while (next != NULL) {
        next = next->next;
        result = result->next ;
    }
    printf("%d  \n",result->data);
    return 1 ;
}
