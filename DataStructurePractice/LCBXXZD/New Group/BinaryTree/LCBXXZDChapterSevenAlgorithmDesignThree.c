//
//  LCBXXZDChapterSevenAlgorithmDesignThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/28.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSevenAlgorithmDesignThree.h"

int doubleBranchBinaryTreeCount(BinaryTree *tree) {
    if (tree->left != NULL && tree->right != NULL) {
        return 1 + doubleBranchBinaryTreeCount(tree->left) + doubleBranchBinaryTreeCount(tree->right) ;
    }else if (tree->left != NULL) {
        return doubleBranchBinaryTreeCount(tree->left) ;
    }else if (tree->right != NULL) {
        return doubleBranchBinaryTreeCount(tree->right) ;
    }else {
        return 0 ;
    }
}
