//
//  WDChapterFivePointFourPracticeQuestionFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFivePointFourPracticeQuestionFive.h"

void displayNotLessThanValueInSortedValue(BinaryTree *tree,ElemType value)  {
    if (tree == NULL) {
        return ;
    }
    displayNotLessThanValueInSortedValue(tree->right,value) ;
    if (tree->data >= value) {
        printf("%c",tree->data) ;
        displayNotLessThanValueInSortedValue(tree->left,value) ;
    }
    
}
