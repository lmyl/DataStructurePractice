//
//  LCBChapterTwoDLinkList.h
//  DataStructurePractice
//
//  Created by ly on 2018/4/1.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTwoDLinkList_h
#define LCBChapterTwoDLinkList_h

#include <stdio.h>

typedef int ElemType;

typedef struct DNode{//定义双链表节点类型
    ElemType data ;//存放元素值
    struct DNode *prior ;//指向前驱节点
    struct DNode *next ;//指向后续节点
} DLinkList;

#endif /* LCBChapterTwoDLinkList_h */
