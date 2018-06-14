//
//  LCBChapterSevenBTree.h
//  DataStructurePractice
//
//  Created by ly on 2018/6/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterSevenBTree_h
#define LCBChapterSevenBTree_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MaxSize 500

typedef char ElemType;
//二叉树顺序存储

typedef ElemType sqBTree[MaxSize];

//二叉链
typedef struct BinaryNode {
    ElemType data ;
    struct BinaryNode *left ;
    struct BinaryNode *right ;
}BinaryTree;

BinaryTree *initBinaryTree(void) ;

BinaryTree *creatBinaryTree(char string[] ) ;

BinaryTree *findNodeInBinaryTree(BinaryTree *tree , ElemType element) ;

BinaryTree *locationLeftChildNode(BinaryTree *tree) ;

BinaryTree *locationRightChildNode(BinaryTree *tree);

int binaryTreeHeight(BinaryTree *tree) ;

void displayBinaryTree(BinaryTree *tree) ;



#endif /* LCBChapterSevenBTree_h */
