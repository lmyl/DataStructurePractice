//
//  LCBChapterThreeExampleEight.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterThreeExampleEight_h
#define LCBChapterThreeExampleEight_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//设计不带头节点只有一个尾节点指针rear的循环单链表存储队列,并实现初始化、进队和出队算法

typedef int ElemType;

typedef struct cqnode{
    ElemType data ;
    struct cqnode *next ;
}CLiQueueNoHead;

CLiQueueNoHead *initCLiQueueNoHead(void);

CLiQueueNoHead * enCLiQueueNoHead(CLiQueueNoHead *queue , ElemType element);

CLiQueueNoHead * deCLiQueueNoHead(CLiQueueNoHead *queue ,ElemType *element ,bool *success);

bool queueCLiQueueNoHeadEmpty(CLiQueueNoHead *queue);

#endif /* LCBChapterThreeExampleEight_h */
