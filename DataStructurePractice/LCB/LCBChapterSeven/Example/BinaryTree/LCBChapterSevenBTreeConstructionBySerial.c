//
//  LCBChapterSevenBTreeConstructionBySerial.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenBTreeConstructionBySerial.h"

BinaryTree * constructionBinaryTreeByPreAndMidSerial(char preSerial[] ,int preSerialLow , int preSerialUp ,char midSerial[] ,int midSerialLow , int midSerialUp) {
    if (preSerialLow > preSerialUp || midSerialLow > midSerialUp) {
        return NULL ;
    }
    BinaryTree *tree = initBinaryTree();
    tree->data = preSerial[preSerialLow] ;
    int location = -1 ;
    for (int i = midSerialLow; i<=midSerialUp; i++) {
        if (midSerial[i] == preSerial[preSerialLow]) {
            location = i ;
            break ;
        }
    }
    tree->left = constructionBinaryTreeByPreAndMidSerial(preSerial, preSerialLow+1, preSerialLow+location-midSerialLow , midSerial, midSerialLow, location-1) ;
    tree->right = constructionBinaryTreeByPreAndMidSerial(preSerial, preSerialLow+location-midSerialLow + 1,preSerialUp, midSerial,location+1, midSerialUp);
    return tree ;
    
}


BinaryTree * constructionBinaryTreeByAfterAndMidSerial(char afterSerial[] ,int afterSerialLow , int afterSerialUp ,char midSerial[] ,int midSerialLow , int midSerialUp) {
    if (afterSerialLow > afterSerialUp || midSerialLow > midSerialUp) {
        return NULL ;
    }
    BinaryTree *tree = initBinaryTree() ;
    tree->data = afterSerial[afterSerialUp] ;
    int location = -1;
    for (int i = midSerialLow; i<=midSerialUp; i++) {
        if (midSerial[i] == afterSerial[afterSerialUp]) {
            location = i ;
            break ;
        }
    }
    tree->left = constructionBinaryTreeByAfterAndMidSerial(afterSerial, afterSerialLow, afterSerialLow+location-midSerialLow-1, midSerial, midSerialLow, location-1) ;
    tree->right = constructionBinaryTreeByAfterAndMidSerial(afterSerial, afterSerialLow+location-midSerialLow, afterSerialUp-1, midSerial, location+1, midSerialUp) ;
    return tree;
}
