//
//  LCBXXZDChapterNineAlgorithmDesignSeven.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterNineAlgorithmDesignSeven.h"

void destoryBSTreePrivate(BSTNode *tree) ;

bool deleteOnSpeciallyStrategyInBSTree(BSTNode *tree , KeyType key) {
    BSTNode *next = tree ;
    while (next != NULL && next->key != key ) {
        if (next->key > key) {
            next = next->left ;
        }else{
            next = next->right ;
        }
    }
    if (next == NULL) {
        return false ;
    }
    destoryBSTreePrivate(tree->left) ;
    tree->left = NULL ;
    return true ;
}

void destoryBSTreePrivate(BSTNode *tree) {
    if (tree == NULL) {
        return ;
    }
    destoryBSTreePrivate(tree->left) ;
    destoryBSTreePrivate(tree->right) ;
    free(tree) ;
}
