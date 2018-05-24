//
//  LCBChapterThreeCSqQueueVariants.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreeCSqQueueVariants.h"


CSqQueueVariants * initCSqQueueVariants(void) {
    CSqQueueVariants *queue = (CSqQueueVariants *)malloc(sizeof(CSqQueueVariants));
    queue->front = 0;
    queue->count = 0;
    return queue ;
}

void destoryCSqQueueVariants(CSqQueueVariants *queue) {
    free(queue);
    queue = NULL ;
}

bool queueCSqVariantsEmpty(CSqQueueVariants *queue) {
    return queue->count == 0;
}


bool enCSqQueueVariants(CSqQueueVariants *queue,ElemType element) {
    if (queue->count == MaxSize ) {
        return false ;
    }else{
        queue->data[((queue->front + queue->count)%MaxSize + 1)%MaxSize] = element ;
        queue->count ++ ;
        return true ;
    }
}

bool deCSqQueueVariants(CSqQueueVariants *queue,ElemType *element) {
    if (queue->count == 0) {
        return false ;
    }else{
        queue->front = (queue->front + 1)%MaxSize ;
        queue->count -- ;
        *element = queue->data[queue->front] ;
        return true ;
    }
}
