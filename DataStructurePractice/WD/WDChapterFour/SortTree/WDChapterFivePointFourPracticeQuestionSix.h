//
//  WDChapterFivePointFourPracticeQuestionSix.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterFivePointFourPracticeQuestionSix_h
#define WDChapterFivePointFourPracticeQuestionSix_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//编写一个递归算法，在一棵有n个节点的随机建立起来的二叉排序树上查找第k小的元素，并返回此节点的指针，要求时间复杂度为O(log2n)
//二叉排序树中每个节点增加一个成员count，保存以该节点为根的子树上的节点个数

typedef struct BinaryTreeVariationNode {
    char data ;
    struct BinaryTreeVariationNode *left ;
    struct BinaryTreeVariationNode *right ;
    int count ;
}BinaryTreeVariation;


BinaryTreeVariation * findRankValueInSortedBinaryTree(BinaryTreeVariation *tree,int rank) ;

#endif /* WDChapterFivePointFourPracticeQuestionSix_h */
