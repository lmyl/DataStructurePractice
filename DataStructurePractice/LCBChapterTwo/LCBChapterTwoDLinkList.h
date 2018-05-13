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
#include <stdlib.h>
#include <stdbool.h>

typedef int ElemType;

typedef struct DNode{//定义双链表节点类型
    ElemType data ;//存放元素值
    struct DNode *prior ;//指向前驱节点
    struct DNode *next ;//指向后续节点
} DLinkList;

//MARK:建立单链表
//头插法，时间复杂度为O(n)
DLinkList * createDLinkListF(ElemType numbers[], int count);

//尾插法，时间复杂度为O(n)
DLinkList * createDLinkListR(ElemType numbers[], int count);

//MARK:线性表的基本运算实现
//初始化线性表，时间复杂度为O(1)
DLinkList * initDLinkList(void) ;

//销毁线性表，时间复杂度为O(n)
void destoryDLinkList(DLinkList *list);

//判断线性表是否为空，时间复杂度为O(1)
bool listDLinkEmpty(DLinkList *list);

//求线性表的长度，时间复杂度为O(n)
int listDLinkLength(DLinkList *list);

//输出线性表，时间复杂度为O(n)
void dispDLinkList(DLinkList *list);

//求线性表中某个数据元素值，时间复杂度为O(n)
bool getDLinkElem(DLinkList *list,int location,ElemType *element);

//按元素值查找,时间复杂度为O(n)
int locateDLinkElem(DLinkList *list,ElemType element);

//插入数据元素，时间复杂度为O(n)
bool listDLinkInsert(DLinkList *list,int location,ElemType element);

//删除数据元素，时间复杂度为O(n)
bool listDLinkDelete(DLinkList *list,int location,ElemType *element);

#endif /* LCBChapterTwoDLinkList_h */
