//
//  LCBXXZDChapterSevenAlgorithmDesignFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSevenAlgorithmDesignFour.h"

void deleteBomaryTreeSubtreeParivate(BinaryTree *tree) ;
void deleteBinaryTreeSubtreeAnotherPrivate(BinaryTree *tree,ElemType element) ;

void deleteBinaryTreeSubtree(BinaryTree *tree,ElemType element) {   //存在一个bug，如果跟节点为要删除的值，则原来指向跟节点的指针无法变为NULL
    if (tree->data == element) {
        deleteBomaryTreeSubtreeParivate(tree);
        return ;
    }
    deleteBinaryTreeSubtreeAnotherPrivate(tree, element) ;
}


void deleteBinaryTreeSubtreeAnotherPrivate(BinaryTree *tree,ElemType element) {
    if (tree == NULL) {
        return ;
    }
    if (tree->left != NULL && tree->left->data == element) {
        deleteBomaryTreeSubtreeParivate(tree->left);
        tree->left = NULL ;
    }else if (tree -> right != NULL && tree->right->data == element) {
        deleteBomaryTreeSubtreeParivate(tree->right);
        tree->right = NULL ;
    }else{
        deleteBinaryTreeSubtreeAnotherPrivate(tree->left,element) ;
        deleteBinaryTreeSubtreeAnotherPrivate(tree->right, element) ;
    }
}

void deleteBomaryTreeSubtreeParivate(BinaryTree *tree)  {
    if (tree == NULL) {
        return ;
    }
    deleteBomaryTreeSubtreeParivate(tree->right);
    deleteBomaryTreeSubtreeParivate(tree->left) ;
    free(tree);
}
