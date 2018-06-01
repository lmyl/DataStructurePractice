//
//  LCBChapterFivePracticeQuestionTwo.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterFivePracticeQuestionTwo_h
#define LCBChapterFivePracticeQuestionTwo_h

#include <stdio.h>
#include "LCBChapterTwoLinkList.h"

//有一个不带表头节点的单链表，设计以下算法的递归算法

/*
 1.求以h为头指针的单链表节点的个数
 2.正向显示以h为头指针的单链表的所有节点值
 3.反向显示以h为头指针的单链表的所有节点值
 4.删除以h为头指针的单链表中值为x的第一个节点
 5.删除以h为头指针的单链表中值为x的所有节点
 5.输出以h为头指针的单链表中最大节点值
 6.输出以h为头指针的单链表中最小节点值
 */

int lengthInNoHeadLinkList(LinkList *list) ;

void displayForwardNoHeadLinkList(LinkList *list) ;

void displayReverseNoHeadLinkList(LinkList *list) ;

void deleteTheFirstElementEqualValueInNoHeadLinkList(LinkList *list,int value) ;

void deleteAllElementEqualValueInNoHeadLinkList(LinkList *list,int value) ;

int maxInNoHeadLinkList(LinkList *list) ;

int minInNoHeadLinkList(LinkList *list) ;

#endif /* LCBChapterFivePracticeQuestionTwo_h */
