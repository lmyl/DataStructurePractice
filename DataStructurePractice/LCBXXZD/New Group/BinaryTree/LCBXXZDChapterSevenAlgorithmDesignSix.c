//
//  LCBXXZDChapterSevenAlgorithmDesignSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSevenAlgorithmDesignSix.h"

typedef struct {
    BinaryTree * data[MaxSize] ;
    int front ;
    int rear ;
}BinaryTreeQueueByLCBXXZD;


BinaryTreeQueueByLCBXXZD * initBinaryTreeQueueByLCBXXZD(void) ;


BinaryTree * findTheClosestLeafFromRoot(BinaryTree *tree)  {
    BinaryTreeQueueByLCBXXZD * queue = initBinaryTreeQueueByLCBXXZD() ;
    queue->rear  = (queue->rear + 1)%MaxSize ;
    queue->data[queue->rear] = tree ;
    while (queue->front != queue->rear) {
        queue->front = (queue->front + 1) %MaxSize ;
        BinaryTree * node = queue->data[queue->front] ;
        if (node->left == NULL && node->right == NULL) {
            return node ;
        }else if (node->left != NULL) {
            queue->rear  = (queue->rear + 1)%MaxSize ;
            queue->data[queue->rear] = node->left ;
        }else if (node->right != NULL) {
            queue->rear  = (queue->rear + 1)%MaxSize ;
            queue->data[queue->rear] = node->right ;
        }
    }
    return NULL ;
}

BinaryTreeQueueByLCBXXZD * initBinaryTreeQueueByLCBXXZD(void)  {
    BinaryTreeQueueByLCBXXZD * queue = (BinaryTreeQueueByLCBXXZD *)malloc(sizeof(BinaryTreeQueueByLCBXXZD)) ;
    queue->front = -1 ;
    queue->rear = -1 ;
    return queue ;
}
