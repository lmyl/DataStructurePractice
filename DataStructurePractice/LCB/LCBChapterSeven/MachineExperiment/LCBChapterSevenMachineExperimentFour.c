//
//  LCBChapterSevenMachineExperimentFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/28.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenMachineExperimentFour.h"

void displayBinaryTreeByConcaveByRecursive(BinaryTree *tree,int layer) ;

void displayBinaryTreeByConcave(BinaryTree *tree)  {
    displayBinaryTreeByConcaveByRecursive(tree, 1) ;
}

void displayBinaryTreeByConcaveByRecursive(BinaryTree *tree,int layer) {
    if (tree == NULL) {
        return ;
    }else{
        for (int i=1; i<layer; i++) {
            printf(" ") ;
        }
        printf("%c\n",tree->data) ;
        displayBinaryTreeByConcaveByRecursive(tree->left, layer+1);
        displayBinaryTreeByConcaveByRecursive(tree->right, layer+1) ;
    }
}
