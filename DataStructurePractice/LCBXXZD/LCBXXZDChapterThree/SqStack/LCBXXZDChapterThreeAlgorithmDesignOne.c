//
//  LCBXXZDChapterThreeAlgorithmDesignOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterThreeAlgorithmDesignOne.h"


void transformDecimalToBinary(int number) {
    SqStack *stack = initSqStack();
    while (number != 0) {
        int temp = number % 2;
        pushSq(stack, temp);
        number = number/2 ;
    }
    while (!stackSqEmpty(stack)) {
        int temp ;
        popSq(stack, &temp);
        printf("%d",temp);
    }
    printf("\n");
}
