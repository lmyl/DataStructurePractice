//
//  LCBXXZDChapterNineAlgorithmDesignSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterNineAlgorithmDesignSix.h"


bool isSequenceOfSearchValueInBSTree(BSTNode *tree , KeyType key ,KeyType sequence[MAXL],int sequenceLength) {
    BSTNode *next = tree ;
    for (int i = 0; i<sequenceLength; i++) {
        if (next == NULL || next->key != sequence[i]) {
            return false ;
        }
        if (next->key > key) {
            next = next->left ;
        }else if (next->key < key) {
            next = next->right ;
        }else{
            if (i != sequenceLength - 1) {
                return false ;
            }
        }
    }
    if (next == NULL || next->key != sequence[sequenceLength - 1]) {
        return false ;
    }
    return true ;
}
