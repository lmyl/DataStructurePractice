//
//  LCBChapterSevenTBTree.h
//  DataStructurePractice
//
//  Created by ly on 2018/6/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterSevenTBTree_h
#define LCBChapterSevenTBTree_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "LCBChapterSevenBTree.h"

typedef struct  tbnode{
    ElemType data;
    int leftTag ;
    int rightTag ;
    struct tbnode * left ;
    struct tbnode * right ;
}ThreadedBinaryTree;

ThreadedBinaryTree * initThreadedBinaryTree(void) ;
//中序线索二叉树
ThreadedBinaryTree * creatThreadedBinaryTreeByBinaryTree(BinaryTree *tree) ;

#endif /* LCBChapterSevenTBTree_h */
