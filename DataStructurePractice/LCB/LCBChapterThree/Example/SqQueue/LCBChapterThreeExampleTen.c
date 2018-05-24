//
//  LCBChapterThreeExampleTen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreeExampleTen.h"

bool enCSqQueueAtFront(CSqQueue *queue,ElemType element){
    if ((queue->front - 1 + MaxSize )%MaxSize == queue->rear) {
        return false;
    }else{
        queue->data[queue->front] = element ;
        queue->front = (queue->rear-1 + MaxSize)%MaxSize ;
        return true ;
    }
}

bool daCSqQueueAtRear(CSqQueue *queue,ElemType *element) {
    if (queue->front == queue->rear) {
        return false;
    }else{
        *element = queue->data[queue->rear];
        queue->rear = (queue->rear-1 + MaxSize)%MaxSize;
        return true;
    }
}
