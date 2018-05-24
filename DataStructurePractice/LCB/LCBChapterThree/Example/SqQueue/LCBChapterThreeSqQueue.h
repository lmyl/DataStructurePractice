//
//  LCBChapterThreeSqQueue.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterThreeSqQueue_h
#define LCBChapterThreeSqQueue_h

#define MaxSize 500

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct {
    ElemType data[MaxSize];
    int front,rear ;
}SqQueue;


SqQueue * initSqQueue(void);

void destorySqQueue(SqQueue *queue);

bool queueSqEmpty(SqQueue *queue);


bool enSqQueue(SqQueue *queue,ElemType element);

bool deSqQueue(SqQueue *queue,ElemType *element);


#endif /* LCBChapterThreeSqQueue_h */
