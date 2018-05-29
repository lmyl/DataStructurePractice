//
//  LCBXXZDChapterThreeAlgorithmDesignTen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/28.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterThreeAlgorithmDesignTen.h"

typedef struct {
    int carNumber;
    int tag ;
}CarInformation;

typedef struct {
    CarInformation data[MaxSize] ;
    int front ;
    int rear ;
}CarInformationQueue;

void carDispatchSystem(void)  {
    SqStack *stack = initSqStack();
    CarInformationQueue queue ;
    queue.front = 0;
    queue.rear = 0 ;
    int carNumber ;
reInPut:
    printf("请输入车皮数量:\n");
    scanf("%d",&carNumber);
    if (carNumber <= 0) {
        printf("输入不合法，请重新输入\n");
        goto reInPut ;
    }
    int carInformation[carNumber] ;
    for (int i = 1; i<=carNumber; i++) {
reInPutInfo:
        printf("第%d个车皮编号:",i);
        scanf("%d",&carInformation[i-1]);
        if (carInformation[i-1] > carNumber || carInformation[i-1] <= 0) {
            printf("输入不合法，请重新输入\n");
            goto reInPutInfo ;
        }
    }
    int count = 0 ;
    while (count < carNumber) {
        if (carInformation[count] % 2 == 0) {
            pushSq(stack, carInformation[count]);
        }else{
            CarInformation car = {carInformation[count],0} ;
            queue.rear ++;
            queue.data[queue.rear]  = car ;
        }
        count ++ ;
    }
    while (!stackSqEmpty(stack)) {
        int temp ;
        popSq(stack, &temp) ;
        CarInformation car = {temp,1} ;
        queue.rear ++ ;
        queue.data[queue.rear] = car ;
    }
    while (queue.rear > queue.front) {
        queue.front ++ ;
        if (queue.data[queue.front].tag == 0) {
            printf("%d出队\n",queue.data[queue.front].carNumber) ;
        }else{
            printf("%d出栈\n",queue.data[queue.front].carNumber) ;
        }
    }
    
}
