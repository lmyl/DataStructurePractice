//
//  LCBChapterSevenExampleTwelve.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenExampleTwelve.h"


void displayAllLeafAncestorInBinaryTreeNoRecursive(BinaryTree *tree)  {
    BinaryTreeStack *stack = initBinaryTreeStack() ;
    stack->top ++ ;
    stack->data[stack->top] = tree ;
    BinaryTree *treeCopy = stack->data[stack->top] ;
    BinaryTree *temp = NULL ;
    while (stack->top != -1) {
        while (treeCopy != NULL && treeCopy->left != NULL) {
            stack->top ++ ;
            stack->data[stack->top] = treeCopy->left ;
            treeCopy = treeCopy->left ;
        }
        treeCopy = stack->data[stack->top];
        if (treeCopy->right == NULL && treeCopy->left == NULL) {
            int count = stack->top  ;
            while (count != -1) {
                printf("%c",stack->data[count]->data) ;
                count -- ;
            }
            printf("\n");
        }
        if (temp != treeCopy->right && treeCopy->right != NULL) {
            stack->top ++ ;
            stack->data[stack->top] = treeCopy -> right ;
            treeCopy = treeCopy->right ;
        }else{
            stack->top -- ;
            temp = treeCopy ;
            treeCopy = NULL ;
        }
    }
}
