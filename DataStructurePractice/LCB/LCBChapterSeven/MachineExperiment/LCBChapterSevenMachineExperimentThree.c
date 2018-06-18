//
//  LCBChapterSevenMachineExperimentThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenMachineExperimentThree.h"

int countWayLength(BinaryTreeParentSonCSqQueue *queue , BinaryTreeParentSonNode node) ;

void displayTheLongestWayFromLeafToRoot(BinaryTree *tree)  {
    BinaryTreeParentSonCSqQueue *queue = initBinaryTreeParentSonCSqQueue() ;
    if (tree == NULL) {
        return ;
    }
    int gobalMaxWay = 0 ;
    BinaryTreeParentSonNode gobalMaxWayStart ;
    BinaryTreeParentSonNode newNode = {tree ,-1} ;
    queue->rear ++ ;
    queue->data[queue->rear]  = newNode ;
    int layer = -1 ;
    while (queue->rear != queue->front) {
        layer ++ ;
        queue->front ++ ;
        newNode = queue->data[queue->front] ;
        if (newNode.data->left != NULL) {
            queue->rear ++ ;
            BinaryTreeParentSonNode node = {newNode.data->left , layer} ;
            queue->data[queue->rear] = node ;
        }
        if (newNode.data->right != NULL) {
            queue->rear ++ ;
            BinaryTreeParentSonNode node = {newNode.data->right ,layer} ;
            queue->data[queue->rear] = node ;
        }
        if (newNode.data->right == NULL && newNode.data->left == NULL) {
            int length = countWayLength(queue, newNode) ;
            if (length > gobalMaxWay) {
                gobalMaxWay = length ;
                gobalMaxWayStart = newNode ;
            }
        }
    }
    int start = gobalMaxWayStart.parent ;
    printf("%c",gobalMaxWayStart.data->data) ;
    while (start != -1) {
        printf("%c",queue->data[start].data->data);
        start = queue->data[start].parent ;
    }
}

int countWayLength(BinaryTreeParentSonCSqQueue *queue , BinaryTreeParentSonNode node)  {
    int length = 1 ;
    int start = node.parent ;
    while (start != -1) {
        length ++ ;
        start = queue->data[start].parent ;
    }
    return length ;
}
