//
//  LCBChapterThreeCSqQueue.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreeCSqQueue.h"

CSqQueue * initCSqQueue(void) {
    CSqQueue *queue = (CSqQueue *)malloc(sizeof(CSqQueue));
    queue->front = 0;
    queue->rear = 0 ;
    return queue ;
}

void destoryCSqQueue(CSqQueue *queue) {
    free(queue);
    queue = NULL;
}

bool queueCSqEmpty(CSqQueue *queue) {
    return queue->front == queue->rear ;
}


bool enCSqQueue(CSqQueue *queue,ElemType element) {
    if ((queue->rear + 1)%MaxSize == queue->front) {
        return false ;
    }else{
        queue->rear = (queue->rear+1)%MaxSize ;
        queue->data[queue->rear] = element;
        return true ;
    }
}

bool deCSqQueue(CSqQueue *queue,ElemType *element) {
    if (queue->rear == queue->front) {
        return false ;
    }else{
        queue->front = (queue->front+1)%MaxSize ;
        *element = queue->data[queue->front];
        return true ;
    }
}
