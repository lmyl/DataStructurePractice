//
//  LCBXXZDChapterSevenAlgorithmDesignEleven.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterSevenAlgorithmDesignEleven_h
#define LCBXXZDChapterSevenAlgorithmDesignEleven_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//假设二叉树的存储结构如下
typedef struct node{
    char data ;
    struct node * right ;
    struct node * left ;
    struct node * parent ;
}PBTNode;

//其中，节点的right和left已分别指向左右孩子节点的指针，而parent域中为空，设计一个算法，将该存储结构中各节点的parent域的值修改成指向其双亲节点的指针
void setParentInPBTNode(PBTNode *tree) ;


#endif /* LCBXXZDChapterSevenAlgorithmDesignEleven_h */
