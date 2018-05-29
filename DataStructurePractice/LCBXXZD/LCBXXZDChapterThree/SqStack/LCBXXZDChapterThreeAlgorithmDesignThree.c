//
//  LCBXXZDChapterThreeAlgorithmDesignThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterThreeAlgorithmDesignThree.h"


bool getStackInLocation(SqStack *stack,int location,int *element) {
    int count = 1;
    SqStack *backup = initSqStack();
    while (count < location && !stackSqEmpty(stack)) {
        int temp ;
        popSq(stack, &temp);
        pushSq(backup, temp);
        count ++;
    }
    if (count == location && !stackSqEmpty(stack)) {
        getTopSq(stack, element);
        while (!stackSqEmpty(backup)) {
            int temp ;
            popSq(backup, &temp);
            pushSq(stack, temp);
        }
        return true;
    }else{
        while (!stackSqEmpty(backup)) {
            int temp ;
            popSq(backup, &temp);
            pushSq(stack, temp);
        }
        return false ;
    }
}
