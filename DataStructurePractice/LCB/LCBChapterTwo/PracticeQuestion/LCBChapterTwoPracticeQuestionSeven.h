//
//  LCBChapterTwoPracticeQuestionSeven.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTwoPracticeQuestionSeven_h
#define LCBChapterTwoPracticeQuestionSeven_h

#include <stdio.h>
#include "LCBChapterTwoCDLinklist.h"
//设非空线性表ha和hb都用带头节点的循环双链表表示，设计一个算法Insert(ha,hb,i)，其功能是：i=0时将线性表hb插入到线性表ha的前面，当i>0时，将线性表hb插入到线性表ha中第i个节点的后面，当i大于等于线性表ha的长度时，将线性表hb插入到ha的后面

CDLinkList * insertTwoCDLinkList(CDLinkList *first,CDLinkList *second,int location) ;

#endif /* LCBChapterTwoPracticeQuestionSeven_h */
