//
//  LCBXXZDChapterSevenAlgorithmDesignFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSevenAlgorithmDesignFive.h"

BinaryTree * findParentBinaryTree(BinaryTree *tree,ElemType element) {
    if (tree == NULL) {
        return NULL ;
    }
    if (tree->left !=  NULL && tree->left->data == element) {
        return tree ;
    }else if (tree->right != NULL && tree->right->data == element) {
        return tree ;
    }else{
        BinaryTree * resultOne =  findParentBinaryTree(tree->right, element) ;
        if (resultOne != NULL) {
            return resultOne ;
        }
        BinaryTree *resultTwo = findParentBinaryTree(tree->left, element) ;
        return resultTwo ;
    }
}
