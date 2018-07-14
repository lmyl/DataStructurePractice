//
//  LCBChapterNineExampleFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterNineExampleFour.h"

BSTNode * findTheMaxNodeInBSTreeOfLeftSide(BSTNode *tree) {
    BSTNode *left = tree->left ;
    if (left == NULL) {
        return NULL ;
    }
    while (left->right != NULL) {
        left = left->right ;
    }
    return left ;
}

BSTNode * findTheMinNodeInBSTreeOfRightSide(BSTNode *tree) {
    BSTNode *right = tree->right ;
    if (right == NULL) {
        return NULL ;
    }
    while (right->left != NULL) {
        right = right->left ;
    }
    return right ;
}
