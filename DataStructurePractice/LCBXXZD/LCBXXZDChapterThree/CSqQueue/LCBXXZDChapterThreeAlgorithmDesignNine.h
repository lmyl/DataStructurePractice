//
//  LCBXXZDChapterThreeAlgorithmDesignNine.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/28.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterThreeAlgorithmDesignNine_h
#define LCBXXZDChapterThreeAlgorithmDesignNine_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MaxSize 4
//设计一个环形队列，用front和rear分别作为队头和队尾指针，另外用一个标志tag标识队列可能空(0)或可能满(1)，这样加上front == rear 可以作为队空和队满的条件，设计这样的数据结构

typedef int ElemType;

typedef struct {
    ElemType data[MaxSize];
    int front ;
    int rear ;
    int tag ;
}CSqQueueVariantsTag;

CSqQueueVariantsTag * initCSqQueueVariantsTag(void);

void destoryCSqQueueVariantsTag(CSqQueueVariantsTag *queue);

bool queueCSqVariantsTagEmpty(CSqQueueVariantsTag *queue);


bool enCSqQueueVariantsTag(CSqQueueVariantsTag *queue,ElemType element);

bool deCSqQueueVariantsTag(CSqQueueVariantsTag *queue,ElemType *element);

#endif /* LCBXXZDChapterThreeAlgorithmDesignNine_h */
