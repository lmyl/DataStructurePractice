//
//  WDChapterFivePointFourPracticeQuestionTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFivePointFourPracticeQuestionTwo.h"

int slovingElementOfLayerInSortedTreePrivate(BinaryTree *tree,int layer, ElemType value) ;


int slovingElementOfLayerInSortedTree(BinaryTree *tree,ElemType value)  {
    return slovingElementOfLayerInSortedTreePrivate(tree, 1, value) ;
}


int slovingElementOfLayerInSortedTreePrivate(BinaryTree *tree,int layer, ElemType value)  {
    if (tree == NULL) {
        return 0 ;
    }
    if (tree->data == value) {
        return layer ;
    }
    if (tree->data < value) {
        return slovingElementOfLayerInSortedTreePrivate(tree->right, layer+1, value) ;
    }else{
        return slovingElementOfLayerInSortedTreePrivate(tree->left, layer+1, value) ;
    }
}
