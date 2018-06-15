//
//  LCBChapterSevenUFSTree.h
//  DataStructurePractice
//
//  Created by ly on 2018/6/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterSevenUFSTree_h
#define LCBChapterSevenUFSTree_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define Numbers 100

typedef struct {
    int data ;
    int rank ;
    int parent ;
}UFSTree;

void initUFSTree(UFSTree tree[Numbers]) ;

int findInUFSTree(UFSTree tree[Numbers] , int element) ;

void unionUFSTree(UFSTree tree[Numbers] , int elementOne , int elementTwo) ;

#endif /* LCBChapterSevenUFSTree_h */
