//
//  WDChapterFourPointFourPracticeQuestionOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/8.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFourPointFourPracticeQuestionOne.h"


int countLeafNodeInTree(TSBNode *tree) {
    int sum = 0 ;
    if (tree->child == NULL) {
        sum =  1 ;
    }else{
        sum = countLeafNodeInTree(tree->child) ;
    }
    if (tree->brothers != NULL) {
        sum += countLeafNodeInTree(tree->brothers) ;
    }
    return sum ;
}
