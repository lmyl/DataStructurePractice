//
//  LCBChapterSevenExampleThree,h
//  DataStructurePractice
//
//  Created by ly on 2018/6/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterSevenExampleThree_h
#define LCBChapterSevenExampleThree_h

#include <stdio.h>
#include <stdlib.h>

#define MaxSize 500

typedef int ElemType;

//双亲存储
typedef struct {
    ElemType data ;
    int parent ;
}PTree;


//孩子链存储
typedef struct sonNode{
    ElemType data ;
    struct sonNode *sons[MaxSize] ;
}TSonNode;

//以孩子兄弟链作为存储结构，计算树的高度

typedef struct tnode{
    ElemType data ;
    struct tnode *child ;
    struct tnode *brothers ;
}TSBNode;

int treeHeight(TSBNode *tree) ;
#endif /* LCBChapterSevenExampleThree_h */
