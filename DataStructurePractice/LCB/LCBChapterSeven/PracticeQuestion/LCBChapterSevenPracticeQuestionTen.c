//
//  LCBChapterSevenPracticeQuestionTen.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenPracticeQuestionTen.h"

void isHaveCommonAncestorInBinaryTreeByRescurive(BinaryTree *ancestor, BinaryTree *sonOne , BinaryTree *sonTwo,int *flagOne , int *flagTwo) ;

bool isHaveCommonAncestorInBinaryTree(BinaryTree *ancestor, BinaryTree *sonOne , BinaryTree *sonTwo)  {
    int flagOne = 0;
    int flagTwo = 0 ;
    isHaveCommonAncestorInBinaryTreeByRescurive(ancestor, sonOne, sonTwo, &flagOne, &flagTwo);
    if (flagOne == 1 && flagTwo == 1) {
        return true ;
    }
    return false ;
}

void isHaveCommonAncestorInBinaryTreeByRescurive(BinaryTree *ancestor, BinaryTree *sonOne , BinaryTree *sonTwo ,int *flagOne , int *flagTwo) {
    if (ancestor == NULL) {
        return ;
    }
    if (ancestor == sonOne && *flagOne == 0) {
        *flagOne = 1 ;
        if (*flagTwo == 0) {
            isHaveCommonAncestorInBinaryTreeByRescurive(ancestor->left, sonOne, sonTwo,flagOne,flagTwo) ;
            if (*flagTwo == 0) {
                isHaveCommonAncestorInBinaryTreeByRescurive(ancestor->right, sonOne, sonTwo,flagOne,flagTwo) ;
            }
        }else{
            return ;
        }
    }
    if (ancestor == sonTwo && *flagTwo == 0) {
        *flagTwo = 1 ;
        if (*flagOne == 0) {
            isHaveCommonAncestorInBinaryTreeByRescurive(ancestor->left, sonOne, sonTwo,flagOne,flagTwo) ;
            if (*flagOne == 0) {
                isHaveCommonAncestorInBinaryTreeByRescurive(ancestor->right, sonOne, sonTwo,flagOne,flagTwo) ;
            }
        }else{
            return ;
        }
    }
    if (*flagOne == 1 && *flagTwo == 1) {
        return ;
    }
    isHaveCommonAncestorInBinaryTreeByRescurive(ancestor->left, sonOne, sonTwo,flagOne,flagTwo) ;
    if (*flagOne == 1 && *flagTwo == 1) {
        return ;
    }
    isHaveCommonAncestorInBinaryTreeByRescurive(ancestor->right, sonOne, sonTwo,flagOne,flagTwo) ;
    
}
