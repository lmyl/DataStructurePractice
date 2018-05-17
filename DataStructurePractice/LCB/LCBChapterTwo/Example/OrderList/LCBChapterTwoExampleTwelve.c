//
//  LCBChapterTwoExampleTwelve.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoExampleTwelve.h"


OrderSqList * mergeOrderSqList(OrderSqList *first ,OrderSqList *second) {
    int firstIP,secondIP,mergeCount,firstLength , secondLength;
    firstIP = secondIP = mergeCount = 0;
    firstLength = first->length;
    secondLength = second->length;
    OrderSqList *result = initOrderSqList();
    while (firstIP<firstLength && secondIP < secondLength) {
        if (first->data[firstIP] <= second->data[secondIP]) {
            result->data[mergeCount] = first->data[firstIP] ;
            mergeCount ++ ;
            firstIP ++ ;
        }else{
            result->data[mergeCount] = second->data[secondIP];
            mergeCount ++;
            secondIP ++ ;
        }
    }
    while (firstIP<firstLength) {
        result->data[mergeCount] = first->data[firstIP];
        firstIP ++;
        mergeCount ++;
    }
    while (secondIP<secondLength) {
        result->data[mergeCount] = second->data[secondIP];
        secondIP ++;
        mergeCount ++;
    }
    result->length = mergeCount ;
    return result;
}

OrderLinkList * mergeOrderLinkList(OrderLinkList *first ,OrderLinkList *second) {
    OrderLinkList *result = initOrderLinkList();
    OrderLinkList *resultNext = result ;
    OrderLinkList *nextFirst = first->next;
    OrderLinkList *nextSecond = second->next;
    while (nextFirst != NULL && second != NULL) {
        OrderLinkList *data = initOrderLinkList();
        if (nextFirst->data <= nextSecond->data) {
            data->data = nextFirst->data ;
            nextFirst = nextFirst->next;
        }else{
            data->data = nextSecond->data;
            nextSecond = nextSecond->next;
        }
        data->next = resultNext ->next;
        resultNext->next = data;
        resultNext = resultNext->next ;
    }
    while (nextFirst != NULL) {
        OrderLinkList *data = initOrderLinkList();
        data->data = nextFirst->data;
        data->next = resultNext ->next;
        resultNext->next = data;
        resultNext = resultNext->next ;
        nextFirst = nextFirst->next;
    }
    while (nextSecond != NULL) {
        OrderLinkList *data = initOrderLinkList();
        data->data = nextSecond->data;
        data->next = resultNext ->next;
        resultNext->next = data;
        resultNext = resultNext->next ;
        nextSecond = nextSecond->next;
    }
    return result ;
}
