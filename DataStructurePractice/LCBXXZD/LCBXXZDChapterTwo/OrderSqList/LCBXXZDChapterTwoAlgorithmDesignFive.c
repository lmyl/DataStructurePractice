//
//  LCBXXZDChapterTwoAlgorithmDesignFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignFive.h"
#include "LCBChapterTwoExampleTwelve.h"

OrderSqList * mergeOrderSqListDesign(OrderSqList *firstList,OrderSqList *secondList) {
    return mergeOrderSqList(firstList, secondList);
}


void mergeOrderSqListDesignNotUseThirdParty(OrderSqList *firstList,OrderSqList *secondList) {
    int end = firstList->length + secondList->length - 1 ;
    int endFirst = firstList->length - 1;
    int endSecond = secondList->length - 1;
    while (endFirst >= 0 && endSecond >= 0) {
        if (firstList->data[endFirst] > secondList->data[endSecond]) {
            firstList->data[end] = firstList->data[endFirst];
            endFirst--;
            end--;
        }else {
            firstList->data[end] = secondList->data[endSecond];
            endSecond--;
            end--;
        }
    }
    if (endFirst < 0) {
        while (endSecond >= 0) {
            firstList->data[end] = secondList->data[endSecond];
            endSecond--;
            end--;
        }
    }else{
        while (endFirst >= 0) {
            firstList->data[end] = firstList->data[endFirst];
            endFirst--;
            end--;
        }
    }
    firstList->length = firstList->length + secondList->length  ;
}

OrderSqList * changeSqListToOrderSqList(SqList *list,int location) {
    int action = location ;
    int start = 0 ;
    int end = list->length - 1 ;
    int temp ;
    while (action <= end && start < action) {
        while (list->data[action] >= list->data[start] && start < action) {
            start ++ ;
        }
        if (start == action) {
            action ++ ;
        }else{
            temp = list->data[action];
            for (int i = action; i>start; i--) {
                list->data[i] = list->data[i-1];
            }
            list->data[start] = temp ;
            action ++;
            start ++;
        }
    }
    
    return (OrderSqList *)list;
}
