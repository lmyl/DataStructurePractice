//
//  LCBXXZDChapterSevenAlgorithmDesignSixteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSevenAlgorithmDesignSixteen.h"

int countPostSequenceLessThanElement(BinaryTree *tree , ElemType element)  {
    if (tree == NULL) {
        return 0 ;
    }
    int countLeft = countPostSequenceLessThanElement(tree->left, element) ;
    int countRight = countPostSequenceLessThanElement(tree->right, element) ;
    if (tree->data < element) {
        return countRight + countLeft + 1;
    }else{
        return countRight + countLeft ;
    }
}
