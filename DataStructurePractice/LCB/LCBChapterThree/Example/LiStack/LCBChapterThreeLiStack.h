//
//  LCBChapterThreeLiStack.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/23.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterThreeLiStack_h
#define LCBChapterThreeLiStack_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ElemType;

typedef struct linkNode{
    ElemType data ;
    struct linkNode *next ;
    
}LiStack;


LiStack * initLiStack(void);

void destoryLiStack(LiStack *stack) ;

bool stackLiEmpty(LiStack *stack);

void pushLi(LiStack *stack,ElemType element);

bool popLi(LiStack *stack,ElemType *element) ;

bool getTop(LiStack *stack ,ElemType *element);

#endif /* LCBChapterThreeLiStack_h */
