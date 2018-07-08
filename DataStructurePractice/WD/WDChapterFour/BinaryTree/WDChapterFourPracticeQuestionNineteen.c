//
//  WDChapterFourPracticeQuestionNineteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/8.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFourPracticeQuestionNineteen.h"

int slovingBinaryTreeWPLPrivate(BinaryTree *tree,int layer) ;

int slovingBinaryTreeWPL(BinaryTree *tree) {
    return slovingBinaryTreeWPLPrivate(tree, 1) ;
}

int slovingBinaryTreeWPLPrivate(BinaryTree *tree,int layer) {
    if (tree == NULL) {
        return 0 ;
    }
    int sum = (tree->data - '0') * layer ;
    return sum + slovingBinaryTreeWPLPrivate(tree->right, layer+1) + slovingBinaryTreeWPLPrivate(tree->left, layer+1) ;
}
