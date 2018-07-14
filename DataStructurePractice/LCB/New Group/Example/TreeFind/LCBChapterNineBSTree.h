//
//  LCBChapterNineBSTree.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterNineBSTree_h
#define LCBChapterNineBSTree_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXL 500

typedef int  KeyType  ;
typedef int InfoType[10];

typedef struct bstnode{
    KeyType key ;
    InfoType data ;
    struct bstnode * right ;
    struct bstnode * left ;
}BSTNode;

typedef struct {
    BSTNode * result ;
    bool success ;
}InsertBSTResult;

typedef struct {
    BSTNode * result ;
    BSTNode * resultParent ;
    int tag ; //-1左，1右
}BSTreeSearchIncludeParentResult;

typedef struct {
    bool success ;
    BSTNode *tree ;
}deleteBSTreeResult;

BSTNode * initBSTNode(void) ;
void displayBSTree(BSTNode *tree) ;

InsertBSTResult insertBST(BSTNode *tree , KeyType key ) ;

BSTNode * creatBSTree(KeyType keyArray[MAXL] , int keyNumbers) ;

BSTNode * BSTreeSearch(BSTNode *tree , KeyType key) ;

BSTreeSearchIncludeParentResult BSTreeSearchIncludeParent(BSTNode *tree , KeyType key) ;

deleteBSTreeResult deleteBSTree(BSTNode *tree , KeyType key) ;


#endif /* LCBChapterNineBSTree_h */
