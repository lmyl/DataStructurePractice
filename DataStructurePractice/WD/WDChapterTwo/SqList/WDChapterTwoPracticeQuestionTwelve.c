//
//  WDChapterTwoPracticeQuestionTwelve.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPracticeQuestionTwelve.h"

void heapSortIncrease(SqList *list) ;
void shiftHeap(SqList *list ,int low ,int high) ;

int findOutMainElement(SqList *list)  {
    int length = list->length;
    if (length == 0) {
        return 0;
    }
    heapSortIncrease(list);
    int count = 0 ;
    int muchPre = list->data[0] ;
    for (int i = 0; i<length; i++) {
        if (list->data[i] == muchPre) {
            count ++ ;
            if (count > length/2) {
                return muchPre ;
            }
        }else{
            muchPre = list->data[i];
            count = 1;
        }
    }
    return 0;
}


void shiftHeap(SqList *list ,int low ,int high) {
    int i = low ,j = 2*i + 1;
    ElemType temp = list->data[i] ;
    while (j <= high) {
        if (j < high && list->data[j] < list->data[j+1]) {
            j ++ ;
        }
        if (temp < list->data[j]) {
            list->data[i] = list->data[j];
            i = j;
            j = 2*i + 1 ;
        }else{
            break ;
        }
    }
    list->data[i] = temp ;
}


void heapSortIncrease(SqList *list) {
    ElemType temp ;
    int length = list->length ;
    for (int i = (length-1)/2; i>=0; i--) {
        shiftHeap(list, i, length-1);
    }
    for (int i = length-1; i>=1; i--) {
        temp = list->data[0];
        list->data[0] = list->data[i];
        list->data[i] = temp ;
        shiftHeap(list, 0, i-1);
    }
}

int findOutMainElementTheBestSlove(SqList *list) {
    int length = list->length;
    ElemType temp ;
    if (length == 0) {
        return  0;
    }
    temp = list->data[0];
    int count = 1 ;
    for (int i = 1; i<length; i++) {
        if (list->data[i] == temp) {
            count ++ ;
        }else{
            count -- ;
        }
        if (count == -1) {
            temp = list->data[i];
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i<length; i++) {
        if (list->data[i] == temp) {
            count ++ ;
        }
    }
    if (count > length/2) {
        return temp;
    }else{
        return 0;
    }
}
