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
//头插法，时间复杂度为O(n)
LinkList * createLinkListF(ElemType numbers[], int count);


//尾插法，时间复杂度为O(n)
LinkList * createLinkListR(ElemType numbers[], int count);

//MARK:线性表的基本运算实现

//初始化线性表，时间复杂度为O(1)
LinkList * initLinkList(void);


//销毁线性表，时间复杂度为O(n)
void destoryLinkList(LinkList *list);

//判断线性表是否为空，时间复杂度为O(1)
bool listLinkEmpty(LinkList *list);

//求线性表的长度，时间复杂度为O(n)
int listLinkLength(LinkList *list);

//输出线性表，时间复杂度为O(n)
void dispLinkList(LinkList *list);

//求线性表中某个数据元素值，时间复杂度为O(n)
bool getLinkElem(LinkList *list,int location,ElemType *element);

//按元素值查找,时间复杂度为O(n)
int locateLinkElem(LinkList *list,ElemType element);

//插入数据元素，时间复杂度为O(n)
bool listLinkInsert(LinkList *list,int location,ElemType element);

//删除数据元素，时间复杂度为O(n)
bool listLinkDelete(LinkList *list,int location,ElemType *element);

#endif /* LCBChapterTwoLinkList_h */
