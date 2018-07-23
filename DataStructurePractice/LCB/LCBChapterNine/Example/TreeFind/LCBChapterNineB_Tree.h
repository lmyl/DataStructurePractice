//
//  LCBChapterNineB_Tree.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterNineB_Tree_h
#define LCBChapterNineB_Tree_h

#include <stdio.h>
#define MAXM 10

typedef int KeyType;
typedef struct btreenode {
    int keyNum ;    //节点拥有关键字类型
    KeyType key[MAXM] ;
    struct btreenode * parent ;
    struct btreenode * child[MAXM] ;
}BTNode;

int stratum = 10 ;
int MAXLength = 9 ;
int MINLegnth = 4 ;

typedef struct {
    BTNode * result ;
    int index ;  //在节点中的关键字序号
    int tag ; //1:查找成功，2:查找失败
}B_TreeResult;

B_TreeResult b_TreeSearch(BTNode *tree,KeyType key) ;

#endif /* LCBChapterNineB_Tree_h */
