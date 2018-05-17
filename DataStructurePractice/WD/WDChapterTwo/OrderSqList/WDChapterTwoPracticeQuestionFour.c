

//
//  WDChapterTwoPracticeQuestionFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPracticeQuestionFour.h"


void deletElementRangeInOrderSqList(OrderSqList *list,int min,int max) {
    int length = list->length;
    if (length == 0 || min > max) {
        printf("顺序表为空，禁止删除\n");
        exit(0);
    }
    int count = 0;
    for (int i = 0; i<length; i++) {
        if (list->data[i] < min || list->data[i] > max) {
            list->data[count] = list->data[i];
            count ++ ;
        }
    }
    list->length = count;
}
