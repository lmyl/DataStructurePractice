//
//  LCBXXZDChapterTwoAlgorithmDesignThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignThree.h"


void  segmentationOneElementInSqListDesign(SqList *list) {
    int i = 0;
    int equat = 0;
    int j = list->length -1;
    int temp ,flag = 1;
    while (equat<=j) {
        if (list->data[equat] < flag) {
            temp = list->data[i];
            list->data[i] = list->data[equat];
            list->data[equat] = temp ;
            equat ++;
            i ++ ;
        }else if (list->data[equat] > flag) {
            temp = list->data[j];
            list->data[j] = list->data[equat];
            list->data[equat] = temp;
            j--;
        }else{
            equat++;
        }
    }
}
