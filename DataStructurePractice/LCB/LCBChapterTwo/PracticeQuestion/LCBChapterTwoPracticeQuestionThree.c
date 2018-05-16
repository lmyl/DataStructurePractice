//
//  LCBChapterTwoPracticeQuestionThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoPracticeQuestionThree.h"

void  segmentationZerosElementInSqList(SqList *list) {
    ElemType flag = 0,temp;
    int i = 0 ;
    int j = list->length - 1;
    int equat = 0;
    while (equat<=j) {
        if (list->data[equat] < flag) {
            temp = list->data[i] ;
            list->data[i] = list->data[equat];
            list->data[equat] = temp;
            equat++;
            i++;
        }else if (list->data[equat] == flag) {
            equat++;
        }else{
            temp = list->data[equat];
            list->data[equat] = list->data[j];
            list->data[j] = temp;
            j--;
        }
    }
}
