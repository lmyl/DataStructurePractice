//
//  LCBChapterSevenThreadedBinaryTreeTraverse.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenThreadedBinaryTreeTraverse.h"

void midTraverseThreadedBinaryTree(ThreadedBinaryTree *tree)  {
    ThreadedBinaryTree *treeCopy = tree->left ;
    while (treeCopy != tree) {
        while (treeCopy->leftTag == 0 ) {
            treeCopy = treeCopy->left ;
        }
        printf("%c",treeCopy->data) ;
        while (treeCopy->rightTag == 1 && treeCopy ->right != tree) {
            printf("%c",treeCopy->right->data) ;
            treeCopy = treeCopy->right ;
        }
        treeCopy = treeCopy->right ;
    }
}
