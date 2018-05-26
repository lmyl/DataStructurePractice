
//
//  LCBChapterThreePracticeQuestionSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreePracticeQuestionSix.h"


void cardinalSortByQueue(void) {
    SqQueue * queueSerial[10] ;
    for (int i = 0; i<10; i++) {
        SqQueue *queue = initSqQueue();
        queueSerial[i] = queue ;
    }
    printf("请输入需要输入的元素个数:\n");
    int numbersCount ;
    scanf("%d",&numbersCount);
    printf("请输入数据元素:\n");
    for (int i = 0; i<numbersCount; i++) {
        int input ;
        scanf("%d",&input);
        enSqQueue(queueSerial[input], input);
    }
    LinkList *result = initLinkList() ;
    LinkList *next = result ;
    for (int i = 0; i<10; i++) {
        while (!queueSqEmpty(queueSerial[i])) {
            int temp ;
            deSqQueue(queueSerial[i], &temp);
            LinkList *data = initLinkList();
            data->data = temp;
            data->next = next->next;
            next->next = data;
            next  = data ;
        }
    }
    dispLinkList(result);
}
