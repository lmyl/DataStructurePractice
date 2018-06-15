//
//  LCBChapterSevenTBTree.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenTBTree.h"

ThreadedBinaryTree *preThreadedBinaryTreeNodeGobal ;

ThreadedBinaryTree * creatThreadedBinaryTreeBase(BinaryTree *tree) ;
void  creatThreadedBinaryTreeByBinaryTreeByRecursive(ThreadedBinaryTree *tree ) ;

ThreadedBinaryTree * creatThreadedBinaryTreeByBinaryTree(BinaryTree *tree)  {
    ThreadedBinaryTree *root = initThreadedBinaryTree() ;
    if (tree == NULL) {
        return root ;
    }
    ThreadedBinaryTree *binaryTreeBase = creatThreadedBinaryTreeBase(tree) ;
    preThreadedBinaryTreeNodeGobal = root ;
    root->right = NULL ;
    root->leftTag = 0 ;
    creatThreadedBinaryTreeByBinaryTreeByRecursive(binaryTreeBase);
    root->left = binaryTreeBase ;
    preThreadedBinaryTreeNodeGobal->rightTag = 1;
    preThreadedBinaryTreeNodeGobal->right = root ;
    root->right = preThreadedBinaryTreeNodeGobal ;
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
        tree->left = preThreadedBinaryTreeNodeGobal ;
    }else{
        tree->leftTag = 0 ;
    }
    if (preThreadedBinaryTreeNodeGobal->right == NULL) {
        preThreadedBinaryTreeNodeGobal->rightTag = 1;
        preThreadedBinaryTreeNodeGobal->right = tree ;
    }else{
        preThreadedBinaryTreeNodeGobal->rightTag = 0 ;
    }
    preThreadedBinaryTreeNodeGobal = tree ;
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
