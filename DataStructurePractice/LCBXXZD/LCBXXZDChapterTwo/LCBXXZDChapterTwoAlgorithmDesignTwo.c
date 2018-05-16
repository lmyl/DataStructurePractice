//
//  LCBXXZDChapterTwoAlgorithmDesignTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignTwo.h"

void reverseSqListInRange(SqList *list,int min,int max) {
    int start = min ;
    int end = max ;
    int temp ;
    while (start<end) {
        temp = list->data[start];
        list->data[start] = list->data[end];
        list->data[end] = temp;
        end --;
        start ++;
    }
}

void cyclicShiftSqList(SqList *list,int location) {
    int length = list->length - 1;
    reverseSqListInRange(list, 0, location-1);
    reverseSqListInRange(list, location , length);
    reverseSqListInRange(list, 0, length);
}
