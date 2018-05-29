//
//  LCBXXZDChapterThreeAlgorithmDesignNine.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/28.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterThreeAlgorithmDesignNine.h"


CSqQueueVariantsTag * initCSqQueueVariantsTag(void) {
    CSqQueueVariantsTag *queue = (CSqQueueVariantsTag *)malloc(sizeof(queue));
    queue->front = 0 ;
    queue->rear = 0;
    queue->tag = 0;
    return queue ;
}

void destoryCSqQueueVariantsTag(CSqQueueVariantsTag *queue) {
    free(queue);
    queue = NULL ;
}

bool queueCSqVariantsTagEmpty(CSqQueueVariantsTag *queue) {
    return queue->tag == 0 && queue->rear == queue->front ;
}


bool enCSqQueueVariantsTag(CSqQueueVariantsTag *queue,ElemType element) {
    if (queue->tag == 1 && queue->rear == queue->front) {
        return false ;
    }else{
        queue->rear = (queue->rear + 1)% MaxSize ;
        queue->data[queue->rear] = element ;
        if (queue->rear == queue->rear) {
            queue->tag = 1;
        }
        return true ;
    }
}

bool deCSqQueueVariantsTag(CSqQueueVariantsTag *queue,ElemType *element) {
    if (queue->front == queue->rear && queue->tag == 0) {
        return false ;
    }else{
        queue->front = (queue->front + 1) % MaxSize ;
        *element = queue->data[queue->front] ;
        if (queue->tag == 1) {
            queue->tag = 0 ;
        }
        return true ;
    }
}
