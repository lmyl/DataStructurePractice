//
//  LCBChapterTwoCLinkList.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTwoCLinkList_h
#define LCBChapterTwoCLinkList_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ElemType;//自类型定义

typedef struct CLNode{//定义单链表节点类型
    ElemType data ;//存放元素值
    struct CLNode *next ;//指向后续节点
} CLinkList ;

//MARK:建立单链表
//头插法，时间复杂度为O(n)
CLinkList * createCLinkListF(ElemType numbers[], int count);


//尾插法，时间复杂度为O(n)
CLinkList * createCLinkListR(ElemType numbers[], int count);

//MARK:线性表的基本运算实现

//初始化线性表，时间复杂度为O(1)
CLinkList * initCLinkList(void);


//销毁线性表，时间复杂度为O(n)
void destoryCLinkList(CLinkList *list);

//判断线性表是否为空，时间复杂度为O(1)
bool listCLinkEmpty(CLinkList *list);

//求线性表的长度，时间复杂度为O(n)
int listCLinkLength(CLinkList *list);

//输出线性表，时间复杂度为O(n)
void dispCLinkList(CLinkList *list);

//求线性表中某个数据元素值，时间复杂度为O(n)
bool getCLinkElem(CLinkList *list,int location,ElemType *element);

//按元素值查找,时间复杂度为O(n)
int locateCLinkElem(CLinkList *list,ElemType element);

//插入数据元素，时间复杂度为O(n)
bool listCLinkInsert(CLinkList *list,int location,ElemType element);

//删除数据元素，时间复杂度为O(n)
bool listCLinkDelete(CLinkList *list,int location,ElemType *element);

#endif /* LCBChapterTwoCLinkList_h */
