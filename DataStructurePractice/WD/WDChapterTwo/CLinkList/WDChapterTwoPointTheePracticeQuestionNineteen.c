//
//  WDChapterTwoPointTheePracticeQuestionNineteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPointTheePracticeQuestionNineteen.h"


void displayTheMainByRecursiveUntilItIsNULL(CLinkList *list) {
    CLinkList *next = list->next;
    if (next == list) {
        free(list);
        list = NULL ;
        return ;
    }
    CLinkList *nextPre = list ;
    CLinkList *minPre = list ;
    CLinkList *min = list->next ;
    while (next != list) {
        if (next->data < min->data) {
            min = next ;
            minPre = nextPre ;
        }
        next = next->next;
        nextPre = nextPre->next;
    }
    minPre->next = min->next;
    printf("%d  ",min->data);
    free(min);
    displayTheMainByRecursiveUntilItIsNULL(list);
}
