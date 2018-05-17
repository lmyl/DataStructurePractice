//
//  LCBXXZDChapterTwoAlgorithmDesignSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignSix.h"

OrderSqList * interSectionOrderSqList(OrderSqList *first,OrderSqList *second) {
    OrderSqList *result = initOrderSqList();
    int count = 0 ;
    int lengthFirst = first->length;
    int startFirst = 0 ;
    int startSecond = 0 ;
    int lengthSecond = second->length;
    while (startFirst < lengthFirst && startSecond < lengthSecond) {
        while (first->data[startFirst] < second->data[startSecond]) {
            startFirst ++ ;
        }
        if (startFirst == lengthFirst) {
            break ;
        }
        while (first->data[startFirst] > second->data[startSecond]) {
            startSecond ++ ;
        }
        if (startSecond == lengthSecond) {
            break ;
        }
        if (first->data[startFirst] == second->data[startSecond]) {
            result->data[count] = first->data[startFirst];
            startFirst ++;
            startSecond ++;
            count ++ ;
        }
    }
    result->length = count;
    return result;
}
