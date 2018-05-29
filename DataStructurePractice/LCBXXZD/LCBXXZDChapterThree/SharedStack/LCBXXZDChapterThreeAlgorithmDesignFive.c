//
//  LCBXXZDChapterThreeAlgorithmDesignFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterThreeAlgorithmDesignFive.h"


SharedStack * initSharedStack(void) {
    SharedStack *sharedStack = (SharedStack *)malloc(sizeof(SharedStack));
    sharedStack->topOne = -1;
    sharedStack->topTwo = MaxSize ;
    return sharedStack ;
}

bool StackSharedEmpty(SharedStack *stack , int stackNumber) {
    if (stackNumber == 1) {
        return stack->topOne == -1 ;
    }else{
        return stack->topTwo == MaxSize ;
    }
}


bool pushSharedEmpty(SharedStack *stack, int stackNumber , int element) {
    if (stackNumber == 1) {
        if (stack->topOne + 1 == stack->topTwo) {
            return false ;
        }else{
            stack->topOne ++ ;
            stack->data[stack->topOne] = element;
            return true ;
        }
    }else{
        if (stack->topOne + 1 == stack->topTwo) {
            return false ;
        }else{
            stack->topTwo --;
            stack->data[stack->topTwo] = element ;
            return true ;
        }
    }
}

bool popSharedEmpty(SharedStack *stack ,int stackNumber ,int *element) {
    if (stackNumber == 1) {
        if (stack->topOne == -1) {
            return false ;
        }else{
            *element = stack->data[stack->topOne] ;
            stack->topOne -- ;
            return true ;
        }
    }else{
        if (stack->topTwo == MaxSize) {
            return false ;
        }else {
            *element = stack->data[stack->topTwo];
            stack->topTwo ++ ;
            return true ;
        }
    }
}
