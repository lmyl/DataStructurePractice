//
//  WDChapterFourPracticeQuestionFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/8.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFourPracticeQuestionFour.h"

typedef struct {
    BinaryTree * data[MaxSize] ;
    int rear ;
    int front ;
}BinaryTreeWDDesignCSQueue;

int binaryTreeHeightNoRecursive(BinaryTree *tree)  {
    BinaryTreeWDDesignCSQueue queue ;
    queue.front = queue.rear = 0 ;
    queue.rear = (queue.rear + 1) %MaxSize ;
    queue.data[queue.rear] = tree ;
    int layer = 0 ;
    int nowLayer = 1 ;
    int nowLayerCount = 0 ;
    int nextLayer = 0 ;
    while (queue.rear != queue.front ) {
        nowLayerCount ++ ;
        queue.front = (queue.front + 1) %MaxSize ;
        BinaryTree *treeCopy = queue.data[queue.front] ;
        if (treeCopy->left != NULL) {
            queue.rear = (queue.rear + 1) %MaxSize ;
            queue.data[queue.rear] = treeCopy->left ;
            nextLayer ++ ;
        }
        if (treeCopy->right != NULL) {
            queue.rear = (queue.rear + 1) %MaxSize ;
            queue.data[queue.rear] = treeCopy->right ;
            nextLayer ++ ;
        }
        if (nowLayerCount == nowLayer) {
            nowLayer = nextLayer ;
            nextLayer = 0 ;
            nowLayerCount = 0 ;
            layer ++ ;
        }
    }
    return layer ;
}
