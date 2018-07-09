//
//  WDChapterFourPointFourPracticeQuestionTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFourPointFourPracticeQuestionTwo.h"

int deepTree(TSBNode *tree) {
    int heigh ;
    if (tree->child == NULL ) {
        heigh =  0;
    }else {
        heigh = deepTree(tree->child) ;
    }
    if (tree->brothers != NULL) {
        int temp = deepTree(tree->brothers) ;
        if (temp > heigh) {
            heigh = temp ;
        }
    }
    return heigh + 1 ;
}
