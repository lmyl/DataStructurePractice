//
//  LCBXXZDChapterThreeAlgorithmDesignFive.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterThreeAlgorithmDesignFive_h
#define LCBXXZDChapterThreeAlgorithmDesignFive_h

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MaxSize 500

//用一个一位数组S(设大小为MaxSize)作为两个栈的共享空间，设计此数据结构

typedef int ElemType;

typedef struct {
    ElemType data[MaxSize];
    int topOne ;
    int topTwo ;
}SharedStack;

SharedStack * initSharedStack(void) ;

bool StackSharedEmpty(SharedStack *stack , int stackNumber);


bool pushSharedEmpty(SharedStack *stack, int stackNumber , int element);

bool popSharedEmpty(SharedStack *stack ,int stackNumber ,int *element);

#endif /* LCBXXZDChapterThreeAlgorithmDesignFive_h */
