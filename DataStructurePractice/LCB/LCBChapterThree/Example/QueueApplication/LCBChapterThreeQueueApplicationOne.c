//
//  LCBChapterThreeQueueApplicationOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreeQueueApplicationOne.h"


void reportNumberOfQuestions(int count ,int flag,int range) {
    CSqQueue *queue = initCSqQueue();
    printf("初始序号：\n");
    for (int i = 1; i<=count; i++) {
        printf("%d  ",i);
        enCSqQueue(queue, i);
    }
    printf("\n");
    printf("出队顺序:\n");
    while (!queueCSqEmpty(queue)) {
        ElemType temp ;
        for (int i = 1; i<=range; i++) {
            if (!deCSqQueue(queue, &temp)) {
                printf("\n");
                return ;
            };
            if (i != flag) {
                enCSqQueue(queue, temp);
            }else{
                printf("%d  ",temp);
            }
        }
    }
    printf("\n");
}
