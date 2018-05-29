//
//  WDChapterThreePointTwoPracticeQuestionFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/28.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterThreePointTwoPracticeQuestionFour.h"


QueueByStack * initSqQueueByStack(void) {
    QueueByStack *queue = (QueueByStack *)malloc(sizeof(QueueByStack));
    queue->inputStack = initSqStack();
    queue->outStack = initSqStack() ;
    return queue ;
}

void destorySqQueueByStack(QueueByStack *queue) {
    destorySqStack(queue->inputStack);
    destorySqStack(queue->outStack);
    free(queue) ;
    queue = NULL ;
}

bool queueSqByStackEmpty(QueueByStack *queue) {
    return stackSqEmpty(queue->inputStack) && stackSqEmpty(queue->outStack) ;
}


bool enSqQueueByStack(QueueByStack *queue,ElemType element) {
    if (queue->inputStack->top == MaxSize - 1 && !stackSqEmpty(queue->outStack)) {
        return false ;
    }else{
        if (queue->inputStack->top == MaxSize - 1) {
            while (!stackSqEmpty(queue->inputStack)) {
                int temp ;
                popSq(queue->inputStack, &temp) ;
                pushSq(queue->outStack, temp) ;
            }
        }
        pushSq(queue->inputStack, element) ;
        return true ;
    }
}

bool deSqQueueByStack(QueueByStack *queue,ElemType *element) {
    if (stackSqEmpty(queue->inputStack) && stackSqEmpty(queue->outStack)) {
        return false ;
    }else{
        if (stackSqEmpty(queue->outStack)) {
            while (!stackSqEmpty(queue->inputStack)) {
                int temp ;
                popSq(queue->inputStack, &temp) ;
                pushSq(queue->outStack, temp) ;
            }
        }
        popSq(queue->outStack, element) ;
        return true ;
    }
}
