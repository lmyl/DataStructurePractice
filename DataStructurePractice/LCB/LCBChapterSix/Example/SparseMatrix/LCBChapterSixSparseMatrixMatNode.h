//
//  LCBChapterSixSparseMatrixMatNode.h
//  DataStructurePractice
//
//  Created by ly on 2018/6/4.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterSixSparseMatrixMatNode_h
#define LCBChapterSixSparseMatrixMatNode_h

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define Row 50
#define Col 50


typedef int ElemType;

typedef struct mtxn{
    int row ;
    int col ;
    struct mtxn *right,*down ;
    union {
        ElemType value ;
        struct mtxn *link ;
    }tag ;
}CrossLinkedList;

//十字链表的创建
void creatCrossLinkedList(CrossLinkedList *matHead , ElemType data[Row][Col],int row , int col ) ;

//显示
void displayCrossLinkedList(CrossLinkedList *matHead) ;


//初始化
CrossLinkedList *initCrossLinkedListNode(void) ;
#endif /* LCBChapterSixSparseMatrixMatNode_h */
