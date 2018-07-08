//
//  WDChapterFourPracticeQuestionEighteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/8.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFourPracticeQuestionEighteen.h"

ThreadedBinaryTree * findPostSequenceInPredecessorNodeByTBTree(ThreadedBinaryTree *tree,ThreadedBinaryTree *node)  {
    if (node->rightTag == 0) {
        return node->right ;
    }
    if (node->leftTag == 0) {
        return node->left ;
    }
    if (node->left == tree) {
        return NULL ;
    }
    while (node->left->leftTag != 0) {
        node = node->left ;
    }
    return node->left->left ;
}
