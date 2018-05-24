//
//  LCBChapterThreeCSqQueue.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterThreeCSqQueue_h
#define LCBChapterThreeCSqQueue_h

#define MaxSize 500

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct {
    ElemType data[MaxSize];
    int rear,front;
}CSqQueue;

CSqQueue * initCSqQueue(void);

void destoryCSqQueue(CSqQueue *queue);

bool queueCSqEmpty(CSqQueue *queue);


bool enCSqQueue(CSqQueue *queue,ElemType element);

bool deCSqQueue(CSqQueue *queue,ElemType *element);


#endif /* LCBChapterThreeCSqQueue_h */
