//
//  WDChapterFourPracticeQuestionFourteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/8.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFourPracticeQuestionFourteen.h"
#include "LCBChapterSevenBTreeTraverse.h"

BinaryTree * solvingPostSequenceByPreSequencePrivate(char preSequence[MaxSize] , int low, int up) ;

void solvingPostSequenceByPreSequence(char preSequence[MaxSize] , int length) {
    BinaryTree *tree = solvingPostSequenceByPreSequencePrivate(preSequence, 0, length-1) ;
    afterTraverseBTree(tree) ;
}

BinaryTree * solvingPostSequenceByPreSequencePrivate(char preSequence[MaxSize] , int low, int up)  {
    if (low > up) {
        return  NULL ;
    }
    BinaryTree *tree = initBinaryTree();
    tree->data = preSequence[low] ;
    int length = up - low + 1 ;
    tree->left = solvingPostSequenceByPreSequencePrivate(preSequence, low+1, low + length/2) ;
    tree->right = solvingPostSequenceByPreSequencePrivate(preSequence, low + length/2 + 1, up) ;
    return tree ;
}
