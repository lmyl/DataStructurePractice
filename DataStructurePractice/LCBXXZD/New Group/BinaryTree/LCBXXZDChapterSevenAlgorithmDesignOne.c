//
//  LCBXXZDChapterSevenAlgorithmDesignOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/28.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSevenAlgorithmDesignOne.h"

char solvingCommonAncientInSqBTree(sqBTree tree , int nodeOne , int nodetwo) {
    while (nodeOne != nodetwo) {
        if (nodetwo > nodeOne) {
            nodetwo = nodetwo / 2 ;
        }else{
            nodeOne = nodeOne / 2 ;
        }
    }
    return tree[nodeOne];
}
