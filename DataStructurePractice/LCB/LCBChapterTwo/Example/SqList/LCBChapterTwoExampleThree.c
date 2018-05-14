//
//  LCBChapterTwoExampleThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/4/1.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoExampleThree.h"


void delnodeOne(SqList *L,ElemType x) {
    ElemType k ;
    int count = 0 ;
    for (int i = 0; i<listSqLength(L); i++) {
        getSqElem(L, i+1, &k);
        if (k != x) {
            L->data[count] = L->data[i];
            count += 1;
        }
    }
    L->length = count;
}

void delondeTwo(SqList *L,ElemType x) {
    int count = 0;
    ElemType k ;
    for (int i = 0; i<listSqLength(L); i++) {
        getSqElem(L, i+1, &k);
        if (k == x) {
            count += 1;
        }else {
            L->data[i-count] = L->data[i];
        }
    }
    L->length -= count ;
}
