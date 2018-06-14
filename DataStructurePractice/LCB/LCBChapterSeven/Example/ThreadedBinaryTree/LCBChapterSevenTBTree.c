//
//  LCBChapterSevenTBTree.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenTBTree.h"

ThreadedBinaryTree *preNode ;

ThreadedBinaryTree * creatThreadedBinaryTreeBase(BinaryTree *tree) ;
void  creatThreadedBinaryTreeByBinaryTreeByRecursive(ThreadedBinaryTree *tree ) ;

ThreadedBinaryTree * creatThreadedBinaryTreeByBinaryTree(BinaryTree *tree)  {
    ThreadedBinaryTree *root = initThreadedBinaryTree() ;
    if (tree == NULL) {
        return root ;
    }
    ThreadedBinaryTree *binaryTreeBase = creatThreadedBinaryTreeBase(tree) ;
    preNode = root ;
    root->right = NULL ;
    root->leftTag = 0 ;
    creatThreadedBinaryTreeByBinaryTreeByRecursive(binaryTreeBase);
    root->left = binaryTreeBase ;
    preNode->rightTag = 1;
    preNode->right = root ;
    root->right = preNode ;
    root->rightTag = 1 ;
    return root ;
}

ThreadedBinaryTree * initThreadedBinaryTree(void)  {
    ThreadedBinaryTree *tree = (ThreadedBinaryTree *)malloc(sizeof(ThreadedBinaryTree));
    tree->left = tree ;
    tree->leftTag = 1 ;
    tree->right = tree ;
    tree->rightTag = 1 ;
    return tree ;
}

void creatThreadedBinaryTreeByBinaryTreeByRecursive(ThreadedBinaryTree *tree ) {
    if (tree == NULL) {
        return ;
    }
    creatThreadedBinaryTreeByBinaryTreeByRecursive(tree->left) ;
    if (tree ->left == NULL) {
        tree->leftTag = 1 ;
        tree->left = preNode ;
    }else{
        tree->leftTag = 0 ;
    }
    if (preNode->right == NULL) {
        preNode->rightTag = 1;
        preNode->right = tree ;
    }else{
        preNode->rightTag = 0 ;
    }
    preNode = tree ;
    creatThreadedBinaryTreeByBinaryTreeByRecursive(tree->right) ;
}

ThreadedBinaryTree * creatThreadedBinaryTreeBase(BinaryTree *tree) {
    if (tree == NULL) {
        return NULL ;
    }
    ThreadedBinaryTree *newTree = initThreadedBinaryTree();
    newTree->data = tree->data ;
    newTree->left = creatThreadedBinaryTreeBase(tree->left) ;
    newTree->right = creatThreadedBinaryTreeBase(tree->right) ;
    return newTree;
}
