//
//  LCBChapterSevenExampleThirteen.h
//  DataStructurePractice
//
//  Created by ly on 2018/6/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterSevenExampleThirteen_h
#define LCBChapterSevenExampleThirteen_h

#include <stdio.h>
#include "LCBChapterSevenBTree.h"

#define MaxSize 500

typedef struct {
    BinaryTree *data ;
    int parent ;
}BinaryTreeParentSonNode;

typedef struct {
    BinaryTreeParentSonNode data[MaxSize] ;
    int front ;
    int rear ;
}BinaryTreeParentSonCSqQueue;

BinaryTreeParentSonCSqQueue *initBinaryTreeParentSonCSqQueue(void );

//设计一个非递归算法输出从跟节点到每个叶子节点的路径的逆,使用层次遍历法

void displayAllLeafAncestorInBinaryTreeBylayerTraverse(BinaryTree *tree) ;


#endif /* LCBChapterSevenExampleThirteen_h */
