//
//  LCBChapterTwoLinkList.h
//  DataStructurePractice
//
//  Created by ly on 2018/4/1.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTwoLinkList_h
#define LCBChapterTwoLinkList_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ElemType;//自类型定义

typedef struct LNode{//定义单链表节点类型
    ElemType data ;//存放元素值
    struct LNode *next ;//指向后续节点
} LinkList ;

//MARK:建立单链表
void createListF(LinkList *L ,ElemType a[], int n);

void createListR(LinkList *L ,ElemType a[], int n);

//MARK:线性表的基本运算实现

void initList(LinkList *L);

void destoryList(LinkList *L);

bool listEmpty(LinkList *L);

int listLength(LinkList *L);

void dispList(LinkList *L);

bool getElem(LinkList *L,int i,ElemType *e);

int locateElem(LinkList *L,ElemType e);

bool listInsert(LinkList *L,int i,ElemType e);

bool listDelete(LinkList *L,int i,ElemType *e);

#endif /* LCBChapterTwoLinkList_h */
