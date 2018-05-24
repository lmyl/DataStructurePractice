//
//  LCBChapterThreePracticeQuestionFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreePracticeQuestionFive.h"



void reverseQueueElement(CSqQueue *queue) {
    SqStack *stack = initSqStack();
    while (!queueCSqEmpty(queue)) {
        ElemType temp ;
        deCSqQueue(queue, &temp);
        pushSq(stack, temp);
    }
    while (!stackSqEmpty(stack)) {
        ElemType temp ;
        popSq(stack, &temp);
        enCSqQueue(queue, temp);
    }
}
