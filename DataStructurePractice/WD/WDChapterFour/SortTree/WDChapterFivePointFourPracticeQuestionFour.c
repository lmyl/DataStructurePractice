//
//  WDChapterFivePointFourPracticeQuestionFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFivePointFourPracticeQuestionFour.h"

ElemType findTheMaxInSortedBinaryTreePrivate(BinaryTree *tree) {
    while (tree->right != NULL) {
        tree = tree->right ;
    }
    return tree->data ;
}

ElemType findTheMinInSortedBinaryTreePrivate(BinaryTree *tree) {
    while (tree->left != NULL) {
        tree = tree->left ;
    }
    return tree->data ;
}
