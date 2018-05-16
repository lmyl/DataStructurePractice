//
//  LCBXXZDChapterTwoAlgorithmDesignSeven.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignSeven.h"

OrderSqList * addOrderLinkList(OrderSqList *first,OrderSqList *second) {
    OrderSqList *result = initOrderSqList();
    int count = 0 ;
    int lengthFirst = first->length;
    int startFirst = 0 ;
    int startSecond = 0 ;
    int lengthSecond = second->length;
    while (startFirst <lengthFirst && startSecond < lengthSecond) {
        while (first->data[startFirst] < second->data[startSecond]) {
            result->data[count] = first->data[startFirst];
            startFirst ++ ;
            count ++ ;
        }
        while (first->data[startFirst] > second->data[startSecond]) {
            result->data[count] = second->data[startSecond];
            startSecond ++ ;
            count ++ ;
        }
        if (first->data[startFirst] == second->data[startSecond]) {
            result->data[count] = first->data[startFirst];
            startFirst ++ ;
            startSecond ++ ;
            count ++ ;
        }
    }
    while (startFirst < lengthFirst) {
        result->data[count] = first->data[startFirst];
        startFirst ++ ;
        count ++ ;
    }
    while (startSecond < lengthSecond) {
        result->data[count] = second->data[startSecond];
        startSecond ++ ;
        count ++ ;
    }
    result->length = count;
    return result;
}
