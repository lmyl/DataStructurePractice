//
//  LCBChapterNineB_Tree.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterNineB_Tree.h"

int findLocationInBTNode(BTNode *node , KeyType key)  ;

B_TreeResult b_TreeSearch(BTNode *tree,KeyType key) {
    B_TreeResult result  ;
    if (tree == NULL) {
        result.tag = 2;
        return result ;
    }
    int location = findLocationInBTNode(tree, key) ;
    if (location < tree->keyNum && tree->key[location] == key) {
        result.index = location ;
        result.tag = 1 ;
        result.result = tree ;
        return result ;
    }
    return b_TreeSearch(tree->child[location], key);
}

int findLocationInBTNode(BTNode *node , KeyType key) {
    for (int i = 0; i<node->keyNum; i++) {
        if (key <= node->key[i]) {
            return i ;
        }
    }
    return node->keyNum ;
}
