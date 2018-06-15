//
//  LCBChapterSevenPracticeQuestionSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenPracticeQuestionSix.h"

bool isCompleteBinaryTree(BinaryTree *tree)  {
    sqBTree newTree ;
    int count = 0 ;
    changedBinaryChainToSequentialStorage(tree, newTree, &count) ;
    for (int i = 1; i<=count; i++) {
        if (newTree[i] == '#') {
            return false ;
        }
    }
    return true ;
}
