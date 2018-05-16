//
//  LCBXXZDChapterTwoAlgorithmDesignOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignOne.h"


void reverseSqList(SqList *list) {
    int start = 0;
    int end = list->length - 1;
    int temp ;
    while (start < end) {
        temp = list->data[start];
        list->data[start] = list->data[end];
        list->data[end] = temp;
        end --;
        start ++;
    }
}
