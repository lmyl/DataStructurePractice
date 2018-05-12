//
//  LCBChapterTwoExampleFive.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/12.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTwoExampleFive_h
#define LCBChapterTwoExampleFive_h

#include "LCBChapterTwoLinkList.h"

#include <stdio.h>

typedef struct {
    LinkList* result[2];
}LCBChapterTwoExampleFive;
//有一个带头节点的单链表L={a1,b1,a2,b2,...,an,bn}，设计一个算法将其拆分成两个带头节点的单链表L1和L2，L1={a1,a2,a3,...,an},L2={bn,bn-1,bn-3,...,b1}.要求L1使用L的头节点
LCBChapterTwoExampleFive* splitLinkList(LinkList *list) ;

#endif /* LCBChapterTwoExampleFive_h */
