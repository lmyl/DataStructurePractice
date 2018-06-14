//
//  LCBChapterSevenExampleEleven.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenExampleEleven.h"

bool displayElementAllAncestorInBinaryTree(BinaryTree *tree , ElemType element)  {
    if (tree == NULL) {
        return false;
    }
    if (tree->data == element) {
        return true ;
    }
    if (displayElementAllAncestorInBinaryTree(tree->left, element) || displayElementAllAncestorInBinaryTree(tree->right, element)) {
        printf("%c",tree->data);
        return true ;
    }else {
        return false ;
    }
}
