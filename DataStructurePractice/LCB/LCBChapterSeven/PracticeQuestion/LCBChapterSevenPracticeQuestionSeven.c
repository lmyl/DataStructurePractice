//
//  LCBChapterSevenPracticeQuestionSeven.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenPracticeQuestionSeven.h"


bool displayTheWayToNodeInBinaryTreeByRecursive(BinaryTree *tree , BinaryTree *node,BinaryTree *way[] ,int *length) ;

void displayTheWayToNodeInBinaryTree(BinaryTree *tree , BinaryTree *node)  {
    int length = 0 ;
    BinaryTree *way[MaxSize] ;
    if (displayTheWayToNodeInBinaryTreeByRecursive(tree, node, way, &length)) {
        for (int i = length - 1; i>=0; i--) {
            printf("%c",way[i]->data);
        }
        printf("\n");
    }
}

bool displayTheWayToNodeInBinaryTreeByRecursive(BinaryTree *tree , BinaryTree *node,BinaryTree *way[] ,int *length) {
    if (tree == NULL) {
        return false ;
    }
    if (tree == node) {
        way[*length] = node ;
        *length = *length + 1 ;
        return true ;
    }
    if (displayTheWayToNodeInBinaryTreeByRecursive(tree->left, node, way, length) || displayTheWayToNodeInBinaryTreeByRecursive(tree->right, node, way, length) ) {
        way[*length] = tree ;
        *length = *length + 1;
        return true ;
    }
    return false ;
}
