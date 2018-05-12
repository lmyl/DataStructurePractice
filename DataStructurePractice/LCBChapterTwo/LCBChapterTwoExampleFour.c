//
//  LCBChapterTwoExampleFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/4/1.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoExampleFour.h"


void moveOne(SqList *list) {
    ElemType flag,temp ;
    getSqElem(list, 1, &flag);
    int head = 0 ;
    int tail = listSqLength(list) - 1;
    while (head<tail) {
        while (list->data[tail] > flag && head < tail) {
            tail -= 1 ;
        }
        while (list->data[head] <= flag && head < tail) {
            head += 1 ;
        }
        if (head<tail) {
            temp = list->data[head];
            list->data[head] = list->data[tail];
            list->data[tail] = temp ;
        }
    }
    list->data[0] = list->data[tail] ;
    list->data[tail] = flag;
    
    
}

void moveTwo(SqList *list) {
    int head = 0 ;
    int tail = listSqLength(list) - 1;
    ElemType flag ;
    getSqElem(list, 1, &flag);
    while (head<tail) {
        while (tail > head && list->data[tail] > flag) {
            tail -- ;
        }
        if (head<tail) {
            list->data[head] = list->data[tail] ;
        }
        while (tail > head && list->data[head] <= flag) {
            head ++ ;
        }
        if (head<tail) {
            list->data[tail] = list->data[head] ;
        }
    }
    list->data[head] = flag ;
}
