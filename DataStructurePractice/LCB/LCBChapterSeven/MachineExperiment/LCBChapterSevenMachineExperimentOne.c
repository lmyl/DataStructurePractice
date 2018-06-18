//
//  LCBChapterSevenMachineExperimentOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenMachineExperimentOne.h"

int breadthOfBinaryTree(BinaryTree *tree) {
    BinaryTreeCSqQueue *queue = initBinaryTreeCSqQueue() ;
    int layerNodeCount = 1 ;
    int layerNextNodeCount = 0;
    int layerNodeCounter = 0;
    int layerMaxCount = 1 ;
    if (tree == NULL) {
        return 0 ;
    }
    queue->rear = (queue->rear + 1)%MaxSize ;
    queue->data[queue->rear] = tree ;
    while (queue->rear != queue->front) {
        queue->front = (queue->front + 1) %MaxSize ;
        layerNodeCounter ++ ;
        BinaryTree *treeCopy = queue->data[queue->front] ;
        if (treeCopy->left != NULL) {
            queue->rear = (queue->rear + 1) %MaxSize ;
            queue->data[queue->rear] = treeCopy->left ;
            layerNextNodeCount ++ ;
        }
        if (treeCopy->right != NULL) {
            queue->rear = (queue->rear + 1) %MaxSize ;
            queue->data[queue->rear] = treeCopy->right ;
            layerNextNodeCount ++ ;
        }
        if (layerNodeCounter == layerNodeCount ) {
            layerNodeCount = layerNextNodeCount;
            layerNodeCounter = 0 ;
            if (layerMaxCount < layerNextNodeCount) {
                layerMaxCount = layerNextNodeCount ;
            }
            layerNextNodeCount = 0 ;
        }
    }
    return layerMaxCount ;
}

int countNodeOfBinaryTree(BinaryTree *tree) {
    if (tree == NULL) {
        return 0 ;
    }
    int count = 1 ;
    count += countNodeOfBinaryTree(tree->left) ;
    count += countNodeOfBinaryTree(tree->right) ;
    return count ;
}

int countLeafNodeOfBinaryTree(BinaryTree *tree) {
    if (tree->left == NULL && tree->right == NULL) {
        return 1 ;
    }
    int count = 0 ;
    if (tree->left != NULL) {
        count += countLeafNodeOfBinaryTree(tree->left) ;
    }
    if (tree->right != NULL) {
        count += countLeafNodeOfBinaryTree(tree->right) ;
    }
    return count ;
}
