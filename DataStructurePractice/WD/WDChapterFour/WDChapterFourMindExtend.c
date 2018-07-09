//
//  WDChapterFourMindExtend.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFourMindExtend.h"


typedef struct {
    BinaryTree * data[MaxSize] ;
    int top ;
}BinaryTreeStackByWD;

int countWayWeightInBinaryTree(BinaryTreeStackByWD stack) ;
void displaySpeciallyWayInBinaryTree(BinaryTreeStackByWD stack) ;

void displayWeightEqualValueWayInBinaryTree(BinaryTree *tree,int weight) {
    BinaryTreeStackByWD stack ;
    stack.top = 0 ;
    stack.data[stack.top] = tree ;
    BinaryTree *treeCopy = tree ;
    BinaryTree *tempTree = NULL ;
    while (stack.top != -1) {
        while (treeCopy != NULL && treeCopy->left != NULL) {
            stack.top ++ ;
            stack.data[stack.top] = treeCopy->left ;
            treeCopy = treeCopy->left ;
        }
        treeCopy = stack.data[stack.top] ;
        if (treeCopy->right != NULL && tempTree != treeCopy->right) {
            stack.top ++ ;
            stack.data[stack.top] = treeCopy->right ;
            treeCopy = treeCopy->right ;
        }else{
            if (treeCopy->right == NULL && treeCopy->left == NULL) {
                if (countWayWeightInBinaryTree(stack) == weight) {
                    displaySpeciallyWayInBinaryTree(stack) ;
                }
            }
            stack.top -- ;
            tempTree = treeCopy ;
            treeCopy = NULL ;
        }
    }
}

int countWayWeightInBinaryTree(BinaryTreeStackByWD stack) {
    int sum = 0 ;
    int count = stack.top ;
    while (count != -1) {
        sum += stack.data[count]->data - '0' ;
        count -- ;
    }
    return sum ;
}

void displaySpeciallyWayInBinaryTree(BinaryTreeStackByWD stack)  {
    int count = 0 ;
    while (count <= stack.top) {
        printf("%c",stack.data[count]->data) ;
        count ++ ;
    }
    printf("\n");
}
