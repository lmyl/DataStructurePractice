//
//  LCBXXZDChapterThreeAlgorithmDesignEight.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/28.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterThreeAlgorithmDesignEight_h
#define LCBXXZDChapterThreeAlgorithmDesignEight_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MaxSize 50
//对于环形队列来说，如果知道队尾元素的位置和队列元素的个数，则队头元素所在的位置是可以计算的，请设计这种变体的环形队列数据结构


typedef int ElemType;

typedef struct {
    ElemType data[MaxSize];
    int count ;
    int rear ;
}CSqQueueVariantsNoFront;

CSqQueueVariantsNoFront * initCSqQueueVariantsNoFront(void);

void destoryCSqQueueVariantsNoFront(CSqQueueVariantsNoFront *queue);

bool queueCSqVariantsNoFrontEmpty(CSqQueueVariantsNoFront *queue);


bool enCSqQueueVariantsNoFront(CSqQueueVariantsNoFront *queue,ElemType element);

bool deCSqQueueVariantsNoFront(CSqQueueVariantsNoFront *queue,ElemType *element);


#endif /* LCBXXZDChapterThreeAlgorithmDesignEight_h */
