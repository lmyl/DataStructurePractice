//
//  LCBChapterTwoPracticeQuestionThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoPracticeQuestionThree.h"

void  segmentationTheFirstElementInSqList(SqList *list) {
    ElemType flag = 0,temp;
    int i = 0 ;
    int j = list->length - 1;
    while (i<j) {
        while (list->data[j] >= flag && j>i) {
            j--;
        }
        while (list->data[i] < flag && j>i) {
            i++;
        }
        if (i<j) {
            temp = list->data[i];
            list->data[i] = list->data[j];
            list->data[j] = temp;
            i++;
            j--;
        }
    }
}
