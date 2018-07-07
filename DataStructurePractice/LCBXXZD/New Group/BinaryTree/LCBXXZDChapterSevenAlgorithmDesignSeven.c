//
//  LCBXXZDChapterSevenAlgorithmDesignSeven.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSevenAlgorithmDesignSeven.h"

bool isSymmetryInBinaryTreeByLCBXXZD(BinaryTree *tree) {
    if (isSymmetryInBinaryTree(tree)) {
        if (tree == NULL || isSymmetryInBinaryTreeByLCBXXZD(tree->left)) {
            if (tree == NULL || isSymmetryInBinaryTreeByLCBXXZD(tree->right)) {
                return true ;
            }else{
                return false ;
            }
        }else{
            return false ;
        }
    }else {
        return false ;
    }
}
