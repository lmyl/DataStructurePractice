//
//  LCBXXZDChapterSevenAlgorithmDesignNineteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSevenAlgorithmDesignNineteen.h"

typedef struct {
    BinaryTree *data[MaxSize] ;
    int top ;
}BinaryTreeStackLCBXXZD;

BinaryTree * solvingCommonAncientInBinaryTree(BinaryTree *tree , ElemType nodeOne , ElemType nodetwo) {
    BinaryTreeStackLCBXXZD stack ;
    BinaryTreeStackLCBXXZD stackOne ;
    BinaryTreeStackLCBXXZD stackTwo ;
    stack.top = 0 ;
    stack.data[stack.top] = tree ;
    BinaryTree *treeCopy = tree ;
    BinaryTree *temp = NULL ;
    while (stack.top != -1) {
        while (treeCopy != NULL && treeCopy->left != NULL) {
            treeCopy = treeCopy->left ;
            stack.top ++ ;
            stack.data[stack.top] = treeCopy ;
        }
        treeCopy = stack.data[stack.top] ;
        if ( temp != treeCopy->right && treeCopy->right != NULL) {
            treeCopy = treeCopy->right ;
            stack.top ++ ;
            stack.data[stack.top] = treeCopy ;
        }else{
            if (treeCopy->data == nodeOne) {
                stackOne = stack ;
            }else if (treeCopy->data == nodetwo) {
                stackTwo = stack ;
            }
            stack.top -- ;
            temp = treeCopy ;
            treeCopy = NULL ;
        }
    }
    int topOne = 0 ;
    int topTwo = 0 ;
    while (topOne <= stackOne.top && topTwo <= stackTwo.top && stackOne.data[topOne] == stackTwo.data[topTwo]) {
        topTwo ++ ;
        topOne ++ ;
    }
    return stackTwo.data[topTwo-1] ;
}
