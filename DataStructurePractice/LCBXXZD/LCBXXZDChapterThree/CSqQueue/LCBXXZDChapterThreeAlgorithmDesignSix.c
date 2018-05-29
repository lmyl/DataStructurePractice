//
//  LCBXXZDChapterThreeAlgorithmDesignSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterThreeAlgorithmDesignSix.h"


bool returnTheLastElementInCSQueue(CSqQueue *queue,ElemType *element)  {
    if (queueCSqEmpty(queue)) {
        return false ;
    }
    ElemType lastElement = -MaxSize ;
    int length = (queue->rear - queue->front + MaxSize)%MaxSize ;
    int count = 0 ;
    while (count < length) {
        deCSqQueue(queue, &lastElement);
        enCSqQueue(queue, lastElement);
        count ++ ;
    }
    *element = lastElement ;
    return true ;
}
