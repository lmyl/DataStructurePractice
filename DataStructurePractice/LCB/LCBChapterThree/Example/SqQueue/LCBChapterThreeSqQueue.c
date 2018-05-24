//
//  LCBChapterThreeSqQueue.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreeSqQueue.h"



SqQueue * initSqQueue(void) {
    SqQueue *queue = (SqQueue *)malloc(sizeof(SqQueue));
    queue->front = -1;
    queue->rear = -1 ;
    return queue;
}

void destorySqQueue(SqQueue *queue) {
    free(queue);
    queue = NULL ;
}

bool queueSqEmpty(SqQueue *queue) {
    return queue->front == queue->rear ;
}


bool enSqQueue(SqQueue *queue,ElemType element) {
    if (queue->rear == MaxSize-1) {
        return false ;
    }else{
        queue->rear ++ ;
        queue->data[queue->rear] = element ;
        return true ;
    }
}

bool deSqQueue(SqQueue *queue,ElemType *element) {
    if (queue->rear == queue->front) {
        return false ;
    }else{
        queue->front ++ ;
        *element = queue->data[queue->front];
        return true ;
    }
}
