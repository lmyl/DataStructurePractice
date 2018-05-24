//
//  LCBChapterThreeExampleEight.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreeExampleEight.h"

CLiQueueNoHead *initCLiQueueNoHead(void) {
    CLiQueueNoHead *queue = (CLiQueueNoHead *)malloc(sizeof(CLiQueueNoHead));
    queue->next = queue;
    return queue ;
}

CLiQueueNoHead * enCLiQueueNoHead(CLiQueueNoHead *queue , ElemType element) {
    CLiQueueNoHead * data = initCLiQueueNoHead();
    data->data = element;
    if (queue == NULL) {
        queue = data ;
        return queue ;
    }else{
        data->next = queue->next;
        queue->next = data;
        queue = queue->next ;
        return queue ;
    }
}

CLiQueueNoHead * deCLiQueueNoHead(CLiQueueNoHead *queue ,ElemType *element , bool *success) {
    if (queue == NULL) {
        *success =  false ;
        return NULL ;
    }else if (queue->next == queue) {
        *element = queue->data;
        free(queue);
        queue = NULL;
        *success = true ;
        return NULL ;
    }else{
        CLiQueueNoHead *temp = queue->next ;
        *element = temp->data;
        queue->next = temp->next;
        free(temp);
        *success = true ;
        return queue ;
    }
}

bool queueCLiQueueNoHeadEmpty(CLiQueueNoHead *queue) {
    return queue == NULL ;
}
