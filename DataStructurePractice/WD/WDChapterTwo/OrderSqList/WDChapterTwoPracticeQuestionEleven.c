//
//  WDChapterTwoPracticeQuestionEleven.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPracticeQuestionEleven.h"


int findOutTwoOrderSqListMedian(OrderSqList *first,OrderSqList *second) {
    int firstLength = first->length;
    int secondLength = second->length;
    int medianLocation = (firstLength+secondLength+1)/2;
    int count = 0 ;
    int firstAction = 0;
    int secondAction = 0 ;
    int flag = -1 ;
    while (firstAction < firstLength && secondAction < secondLength && count < medianLocation) {
        if (first->data[firstAction] < second->data[secondAction]) {
            count ++ ;
            firstAction ++ ;
            flag = 1;
        }else{
            count ++ ;
            secondAction ++ ;
            flag = 2;
        }
    }
    if (firstAction < firstLength && count < medianLocation) {
        return first->data[medianLocation - count + firstAction - 1];
    }else if (secondAction < secondLength && count < medianLocation) {
        return second->data[medianLocation - count - 1 + secondAction];
    }else{
        if (flag == 1) {
            return first->data[firstAction-1] ;
        }else if (flag == 2) {
            return second->data[secondAction-1];
        }else{
            return -MaxSize ;
        }
    }
}

int findOutTwoEqualLengthOrderSqListMedian(OrderSqList *first,OrderSqList *second)  {
    int firstLow = 0 , secondLow = 0 ;
    int firstUp = first->length-1 , secondUp = second->length-1;
    if (firstUp + secondUp == -2) {
        return -MaxSize;
    }
    while (firstLow != firstUp || secondLow != secondUp) {
        int firstMidLocation = ( firstUp + firstLow )/2;
        int secondMidLocation = (secondLow + secondUp )/2;
        if (first->data[firstMidLocation] == second->data[secondMidLocation]) {
            return first->data[firstMidLocation];
        }else if (first->data[firstMidLocation] < second->data[secondMidLocation]) {
            if ((firstUp + firstLow) % 2 == 0) {
                firstLow = firstMidLocation;
                secondUp = secondMidLocation ;
            }else{
                firstLow = firstMidLocation + 1;
                secondUp = secondMidLocation ;
            }
        }else{
            if ((secondUp + secondLow) % 2 == 0) {
                firstUp = firstMidLocation;
                secondLow = secondMidLocation;
            }else{
                firstUp = firstMidLocation;
                secondLow = secondMidLocation + 1;
            }
        }
    }
    return first->data[firstLow] < second->data[secondLow] ? first->data[firstLow] : second->data[secondLow] ;
}
