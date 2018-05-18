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
    if (count < length && list->data[count] == element) {
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

void locateSqElementAndAdjustTheBestSlove(SqList *list,int element) {
    int high = list->length - 1;
    int low = 0 ;
    int mid = 0 ;
    while (low <= high) {
        mid = (low + high) / 2 ;
        if (list->data[mid] == element) {
            break ;
        }else if (list->data[mid] > element) {
            high = mid - 1 ;
        }else{
            low = mid + 1 ;
        }
    }
    if (low > high) {
        for (int i = list->length ; i > high + 1; i --) {
            list->data[i] = list->data[i-1] ;
        }
        list->data[high+1] = element;
        list->length += 1;
    }else{
        if (mid < list->length - 1) {
            ElemType temp = list->data[mid];
            list->data[mid] = list->data[mid+1];
            list->data[mid+1] = temp;
        }
    }
}
