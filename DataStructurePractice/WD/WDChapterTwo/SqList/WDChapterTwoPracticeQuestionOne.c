//
//  WDChapterTwoPracticeQuestionOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPracticeQuestionOne.h"

int deleteTheMinAndAdjustTheLastToIt(SqList *list)  {
    if (list->length == 0) {
        printf("顺序表为空，禁止删除\n");
        exit(0) ;
    }
    int length = list->length ;
    int min = list->data[0] ;
    int minlocation = 0 ;
    int count = 0 ;
    while (count<length) {
        if (list->data[count] < min) {
            min = list->data[count];
            minlocation = count ;
        }
        count ++ ;
    }
    list->data[minlocation] = list->data[length - 1];
    list->length = length - 1 ;
    return min; 
}
