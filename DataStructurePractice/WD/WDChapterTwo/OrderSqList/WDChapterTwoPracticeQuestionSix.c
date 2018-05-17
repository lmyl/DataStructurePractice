//
//  WDChapterTwoPracticeQuestionSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPracticeQuestionSix.h"

void deleteAllSameInOrderSqList(OrderSqList *list) {
    int countPre = 0;
    int length = list->length ;
    if (length == 0 || length == 1) {
        return ;
    }
    int count = 1 ;
    int numbers = 1;
    while (count < length) {
        if (list->data[count] != list->data[countPre]) {
            list->data[numbers] = list->data[count];
            numbers ++ ;
            countPre ++ ;
        }
        count ++ ;
    }
    list->length = numbers ;
}
