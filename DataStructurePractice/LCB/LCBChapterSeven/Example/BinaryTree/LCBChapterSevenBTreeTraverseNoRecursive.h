//
//  LCBChapterSevenBTreeTraverseNoRecursive.h
//  DataStructurePractice
//
//  Created by ly on 2018/6/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterSevenBTreeTraverseNoRecursive_h
#define LCBChapterSevenBTreeTraverseNoRecursive_h

#include <stdio.h>
#include "LCBChapterSevenBTree.h"

#define MaxSize 500

typedef struct {
    BinaryTree *data[MaxSize];
    int top ;
}BinaryTreeStack;


typedef struct {
    BinaryTree *data[MaxSize] ;
    int front ;
    int rear ;
}BinaryTreeCSqQueue;

BinaryTreeStack * initBinaryTreeStack(void) ;
BinaryTreeCSqQueue *initBinaryTreeCSqQueue(void) ;
//先序遍历
void preTraverseBTreeNoRecursive(BinaryTree *tree) ;

void midTraverseBTreeNoRecursive(BinaryTree *tree) ;

void afterTraverseBTreeNoRecursive(BinaryTree *tree) ;

//层次遍历
void layerTraverseBTreeNoRecursive(BinaryTree *tree) ;
#endif /* LCBChapterSevenBTreeTraverseNoRecursive_h */
