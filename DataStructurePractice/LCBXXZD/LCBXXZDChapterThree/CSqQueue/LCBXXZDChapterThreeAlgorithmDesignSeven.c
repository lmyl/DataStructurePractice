//
//  LCBXXZDChapterThreeAlgorithmDesignSeven.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterThreeAlgorithmDesignSeven.h"


bool deleteLoactionInCSQueue(CSqQueue *queue, int location,ElemType *element) {
    int length = (queue->rear - queue->front + MaxSize )%MaxSize ;
    if ( length < location || location <= 0 ) {
        return false ;
    }
    int count = 1 ;
    int temp ;
    while (count < location) {
        deCSqQueue(queue, &temp);
        enCSqQueue(queue, temp);
        count ++ ;
    }
    deCSqQueue(queue, &temp);
    *element = temp ;
    count ++ ;
    while (count <= length) {
        deCSqQueue(queue, &temp);
        enCSqQueue(queue, temp);
        count ++ ;
    }
    return true ;
}
