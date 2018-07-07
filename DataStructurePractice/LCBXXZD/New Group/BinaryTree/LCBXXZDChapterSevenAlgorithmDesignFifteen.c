//
//  LCBXXZDChapterSevenAlgorithmDesignFifteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSevenAlgorithmDesignFifteen.h"

BinaryTree * findPostSequenceFirstNode(BinaryTree *tree)  {
    while (true) {
        while (tree->left != NULL) {
            tree = tree->left ;
        }
        if (tree->right == NULL) {
            return tree ;
        }else {
            tree = tree->right ;
        }
    }
}
