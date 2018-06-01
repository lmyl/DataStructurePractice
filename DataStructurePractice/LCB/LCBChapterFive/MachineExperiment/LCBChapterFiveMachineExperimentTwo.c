//
//  LCBChapterFiveMachineExperimentTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFiveMachineExperimentTwo.h"

#define ThingsNumber 5

double valueAndWeight[2][ThingsNumber] = {
     {4,5,6,2,2},{6,4,5,3,6}
};

typedef struct {
    int thingNumber[ThingsNumber];
    int count ;
}Bag;

typedef struct {
    Bag bag ;
    double value ;
}ResultBag;

ResultBag knapsackProblemByReverse(double weight ,int location) ;
void dislayBag(ResultBag bag) ;

void knapsackProblem(double weight) {
    Bag bag ;
    bag.count = 0 ;
    ResultBag maxBag = knapsackProblemByReverse(weight, 0) ;
    dislayBag(maxBag);
}

ResultBag knapsackProblemByReverse(double weight ,int location) {
    if (location < ThingsNumber) {
        ResultBag notIncludeIt = knapsackProblemByReverse(weight, location + 1) ;
        if (valueAndWeight[0][location] <= weight) {
            ResultBag includeIt = knapsackProblemByReverse(weight - valueAndWeight[0][location] , location + 1) ;
            includeIt.value = includeIt.value + valueAndWeight[1][location];
            if (notIncludeIt.value < includeIt.value) {
                includeIt.bag.count ++ ;
                includeIt.bag.thingNumber[includeIt.bag.count-1] = location + 1 ;
                return includeIt ;
            }else{
                return notIncludeIt ;
            }
        }
        return notIncludeIt ;
    }
    Bag bag ;
    bag.count = 0 ;
    ResultBag bagResult = {bag, 0} ;
    return bagResult ;
}

void dislayBag(ResultBag bag) {
    printf("总价值\n%f\n",bag.value);
    printf("商品序号为:\n");
    for (int i = 0; i<bag.bag.count - 1; i++) {
        printf("%d  ",bag.bag.thingNumber[i]);
    }
    printf("%d\n",bag.bag.thingNumber[bag.bag.count-1]);
}


