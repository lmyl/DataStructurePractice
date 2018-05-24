//
//  LCBChapterThreeLiQueue.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreeLiQueue.h"

LiQueue * initLiQueue(void) {
    LiQueue *queue = (LiQueue *)malloc(sizeof(LiQueue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue ;
}

QNode * initQNode(void) {
    QNode *qnode = (QNode *)malloc(sizeof(QNode));
    qnode->next = NULL ;
    return qnode ;
}

void destoryLiQueue(LiQueue *queue) {
    QNode *node = queue->front;
    QNode *next ;
    while (node != NULL) {
        next = node;
        node = node->next;
        free(next);
    }
    free(queue);
    queue = NULL ;
}

bool queueLiEmpty(LiQueue *queue) {
    return queue->front == NULL ;
}


void enLiQueue(LiQueue *queue,ElemType element) {
    QNode *data = initQNode();
    data->data = element;
    if (queue->front == NULL) {
        queue->front = data ;
        queue->rear = data ;
    }else{
        queue->rear->next = data;
        queue->rear = data;
    }
}

bool deLiQueue(LiQueue *queue,ElemType *element) {
    if (queue->front == NULL) {
        return false ;
    }else{
        QNode *temp = queue->front ;
        if (queue->front == queue->rear) {
            queue->front = NULL;
            queue->rear = NULL;
        }else{
            queue->front = temp->next;
        }
        *element = temp->data ;
        free(temp);
        return true ;
    }
}
