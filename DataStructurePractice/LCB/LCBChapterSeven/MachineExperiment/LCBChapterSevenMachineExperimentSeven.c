//
//  LCBChapterSevenMachineExperimentSeven.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenMachineExperimentSeven.h"

double solveExpressionValueByBinaryTree(BinaryTree *tree) {
    if (tree->left == NULL && tree->right == NULL) {
        return tree->data - '0' ;
    }
    double value = 0 ;
    switch (tree->data) {
        case '+':
            value = solveExpressionValueByBinaryTree(tree->left) + solveExpressionValueByBinaryTree(tree->right) ;
            break;
        case '-':
            value = solveExpressionValueByBinaryTree(tree->left) - solveExpressionValueByBinaryTree(tree->right) ;
            break ;
        case '*':
            value = solveExpressionValueByBinaryTree(tree->left) * solveExpressionValueByBinaryTree(tree->right) ;
            break ;
        case '/':
            value = solveExpressionValueByBinaryTree(tree->left )/ solveExpressionValueByBinaryTree(tree->right) ;
            break ;
    }
    return value ;
}
