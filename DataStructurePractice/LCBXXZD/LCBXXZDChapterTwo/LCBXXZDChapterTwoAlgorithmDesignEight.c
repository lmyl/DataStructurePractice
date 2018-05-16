//
//  LCBXXZDChapterTwoAlgorithmDesignEight.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignEight.h"


OrderSqList * subOrderLinkList(OrderSqList *first,OrderSqList *second) {
    OrderSqList *result = initOrderSqList();
    int count = 0 ;
    int lengthFirst = first->length;
    int startFirst = 0 ;
    int startSecond = 0 ;
    int lengthSecond = second->length;
    while (startFirst < lengthFirst && startSecond < lengthSecond) {
        while (first->data[startFirst] < second->data[startSecond]) {
            result->data[count] = first->data[startFirst];
            count ++ ;
            startFirst ++;
        }
        if (first->data[startFirst] == second->data[startSecond]) {
            startFirst ++;
            startSecond ++ ;
        }else{
            startSecond ++ ;
        }
    }
    if (startSecond == lengthSecond) {
        while (startFirst < lengthFirst) {
            result->data[count] = first->data[startFirst];
            count ++ ;
            startFirst ++;
        }
    }
    result->length = count;
    return result ;
}
