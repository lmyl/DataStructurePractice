//
//  LCBChapterSevenBTreeTraverse.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenBTreeTraverse.h"

void preTraverseBTree(BinaryTree *tree) {
    if (tree == NULL) {
        return ;
    }
    printf("%c",tree->data);
    preTraverseBTree(tree->left);
    preTraverseBTree(tree->right);
}

void midTraverseBTree(BinaryTree *tree) {
    if (tree == NULL) {
        return ;
    }
    midTraverseBTree(tree->left);
    printf("%c",tree->data);
    midTraverseBTree(tree->right);
}

void afterTraverseBTree(BinaryTree *tree) {
    if (tree == NULL) {
        return ;
    }
    afterTraverseBTree(tree->left);
    afterTraverseBTree(tree->right);
    printf("%c",tree->data);
    
}
