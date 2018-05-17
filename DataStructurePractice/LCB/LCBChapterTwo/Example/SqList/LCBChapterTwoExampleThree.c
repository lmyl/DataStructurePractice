//
//  LCBChapterTwoExampleThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/4/1.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoExampleThree.h"


void delnodeOne(SqList *list,ElemType number) {
    ElemType k ;
    int count = 0 ;
    for (int i = 0; i<listSqLength(list); i++) {
        getSqElem(list, i+1, &k);
        if (k != number) {
            list->data[count] = list->data[i];
            count += 1;
        }
    }
    list->length = count;
}

void delondeTwo(SqList *list,ElemType number) {
    int count = 0;
    ElemType k ;
    for (int i = 0; i<listSqLength(list); i++) {
        getSqElem(list, i+1, &k);
        if (k == number) {
            count += 1;
        }else {
            list->data[i-count] = list->data[i];
        }
    }
    list->length -= count ;
}
