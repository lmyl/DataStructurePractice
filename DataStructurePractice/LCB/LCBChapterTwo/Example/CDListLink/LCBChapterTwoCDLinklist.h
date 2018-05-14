//
//  LCBChapterTwoCDLinklist.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTwoCDLinklist_h
#define LCBChapterTwoCDLinklist_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ElemType;//自类型定义

typedef struct CDLNode{//定义单链表节点类型
    ElemType data ;//存放元素值
    struct CDLNode *next ;//指向后续节点
    struct CDLNode *prior ;//指向前驱节点
} CDLinkList ;

//MARK:建立单链表
//头插法，时间复杂度为O(n)
CDLinkList * createCDLinkListF(ElemType numbers[], int count);


//尾插法，时间复杂度为O(n)
CDLinkList * createCDLinkListR(ElemType numbers[], int count);

//MARK:线性表的基本运算实现

//初始化线性表，时间复杂度为O(1)
CDLinkList * initCDLinkList(void);


//销毁线性表，时间复杂度为O(n)
void destoryCDLinkList(CDLinkList *list);

//判断线性表是否为空，时间复杂度为O(1)
bool listCDLinkEmpty(CDLinkList *list);

//求线性表的长度，时间复杂度为O(n)
int listCDLinkLength(CDLinkList *list);

//输出线性表，时间复杂度为O(n)
void dispCDLinkList(CDLinkList *list);

//求线性表中某个数据元素值，时间复杂度为O(n)
bool getCDLinkElem(CDLinkList *list,int location,ElemType *element);

//按元素值查找,时间复杂度为O(n)
int locateCDLinkElem(CDLinkList *list,ElemType element);

//插入数据元素，时间复杂度为O(n)
bool listCDLinkInsert(CDLinkList *list,int location,ElemType element);

//删除数据元素，时间复杂度为O(n)
bool listCDLinkDelete(CDLinkList *list,int location,ElemType *element);

#endif /* LCBChapterTwoCDLinklist_h */
