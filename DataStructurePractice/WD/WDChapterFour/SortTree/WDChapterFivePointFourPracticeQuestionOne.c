//
//  WDChapterFivePointFourPracticeQuestionOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFivePointFourPracticeQuestionOne.h"

ElemType findTheMaxInBinaryTreePrivate(BinaryTree *tree) ;
ElemType findTheMinInBinaryTreePrivate(BinaryTree *tree) ;

bool isSortedBinaryTree(BinaryTree *tree) {
    
    if (tree == NULL) {
        return true ;
    }
    
    if (tree->left != NULL && tree->data <= findTheMaxInBinaryTreePrivate(tree->left)) {
        return false ;
    }
    
    if (tree->right != NULL &&  findTheMinInBinaryTreePrivate(tree->right) <= tree->data) {
        return false ;
    }

    return isSortedBinaryTree(tree->left) && isSortedBinaryTree(tree->right) ;

}

ElemType findTheMaxInBinaryTreePrivate(BinaryTree *tree) {
    if (tree == NULL) {
        return 0 ;
    }
    ElemType value = tree ->data ;
    ElemType valueOne = findTheMaxInBinaryTreePrivate(tree->left);
    ElemType valueTwo = findTheMaxInBinaryTreePrivate(tree->right);
    if (value < valueOne) {
        value = valueOne ;
    }
    if (value < valueTwo) {
        value  =valueTwo ;
    }
    return value ;
}

ElemType findTheMinInBinaryTreePrivate(BinaryTree *tree) {
    if (tree == NULL) {
        return 'z' ;
    }
    ElemType value = tree ->data ;
    ElemType valueOne = findTheMinInBinaryTreePrivate(tree->left);
    ElemType valueTwo = findTheMinInBinaryTreePrivate(tree->right);
    if (value > valueOne) {
        value = valueOne ;
    }
    if (value > valueTwo) {
        value  =valueTwo ;
    }
    return value ;
}
