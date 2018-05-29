//
//  LCBXXZDChapterThreeAlgorithmDesignEight.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/28.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterThreeAlgorithmDesignEight.h"


CSqQueueVariantsNoFront * initCSqQueueVariantsNoFront(void) {
    CSqQueueVariantsNoFront *queue = (CSqQueueVariantsNoFront *)malloc(sizeof(CSqQueueVariantsNoFront));
    queue->count = 0;
    queue->rear = 0;
    return queue ;
}

void destoryCSqQueueVariantsNoFront(CSqQueueVariantsNoFront *queue) {
    free(queue);
    queue = NULL ;
}

bool queueCSqVariantsNoFrontEmpty(CSqQueueVariantsNoFront *queue) {
    return queue->count == 0 ;
}


bool enCSqQueueVariantsNoFront(CSqQueueVariantsNoFront *queue,ElemType element) {
    if (queue->count == MaxSize) {
        return false ;
    }else{
        queue->rear  = (queue->rear + 1 )%MaxSize ;
        queue->data[queue->rear] = element ;
        queue->count ++ ;
        return true ;
    }
}

bool deCSqQueueVariantsNoFront(CSqQueueVariantsNoFront *queue,ElemType *element) {
    if (queue->count == 0) {
        return false ;
    }else {
        int front = (queue->rear - queue->count + MaxSize )%MaxSize ;
        front = (front + 1 )%MaxSize ;
        *element = queue->data[front];
        queue->count -- ;
        return true ;
    }
}
