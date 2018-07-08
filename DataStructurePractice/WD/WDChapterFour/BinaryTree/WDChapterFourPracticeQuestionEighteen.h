//
//  WDChapterFourPracticeQuestionEighteen.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/8.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterFourPracticeQuestionEighteen_h
#define WDChapterFourPracticeQuestionEighteen_h

#include <stdio.h>
#include "LCBChapterSevenTBTree.h"

//设计一个算法在中序线索树中找到指定节点在后序的前驱节点的算法
//若p有右节点则为右节点
//若p没有右节点有左节点，则为左节点
//若p为叶子节点，则p的前驱节点必为某一祖先节点的右子树中序遍历的第一个节点，则为该祖先节点的左节点为其后序遍历的前驱节点
//若其祖先节点没有左节点，则找到其祖先节点的前驱节点，其左节点为其前驱节点
//若p为中序遍历的第一个节点，则没有前驱节点

ThreadedBinaryTree * findPostSequenceInPredecessorNodeByTBTree(ThreadedBinaryTree *tree,ThreadedBinaryTree *node) ;

#endif /* WDChapterFourPracticeQuestionEighteen_h */
