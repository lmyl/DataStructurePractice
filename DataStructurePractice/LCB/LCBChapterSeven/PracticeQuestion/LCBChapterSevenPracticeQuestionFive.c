//
//  LCBChapterSevenPracticeQuestionFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenPracticeQuestionFive.h"

void changedBinaryChainToSequentialStorageByRecursive(BinaryTree *tree , sqBTree newTree ,int layer, int *number);


void changedBinaryChainToSequentialStorage(BinaryTree *tree , sqBTree newTree , int *number) {
    int counts = 0 ;
    for (int i = 0; i<MaxSize; i++) {
        newTree[i] = '#' ;
    }
    changedBinaryChainToSequentialStorageByRecursive(tree, newTree, 1, &counts) ;
    *number = counts ;
}

void changedBinaryChainToSequentialStorageByRecursive(BinaryTree *tree , sqBTree newTree ,int layer, int *number) {
    if (tree == NULL) {
        return ;
    }
    newTree[layer] = tree->data ;
    if (*number < layer) {
        *number = layer ;
    }
    changedBinaryChainToSequentialStorageByRecursive(tree->left, newTree, 2 *layer, number) ;
    changedBinaryChainToSequentialStorageByRecursive(tree->right, newTree, 2*layer+1, number) ;
}
