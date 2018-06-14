//
//  LCBChapterSevenExampleTen.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenExampleTen.h"

bool isSimilarBinaryTree(BinaryTree *treeOne , BinaryTree *treeTwo)  {
    if (treeOne == NULL && treeTwo == NULL) {
        return true ;
    }
    if (treeOne != NULL && treeTwo != NULL) {
        return isSimilarBinaryTree(treeOne->left, treeTwo->left) && isSimilarBinaryTree(treeOne->right, treeTwo->right) ;
    }
    return false ;
}
