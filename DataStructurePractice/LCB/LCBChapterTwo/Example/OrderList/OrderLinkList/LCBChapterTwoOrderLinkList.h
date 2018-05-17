//
//  LCBChapterTwoOrderLinkList.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTwoOrderLinkList_h
#define LCBChapterTwoOrderLinkList_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ElemType;//自类型定义

typedef struct OrderLNode{//定义单链表节点类型
    ElemType data ;//存放元素值
    struct OrderLNode *next ;//指向后续节点
} OrderLinkList ;

//MARK:建立单链表
//头插法，时间复杂度为O(n^2)，采用插入排序
OrderLinkList * createOrderLinkList(ElemType numbers[], int count);


//MARK:线性表的基本运算实现

//初始化线性表，时间复杂度为O(1)
OrderLinkList * initOrderLinkList(void);


//销毁线性表，时间复杂度为O(n)
void destoryOrderLinkList(OrderLinkList *list);

//判断线性表是否为空，时间复杂度为O(1)
bool listOrderLinkEmpty(OrderLinkList *list);

//求线性表的长度，时间复杂度为O(n)
int listOrderLinkLength(OrderLinkList *list);

//输出线性表，时间复杂度为O(n)
void dispOrderLinkList(OrderLinkList *list);

//求线性表中某个数据元素值，时间复杂度为O(n)
bool getOrderLinkElem(OrderLinkList *list,int location,ElemType *element);

//按元素值查找,时间复杂度为O(n)
int locateOrderLinkElem(OrderLinkList *list,ElemType element);

//插入数据元素，时间复杂度为O(n)
void listOrderLinkInsert(OrderLinkList *list,ElemType element);

//删除数据元素，时间复杂度为O(n)
bool listOrderLinkDelete(OrderLinkList *list,int location,ElemType *element);

#endif /* LCBChapterTwoOrderLinkList_h */
