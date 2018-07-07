//
//  LCBXXZDChapterSevenAlgorithmDesignNineteen.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterSevenAlgorithmDesignNineteen_h
#define LCBXXZDChapterSevenAlgorithmDesignNineteen_h

#include <stdio.h>
#include "LCBChapterSevenBTree.h"

//假设二叉树中每个节点值为单个字符，利用二叉链存储结构，b指向根节点，其中有两个节点值分别为x，y的节点(假设他们不互为祖先)，设计一个算法，求出节点x和y的最近的共同祖先

BinaryTree * solvingCommonAncientInBinaryTree(BinaryTree *tree , ElemType nodeOne , ElemType nodetwo) ;

#endif /* LCBXXZDChapterSevenAlgorithmDesignNineteen_h */
