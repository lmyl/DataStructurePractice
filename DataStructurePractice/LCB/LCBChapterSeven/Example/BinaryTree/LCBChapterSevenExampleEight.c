//
//  LCBChapterSevenExampleEight.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenExampleEight.h"

void displayBinaryTreeAllLeafFromLeftToRight(BinaryTree *tree) {
    if (tree == NULL) {
        return ;
    }
    if (tree->left == NULL && tree->right == NULL) {
        printf("%c",tree->data) ;
    }
    displayBinaryTree(tree->left) ;
    displayBinaryTree(tree->right) ;
}

void displayBinaryTreeAllLeafFromRightToLeft(BinaryTree *tree) {
    if (tree == NULL) {
        return ;
    }
    if (tree->left == NULL && tree->right == NULL) {
        printf("%c",tree->data) ;
    }
    displayBinaryTree(tree->right) ;
    displayBinaryTree(tree->left) ;
}
