//
//  LCBXXZDChapterSevenAlgorithmDesignFourteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSevenAlgorithmDesignFourteen.h"

int countLeafNodeOnLayerInBinaryTreePrivate(BinaryTree *tree , int layer ,int nowLayer) ;


int countLeafNodeOnLayerInBinaryTree(BinaryTree *tree,int layer) {
    return countLeafNodeOnLayerInBinaryTreePrivate(tree, layer,1);
}

int countLeafNodeOnLayerInBinaryTreePrivate(BinaryTree *tree , int layer ,int nowLayer) {
    if (tree == NULL || nowLayer > layer) {
        return 0 ;
    }
    if (tree->left == NULL && tree->right == NULL && nowLayer == layer) {
        return 1 ;
    }
    int countLeft = countLeafNodeOnLayerInBinaryTreePrivate(tree->left, layer, nowLayer+1);
    int countRight = countLeafNodeOnLayerInBinaryTreePrivate(tree->right, layer, nowLayer+1) ;
    return countLeft + countRight ;
}
