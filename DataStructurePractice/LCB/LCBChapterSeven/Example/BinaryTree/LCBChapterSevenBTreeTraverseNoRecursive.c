//
//  LCBChapterSevenBTreeTraverseNoRecursive.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenBTreeTraverseNoRecursive.h"



void preTraverseBTreeNoRecursive(BinaryTree *tree) {
    if (tree == NULL) {
        return ;
    }
    BinaryTreeStack *stack = initBinaryTreeStack();
    stack->top ++ ;
    stack->data[stack->top] = tree ;
    while (stack->top != -1) {
        BinaryTree *treeCopy = stack->data[stack->top] ;
        stack->top -- ;
        printf("%c",treeCopy->data) ;
        if (treeCopy->right != NULL) {
            stack->top ++ ;
            stack->data[stack->top] = treeCopy->right ;
        }
        if (treeCopy->left != NULL) {
            stack->top ++ ;
            stack->data[stack->top] = treeCopy->left ;
        }
    }
}

void midTraverseBTreeNoRecursive(BinaryTree *tree) {
    if (tree == NULL) {
        return ;
    }
    BinaryTreeStack *stack = initBinaryTreeStack();
    stack->top ++ ;
    stack->data[stack->top] = tree ;
    BinaryTree *treeCopy = stack->data[stack->top];
    while (stack->top != -1) {
        while (treeCopy != NULL && treeCopy->left != NULL ) {
            stack->top ++ ;
            stack->data[stack->top] = treeCopy->left ;
            treeCopy = treeCopy->left ;
        }
        treeCopy = stack->data[stack->top] ;
        printf("%c",treeCopy->data) ;
        stack->top -- ;
        if (treeCopy->right != NULL) {
            stack->top ++ ;
            stack->data[stack->top] = treeCopy->right ;
            treeCopy = treeCopy->right ;
        }else{
            treeCopy = NULL ;
        }
    }
}

void afterTraverseBTreeNoRecursive(BinaryTree *tree) {
    if (tree == NULL) {
        return ;
    }
    BinaryTreeStack *stack = initBinaryTreeStack();
    stack->top ++ ;
    stack->data[stack->top] = tree ;
    BinaryTree *treeCopy = tree ;
    BinaryTree *temp = NULL;
    while (stack->top != -1) {
        while (treeCopy != NULL && treeCopy->left != NULL) {
            stack->top ++ ;
            stack->data[stack->top] = treeCopy->left ;
            treeCopy = treeCopy->left ;
        }
        treeCopy = stack->data[stack->top];
        if (temp != treeCopy->right && treeCopy->right != NULL) {
            stack->top ++ ;
            stack->data[stack->top] = treeCopy->right;
            treeCopy = treeCopy->right ;
        }else{
            printf("%c",treeCopy->data) ;
            stack->top -- ;
            temp = treeCopy ;
            treeCopy = NULL ;
        }
    }
}

void layerTraverseBTreeNoRecursive(BinaryTree *tree) {
    BinaryTreeCSqQueue *queue = initBinaryTreeCSqQueue();
    queue->rear = (queue->rear + 1) % MaxSize ;
    queue->data[queue->rear] = tree ;
    while (queue->front != queue->rear) {
        queue->front = (queue->front + 1) % MaxSize ;
        BinaryTree *treeCopy = queue->data[queue->front] ;
        printf("%c",treeCopy->data) ;
        if (treeCopy->left != NULL) {
            queue->rear = (queue->rear + 1) % MaxSize ;
            queue->data[queue->rear] = treeCopy->left ;
        }
        if (treeCopy->right != NULL) {
            queue->rear = (queue->rear + 1) % MaxSize ;
            queue->data[queue->rear] = treeCopy->right ;
        }
    }
}

BinaryTreeStack * initBinaryTreeStack(void) {
    BinaryTreeStack *stack = (BinaryTreeStack *)malloc(sizeof(BinaryTreeStack));
    stack->top = -1;
    return stack ;
}

BinaryTreeCSqQueue *initBinaryTreeCSqQueue(void) {
    BinaryTreeCSqQueue *queue = (BinaryTreeCSqQueue *)malloc(sizeof(BinaryTreeCSqQueue));
    queue->front = 0;
    queue->rear = 0 ;
    return queue ;
}
