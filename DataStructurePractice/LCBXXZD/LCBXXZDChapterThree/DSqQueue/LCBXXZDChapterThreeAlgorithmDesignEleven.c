//
//  LCBXXZDChapterThreeAlgorithmDesignEleven.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/28.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterThreeAlgorithmDesignEleven.h"

#define MaxSize 10

typedef struct {
    int data[MaxSize];
    int frontHead ;
    int frontTail ;
}DSqQueueScore;


bool outPutScoreByDegree(int score[],int number)  {
    DSqQueueScore queue ;
    queue.frontHead = 0  ;
    queue.frontTail = 0 ;
    for (int i = 0; i<number; i++) {
        if (score[i] >= 90) {
            printf("%d-A\n",score[i]);
        }else if (score[i] < 60 ){
            if ((queue.frontTail + 1) % MaxSize  == queue.frontHead) {
                return false ;
            }
            queue.frontTail = (queue.frontTail + 1) % MaxSize ;
            queue.data[queue.frontTail] = score[i];
        }else{
            if ((queue.frontHead - 1 + MaxSize) % MaxSize  == queue.frontTail) {
                return false ;
            }
            queue.data[queue.frontHead] = score[i];
            queue.frontHead = (queue.frontHead - 1 + MaxSize) % MaxSize ;
        }
    }
    while (queue.frontHead != queue.frontTail) {
        queue.frontHead = (queue.frontHead + 1 )% MaxSize ;
        if (queue.data[queue.frontHead] < 60) {
            printf("%d-C\n",queue.data[queue.frontHead]);
        }else{
            printf("%d-B\n",queue.data[queue.frontHead]);
        }
    }
    return true ;
}
