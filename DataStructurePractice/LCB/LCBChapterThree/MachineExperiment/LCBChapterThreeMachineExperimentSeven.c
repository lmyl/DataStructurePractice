//
//  LCBChapterThreeMachineExperimentSeven.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/26.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreeMachineExperimentSeven.h"


void displayMenu(int *choice) ;
void stopWait(CSqQueue *waitQueue);
void lookupQueeu(CSqQueue waitQueue);
void visitPatient(CSqQueue *waitQueue);
void lineUp(CSqQueue *waitQueue) ;
void offWork(void);

void hospitalProcedures(void)  {
    int choice ;
    CSqQueue *waitQueue = initCSqQueue() ;
    while (true) {
        displayMenu(&choice) ;
        switch (choice) {
            case 1:
                lineUp(waitQueue);
                break;
            case 2:
                visitPatient(waitQueue);
                break;
            case 3:
                lookupQueeu(*waitQueue);
                break;
            case 4:
                stopWait(waitQueue);
                break;
            case 5:
                offWork() ;
                break;
        }
    }
}

void displayMenu(int *choice)  {
reInput:
    printf("-------------菜单-------------\n");
    printf("1.排队\n");
    printf("2.就诊\n");
    printf("3.查看排队\n");
    printf("4.不再排队，余下一次就诊\n");
    printf("5.下班\n");
    printf("------------------------------\n");
    printf("请选择:\n");
    scanf("%d",choice);
    if (*choice >= 5 || *choice <= 0) {
        printf("选择错误，请重新输入:\n");
        goto reInput ;
    }
}


void stopWait(CSqQueue *waitQueue) {
    while (!queueCSqEmpty(waitQueue)) {
        int temp ;
        deCSqQueue(waitQueue, &temp);
        printf("就诊病人%d\n",temp);
    }
    exit(2);
}

void lookupQueeu(CSqQueue waitQueue) {
    if (queueCSqEmpty(&waitQueue)) {
        printf("无病人排队\n");
        return ;
    }
    while (!queueCSqEmpty(&waitQueue)) {
        int temp ;
        deCSqQueue(&waitQueue, &temp);
        printf("查看病人%d\n",temp);
    }
}

void visitPatient(CSqQueue *waitQueue) {
    if (!queueCSqEmpty(waitQueue)) {
        int temp ;
        deCSqQueue(waitQueue, &temp);
        printf("就诊病人%d\n",temp);
    }else{
        printf("无病人正在等待\n");
    }
}

void lineUp(CSqQueue *waitQueue) {
    int serialPatient ;
    printf("请输入病人简历号:\n");
    scanf("%d",&serialPatient);
    if (!enCSqQueue(waitQueue, serialPatient)) {
        printf("排队队列已满!\n");
    }else{
        printf("添加成功！\n");
    }
}

void offWork(void) {
    exit(1);
}
