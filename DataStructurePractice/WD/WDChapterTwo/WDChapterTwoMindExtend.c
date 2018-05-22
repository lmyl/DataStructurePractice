//
//  WDChapterTwoMindExtend.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/22.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoMindExtend.h"

void heapSortIncreaseWDDesign(SqList *list) ;
void shiftHeapWDDesign(SqList *list ,int low ,int high) ;

void findOutSumTwoElementEqualValue(SqList *list,int number)  {
    if (list->length == 0) {
        return ;
    }
    heapSortIncreaseWDDesign(list);
    int low = 0 ;
    int high = list->length - 1 ;
    while (low<high) {
        while (low < high && list->data[low] + list->data[high] < number) {
            low ++ ;
        }
        while (low < high && list->data[low] + list->data[high] > number) {
            high --;
        }
        if (list->data[low] + list->data[high] ==  number) {
            printf("%d + %d = %d\n",list->data[low], list->data[high] , number);
            low ++ ;
            high -- ;
        }
    }
}


void heapSortIncreaseWDDesign(SqList *list) {
    int high = list->length - 1;
    ElemType temp ;
    for (int i  = high/2; i>=0; i--) {
        shiftHeapWDDesign(list, i, high);
    }
    for (int i = high; i >= 1; i--) {
        temp = list->data[0] ;
        list->data[0] = list->data[i];
        list->data[i] = temp;
        shiftHeapWDDesign(list, 0, i-1);
    }
}



void shiftHeapWDDesign(SqList *list ,int low ,int high)  {
    int i = low ;
    int j = 2*low + 1;
    ElemType temp = list->data[i];
    while (j<=high) {
        if (j+1 <= high && list->data[j+1] > list->data[j]) {
            j++;
        }
        if (temp < list->data[j]) {
            list->data[i] = list->data[j];
            i = j;
            j = 2*i + 1;
        }else{
            break ;
        }
    }
    list->data[i] = temp ;
}
