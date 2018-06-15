//
//  LCBChapterSevenUFSTree.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenUFSTree.h"

void initUFSTree(UFSTree tree[Numbers]) {
    for (int i = 0; i<Numbers; i++) {
        tree[i].data = i ;
        tree[i].parent = i ;
        tree[i].rank = 0 ;
    }
}

int findInUFSTree(UFSTree tree[Numbers] , int element) {
    while (tree[element].parent != element) {
        element = tree[element].parent ;
    }
    return element ;
}

void unionUFSTree(UFSTree tree[Numbers] , int elementOne , int elementTwo) {
    int oneTree = findInUFSTree(tree, elementOne);
    int twoTree = findInUFSTree(tree, elementTwo) ;
    if (oneTree == twoTree ) {
        return ;
    }
    if (tree[oneTree].rank > tree[twoTree].rank) {
        tree[twoTree].parent = oneTree ;
    }else if (tree[oneTree].rank < tree[twoTree].rank) {
        tree[oneTree].parent = twoTree ;
    }else {
        tree[oneTree].parent = twoTree ;
        tree[oneTree].rank ++ ;
    }
}

