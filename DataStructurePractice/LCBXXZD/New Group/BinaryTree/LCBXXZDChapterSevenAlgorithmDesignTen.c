//
//  LCBXXZDChapterSevenAlgorithmDesignTen.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSevenAlgorithmDesignTen.h"

void countBreadthOfBinaryTreeByRecursive(BinaryTree *tree,int countBreadth[MaxSize] ,int layer) ;

int breadthOfBinaryTreeByRecursive(BinaryTree *tree) {
    int countBreadth[MaxSize] ;
    for (int i= 0; i<MaxSize; i++) {
        countBreadth[i] = 0 ;
    }
    countBreadthOfBinaryTreeByRecursive(tree, countBreadth, 0);
    int max = 0 ;
    for (int i = 0; i<MaxSize; i++) {
        if (countBreadth[i] > max) {
            max = countBreadth[i];
        }
    }
    return max ;
}

void countBreadthOfBinaryTreeByRecursive(BinaryTree *tree,int countBreadth[MaxSize] ,int layer) {
    if (tree == NULL ) {
        return ;
    }
    countBreadth[layer] ++ ;
    countBreadthOfBinaryTreeByRecursive(tree->left , countBreadth , layer ++) ;
    countBreadthOfBinaryTreeByRecursive(tree->right,countBreadth ,layer ++ );
}
