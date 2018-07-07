//
//  LCBXXZDChapterSevenAlgorithmDesignEleven.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSevenAlgorithmDesignEleven.h"

void setParentInPBTNode(PBTNode *tree) {    //根节点没有父节点
    if (tree == NULL) {
        return ;
    }
    if (tree->left != NULL ) {
        tree->left->parent = tree ;
    }
    if (tree->right != NULL) {
        tree->right->parent = tree ;
    }
    setParentInPBTNode(tree->right);
    setParentInPBTNode(tree->left) ;
}
