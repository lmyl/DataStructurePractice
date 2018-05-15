//
//  LCBChapterTwoPracticeQuestionFive.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTwoPracticeQuestionFive_h
#define LCBChapterTwoPracticeQuestionFive_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//设有一个双链表h，每个节点中除有prior、data和next三个域外，还有一个访问频度域freq，在链表被启用之前，其值均初始化为0 ，每当进行LocateNode(h,x)运算时，令元素值为x的节点中freq域的值加1，并调整表中节点的次序，使其按访问频度的递减顺序排列，以便使频繁访问的节点总是靠近头，编写一个符合要求的LocateNode运算算法。

typedef int ElemType;

typedef struct DNodeVariants{//定义双链表节点类型
    ElemType data ;//存放元素值
    int freq ;
    struct DNodeVariants *prior ;//指向前驱节点
    struct DNodeVariants *next ;//指向后续节点
} DLinkListVariants;

//头插法，时间复杂度为O(n)
DLinkListVariants * createDLinkListVariantsF(ElemType numbers[], int count);

DLinkListVariants * initDLinkListVariants(void) ;

void dispDLinkListVariants(DLinkListVariants *list);

void locateNode(DLinkListVariants *list,int element);

#endif /* LCBChapterTwoPracticeQuestionFive_h */
