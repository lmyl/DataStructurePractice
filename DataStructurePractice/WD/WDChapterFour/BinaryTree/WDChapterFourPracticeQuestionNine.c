//
//  WDChapterFourPracticeQuestionNine.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/8.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFourPracticeQuestionNine.h"

typedef struct {
    BinaryTree * data[MaxSize] ;
    int top ;
}BinaryTreeStackByWD;

ElemType findPreorderSequenceRankValue(BinaryTree *tree , int rank)  {
    BinaryTreeStackByWD stack ;
    stack.top = 0 ;
    stack.data[stack.top] = tree ;
    int count = 0 ;
    while (stack.top != -1) {
        BinaryTree *treeCopy = stack.data[stack.top] ;
        stack.top -- ;
        count ++ ;
        if (count == rank) {
            return treeCopy->data ;
        }
        if (treeCopy->right != NULL) {
            stack.top ++ ;
            stack.data[stack.top] = treeCopy->right ;
        }
        if (treeCopy->left != NULL) {
            stack.top ++ ;
            stack.data[stack.top] = treeCopy->left ;
        }
    }
    return '0' ;
}
