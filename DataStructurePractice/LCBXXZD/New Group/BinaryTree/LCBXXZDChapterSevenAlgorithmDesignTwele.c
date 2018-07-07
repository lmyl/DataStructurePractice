//
//  LCBXXZDChapterSevenAlgorithmDesignTwele.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSevenAlgorithmDesignTwele.h"

BinaryTree * gobalLeafLinkTail = NULL ;
BinaryTree * gobalLeafLinkHead = NULL ;

void linkAllLeafNodeInBinaryTreePrivate(BinaryTree *tree)  ;

BinaryTree * linkAllLeafNodeInBinaryTree(BinaryTree *tree) {
    linkAllLeafNodeInBinaryTreePrivate(tree) ;
    return gobalLeafLinkHead ;
}

void linkAllLeafNodeInBinaryTreePrivate(BinaryTree *tree)  {
    if (tree == NULL) {
        return ;
    }
    if (tree->right == NULL && tree->left == NULL) {
        if (gobalLeafLinkHead == NULL) {
            gobalLeafLinkHead = tree ;
            gobalLeafLinkTail = tree ;
        }else {
            gobalLeafLinkTail->right = tree ;
            gobalLeafLinkTail = tree ;
        }
    }
    linkAllLeafNodeInBinaryTree(tree->left) ;
    linkAllLeafNodeInBinaryTree(tree->right) ;
}
