//
//  LCBChapterTwoPracticeQuestionTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoPracticeQuestionTwo.h"


void deletElementRangeInSqList(SqList *list,int min,int max) {
    int length = list->length;
    int count = 0 ;
    for (int i = 0; i<length; i++) {
        if (list->data[i] < min || list->data[i] >max) {
            list->data[count] = list->data[i];
            count ++ ;
        }
    }
    list->length = count ;
}
