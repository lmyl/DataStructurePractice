//
//  WDChapterFivePointFourPracticeQuestionSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFivePointFourPracticeQuestionSix.h"

BinaryTreeVariation * findRankValueInSortedBinaryTree(BinaryTreeVariation *tree,int rank) {
    if (tree->left == NULL) {
        if (rank == 1 ) {
            return tree;
        }else{
            return findRankValueInSortedBinaryTree(tree->right, rank-1) ;
        }
    }else {
        if (tree->left->count == rank - 1) {
            return tree ;
        }else if (tree->left->count >= rank) {
            return findRankValueInSortedBinaryTree(tree->left, rank) ;
        }else {
            return findRankValueInSortedBinaryTree(tree->right, rank - tree->left->count - 1) ;
        }
    }
}
