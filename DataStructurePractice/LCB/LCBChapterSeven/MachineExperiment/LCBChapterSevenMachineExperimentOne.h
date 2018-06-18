//
//  LCBChapterSevenMachineExperimentOne.h
//  DataStructurePractice
//
//  Created by ly on 2018/6/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterSevenMachineExperimentOne_h
#define LCBChapterSevenMachineExperimentOne_h

#include <stdio.h>
#include "LCBChapterSevenBTree.h"
#include "LCBChapterSevenBTreeTraverseNoRecursive.h"

//输出二叉树的宽度：二叉树各层节点个数的最大值
int breadthOfBinaryTree(BinaryTree *tree);
//输出二叉树的节点个数
int countNodeOfBinaryTree(BinaryTree *tree) ;
//输出二叉树的叶子节点的个数
int countLeafNodeOfBinaryTree(BinaryTree *tree) ;

#endif /* LCBChapterSevenMachineExperimentOne_h */
