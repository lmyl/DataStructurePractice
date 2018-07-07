//
//  LCBXXZDChapterSevenAlgorithmDesignSeventeen.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSevenAlgorithmDesignSeventeen.h"

ElemType findMaxNodeInBinaryTree(BinaryTree *tree) {
    if (tree == NULL ) {
        return '0' ;
    }
    ElemType maxLeft = findMaxNodeInBinaryTree(tree->left) ;
    ElemType maxRight = findMaxNodeInBinaryTree(tree->right) ;
    if (maxLeft > maxRight ) {
        return maxLeft > tree->data ? maxLeft : tree->data ;
    }else {
        return maxRight > tree->data ? maxRight : tree->data ;
    }
}
