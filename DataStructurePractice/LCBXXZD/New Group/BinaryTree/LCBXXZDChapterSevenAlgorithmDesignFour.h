//
//  LCBXXZDChapterSevenAlgorithmDesignFour.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterSevenAlgorithmDesignFour_h
#define LCBXXZDChapterSevenAlgorithmDesignFour_h

#include <stdio.h>
#include "LCBChapterSevenBTree.h"

//假设二叉树中每个节点值为单个字符(所有结点值不相同)，采用二叉链存储结构，现在有一个算法用于删除并释放以b为根节点的子树，要求设计一个算法利用它删除二叉树b中以节点值x为根节点的子树

void deleteBinaryTreeSubtree(BinaryTree *tree,ElemType element) ;

#endif /* LCBXXZDChapterSevenAlgorithmDesignFour_h */
