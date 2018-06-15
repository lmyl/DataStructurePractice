//
//  LCBChapterSevenPracticeQuestionNine.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenPracticeQuestionNine.h"



bool isSymmetryInBinaryTree(BinaryTree *tree)  {
    if (tree == NULL) {
        return true ;
    }
    return isSimilarBinaryTree(tree->left, tree->right) ;
}
