//
//  WDChapterTwoPointTheePracticeQuestionSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPointTheePracticeQuestionSix.h"
#include "LCBChapterTwoExampleSeven.h"

void sortIncreaseLinkListWDDesign(LinkList *list) {
    LinkList *next = list->next ;
    if (next == NULL) {
        return ;
    }
    sortIncreaseLinkList(list) ;
}
