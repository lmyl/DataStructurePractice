//
//  LCBXXZDChapterTwoAlgorithmDesignFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignFour.h"

bool segmentationSqListDesignToThreePart(SqList *list,int firstElement,int secondElement) {
    if (firstElement > secondElement) {
        return false ;
    }
    int i = 0 ;
    int j = list->length - 1;
    int divide = 0 ;
    int temp ;
    while (divide<=j) {
        if (list->data[divide] <= firstElement) {
            temp = list->data[divide];
            list->data[divide] = list->data[i];
            list->data[i] = temp;
            divide ++;
            i ++;
        }else if (list->data[divide] >= secondElement) {
            temp = list->data[divide];
            list->data[divide] = list->data[j];
            list->data[j] = temp;
            j--;
        }else{
            divide ++ ;
        }
    }
    return true;
}
