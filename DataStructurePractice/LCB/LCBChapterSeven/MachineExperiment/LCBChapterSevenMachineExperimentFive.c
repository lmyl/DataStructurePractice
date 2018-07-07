//
//  LCBChapterSevenMachineExperimentFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/28.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenMachineExperimentFive.h"
void midTraverseThreadedBinaryTreeByRecursivePrivate(ThreadedBinaryTree *tree,ThreadedBinaryTree *root) ;


void midTraverseThreadedBinaryTreeByRecursive(ThreadedBinaryTree *tree)  {
    ThreadedBinaryTree *root = tree ;
    tree = tree->left ;
    while (tree ->leftTag == 0) {
        tree = tree ->left ;
    }
    midTraverseThreadedBinaryTreeByRecursivePrivate(tree, root) ;
}

void midTraverseThreadedBinaryTreeByRecursivePrivate(ThreadedBinaryTree *tree,ThreadedBinaryTree *root)  {
    if (tree == root) {
        return ;
    }else {
        printf("%c",tree->data) ;
        if (tree -> rightTag == 1) {
            midTraverseThreadedBinaryTreeByRecursivePrivate(tree->right, root) ;
        }else{
            tree = tree->right ;
            while (tree->leftTag == 0) {
                tree = tree->left ;
            }
            midTraverseThreadedBinaryTreeByRecursivePrivate(tree, root) ;
        }
    }
}
