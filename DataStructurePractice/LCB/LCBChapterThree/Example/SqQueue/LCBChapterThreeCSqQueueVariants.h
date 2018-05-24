//
//  LCBChapterThreeCSqQueueVariants.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterThreeCSqQueueVariants_h
#define LCBChapterThreeCSqQueueVariants_h

#define MaxSize 50

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//使用队头指针和队列中元素中的个数，就可以计算出尾指针，设计这种数据结构
typedef int ElemType;
typedef struct {
    ElemType data[MaxSize];
    int front ,count ;
}CSqQueueVariants;

CSqQueueVariants * initCSqQueueVariants(void);

void destoryCSqQueueVariants(CSqQueueVariants *queue);

bool queueCSqVariantsEmpty(CSqQueueVariants *queue);


bool enCSqQueueVariants(CSqQueueVariants *queue,ElemType element);

bool deCSqQueueVariants(CSqQueueVariants *queue,ElemType *element);
#endif /* LCBChapterThreeCSqQueueVariants_h */
