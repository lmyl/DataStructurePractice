//
//  LCBChapterSevenPracticeQuestionEight.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenPracticeQuestionEight.h"


void mirrorSymmetryBinaryTree(BinaryTree *tree) {
    if (tree == NULL) {
        return ;
    }
    
    BinaryTree *tempTree = tree->left ;
    tree->left = tree->right ;
    tree->right = tempTree ;
    mirrorSymmetryBinaryTree(tree->left) ;
    mirrorSymmetryBinaryTree(tree->right) ;
}


