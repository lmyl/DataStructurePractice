//
//  LCBChapterThreeLiQueue.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterThreeLiQueue_h
#define LCBChapterThreeLiQueue_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ElemType;
typedef struct qnode{
    ElemType data;
    struct qnode *next ;
}QNode;

typedef struct {
    QNode * rear;
    QNode * front ;
}LiQueue;

LiQueue * initLiQueue(void);
QNode * initQNode(void);

void destoryLiQueue(LiQueue *queue);

bool queueLiEmpty(LiQueue *queue);


void enLiQueue(LiQueue *queue,ElemType element);

bool deLiQueue(LiQueue *queue,ElemType *element);

#endif /* LCBChapterThreeLiQueue_h */
