//
//  LCBChapterTwoExampleFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/4/1.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoExampleFour.h"


void moveOne(SqList *L) {
    ElemType flag ;
    ElemType temp ;
    getElem(L, 1, &flag);
    int head = 1 ;
    int tail = listLength(L) - 1;
    while (head<tail) {
        while (L->data[head]<=flag && head < tail) {
            head += 1 ;
        }
        while (L->data[tail]>flag && head < tail) {
            tail -= 1 ;
        }
        if (head<tail) {
            temp = L->data[head];
            L->data[head] = L->data[tail];
            L->data[tail] = temp ;
        }
    }
    temp = L->data[tail-1];
    L->data[tail-1] = flag;
    L->data[0] = temp ;
    
}

void moveTwo(SqList *L) {
    ElemType temp ;
    int head = 0 ;
    int tail = listLength(L) - 1;
    ElemType flag ;
    getElem(L, 1, &flag);
    while (head < tail) {
        while (L->data[tail] > flag && head < tail) {
            tail -= 1 ;
        }
        if (head < tail) {
            temp = L->data[tail] ;
            L->data[tail] = L->data[head];
            L->data[head] = temp ;
        }
        while (L->data[head] <= flag && head < tail) {
            head += 1;
        }
        if (head<tail) {
            temp = L->data[tail] ;
            L->data[tail] = L->data[head];
            L->data[head] = temp ;
        }
    }
}
