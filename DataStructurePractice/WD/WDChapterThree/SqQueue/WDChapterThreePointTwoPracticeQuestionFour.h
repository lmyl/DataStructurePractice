//
//  WDChapterThreePointTwoPracticeQuestionFour.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/28.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterThreePointTwoPracticeQuestionFour_h
#define WDChapterThreePointTwoPracticeQuestionFour_h

#include <stdio.h>
#include "LCBChapterThreeSqStack.h"

//利用两个栈实现队列数据结构

typedef struct {
    SqStack *inputStack ;
    SqStack *outStack ;
}QueueByStack;

QueueByStack * initSqQueueByStack(void);

void destorySqQueueByStack(QueueByStack *queue);

bool queueSqByStackEmpty(QueueByStack *queue);


bool enSqQueueByStack(QueueByStack *queue,ElemType element);

bool deSqQueueByStack(QueueByStack *queue,ElemType *element);

#endif /* WDChapterThreePointTwoPracticeQuestionFour_h */
