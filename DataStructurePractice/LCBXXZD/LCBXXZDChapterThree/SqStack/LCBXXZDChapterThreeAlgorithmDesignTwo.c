//
//  LCBXXZDChapterThreeAlgorithmDesignTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterThreeAlgorithmDesignTwo.h"


void displayStackTopToBottom(SqStack *stack) {
    SqStack *backup = initSqStack();
    while (!stackSqEmpty(stack)) {
        int temp ;
        popSq(stack, &temp);
        printf("%d  ",temp);
        pushSq(backup, temp);
    }
    printf("\n");
    while (!stackSqEmpty(backup)) {
        int temp ;
        popSq(backup, &temp);
        pushSq(stack, temp);
    }
}
