//
//  LCBChapterSevenExampleThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenExampleThree.h"

int treeHeight(TSBNode *tree) {
    if (tree == NULL) {
        return 0 ;
    }
    TSBNode *brother = tree;
    int max = 0 ;
    while (brother != NULL) {
        int maxTemp = treeHeight(brother->child);
        if (max < maxTemp) {
            max = maxTemp ;
        }
        brother = brother->brothers ;
    }
    return max + 1;
}
