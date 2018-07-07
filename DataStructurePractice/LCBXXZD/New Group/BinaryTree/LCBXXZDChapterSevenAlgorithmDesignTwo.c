//
//  LCBXXZDChapterSevenAlgorithmDesignTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/28.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSevenAlgorithmDesignTwo.h"

typedef struct {
    int index ;
    ElemType data ;
}SqBTreeNode;

typedef struct {
    int top ;
    SqBTreeNode data[MaxSize] ;
}SqBTreeStack;

SqBTreeStack *initSqBTreeStack(void) ;
void preTraverseSqBTreeByRecursivePrivate(sqBTree tree , int index ) ;

void preTraverseSqBTreeNoRecursive(sqBTree tree) {
    SqBTreeStack *stack = initSqBTreeStack();
    if (tree[1] == '#') {
        return ;
    }
    SqBTreeNode newNode = {1,tree[1]} ;
    stack->top ++ ;
    stack->data[stack->top] = newNode ;
    while (stack->top != -1) {
        newNode = stack->data[stack->top] ;
        stack->top -- ;
        printf("%c",newNode.data) ;
        int right = 2 * newNode.index + 1 ;
        if (right < MaxSize && tree[right] != '#') {
            stack->top ++ ;
            SqBTreeNode node = {right , tree[right]}  ;
            stack->data[stack->top] = node ;
        }
        int left = 2 * newNode.index  ;
        if (left < MaxSize && tree[left] != '#') {
            stack->top ++ ;
            SqBTreeNode node = {left ,tree[left]};
            stack->data[stack->top] = node ;
        }
    }
}

void preTraverseSqBTreeByRecursive(sqBTree tree) {
    preTraverseSqBTreeByRecursivePrivate(tree , 1) ;
}


SqBTreeStack *initSqBTreeStack(void) {
    SqBTreeStack *stack = (SqBTreeStack *)malloc(sizeof(SqBTreeStack));
    stack->top = -1 ;
    return stack ;
}

void preTraverseSqBTreeByRecursivePrivate(sqBTree tree,int index)  {
    if (index >= MaxSize || tree[index] == '#') {
        return ;
    }
    printf("%c",tree[index]) ;
    preTraverseSqBTreeByRecursivePrivate(tree , 2*index) ;
    preTraverseSqBTreeByRecursivePrivate(tree, 2*index + 1) ;
}
