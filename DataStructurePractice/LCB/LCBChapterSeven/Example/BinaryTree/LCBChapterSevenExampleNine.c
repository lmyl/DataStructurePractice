//
//  LCBChapterSevenExampleNine.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenExampleNine.h"

void inputElement(ElemType *element) ;

int solvingeElementLayerInBinaryTreeByRecursive(BinaryTree * tree,ElemType element,int layer) ;

void solvingeElementLayerInBinaryTree(BinaryTree * tree) {
    char element = '0';
    while (true) {
        inputElement(&element) ;
        int layer = solvingeElementLayerInBinaryTreeByRecursive(tree, element, 1) ;
        printf("%c在%d层\n",element,layer);
    }
}

void inputElement(ElemType *element) {
    printf("请输入查找元素:\n");
    scanf("%c",element) ;
    printf("输入%c\n",*element);
}

int solvingeElementLayerInBinaryTreeByRecursive(BinaryTree * tree,ElemType element,int layer) {
    if (tree == NULL) {
        return 0;
    }
    if (tree->data == element) {
        return layer ;
    }
    int layerLeft = solvingeElementLayerInBinaryTreeByRecursive(tree->left, element,layer+1);
    if (layerLeft != 0) {
        return layerLeft ;
    }
    int layerRight = solvingeElementLayerInBinaryTreeByRecursive(tree->right, element,layer+1) ;
    if (layerRight != 0) {
        return layerRight ;
    }
    return 0 ;
}
