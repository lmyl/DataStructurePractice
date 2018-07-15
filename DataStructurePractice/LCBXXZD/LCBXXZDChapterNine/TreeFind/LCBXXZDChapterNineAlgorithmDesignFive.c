//
//  LCBXXZDChapterNineAlgorithmDesignFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterNineAlgorithmDesignFive.h"

void displayNotLessThanValueInBSTree(BSTNode *tree,KeyType value) {
    if (tree == NULL) {
        return ;
    }
    displayNotLessThanValueInBSTree(tree->right, value) ;
    if (tree->key >= value) {
        printf("%d ",tree->key);
        displayNotLessThanValueInBSTree(tree->left, value) ;
    }
}
