//
//  LCBXXZDChapterSevenAlgorithmDesignThirteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSevenAlgorithmDesignThirteen.h"

int minBranchLengthInBinaryTreee(BinaryTree *tree) {
    if (tree == NULL) {
        return -1 ;
    }
    if (tree->left == NULL && tree->right == NULL) {
        return  0 ;
    }
    int minLeft = minBranchLengthInBinaryTreee(tree->left) ;
    int minRight = minBranchLengthInBinaryTreee(tree->right) ;
    if (minLeft > minRight) {
        return minLeft + 1 ;
    }else{
        return minRight + 1 ;
    }
}
