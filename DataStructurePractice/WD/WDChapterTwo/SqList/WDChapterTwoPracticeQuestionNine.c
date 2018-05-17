//
//  WDChapterTwoPracticeQuestionNine.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPracticeQuestionNine.h"

void locateSqElementAndAdjust(SqList *list,int element) {
    int length = list->length;
    int count = 0;
    while (count < length && list->data[count] < element) {
        count ++ ;
    }
    if (list->data[count] == element) {
        if (count == length-1) {
            return ;
        }else{
            ElemType temp = list->data[count];
            list->data[count] = list->data[count+1];
            list->data[count+1] = temp;
        }
    }else{
        for (int i = length; i>count; i--) {
            list->data[i] = list->data[i-1];
        }
        list->data[count] = element ;
        list->length = length + 1 ;
    }
}
