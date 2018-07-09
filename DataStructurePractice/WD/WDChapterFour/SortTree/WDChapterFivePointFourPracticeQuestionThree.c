//
//  WDChapterFivePointFourPracticeQuestionThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFivePointFourPracticeQuestionThree.h"



bool isAVL(BinaryTree *tree) {
    if (tree == NULL) {
        return true ;
    }
    int treeLeft = binaryTreeHeight(tree->left) ;
    int treeRight = binaryTreeHeight(tree->right) ;
    if (abs(treeLeft-treeRight) > 1) {
        return false ;
    }
    return isAVL(tree->left) && isAVL(tree->right);
}
