//
//  WDChapterTwoPracticeQuestionFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPracticeQuestionFive.h"
#include "LCBChapterTwoPracticeQuestionTwo.h"

void deletElementRangeInSqListWDDesign(SqList *list,int min,int max)  {
    if (list->length == 0 || min > max) {
        printf("顺序表为空，禁止删除\n");
        exit(0);
    }
    deletElementRangeInSqList(list, min, max);
}
