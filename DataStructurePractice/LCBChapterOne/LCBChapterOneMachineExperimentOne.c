//
//  LCBChapterOneMachineExperimentOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/29.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterOneMachineExperimentOne.h"
#include <math.h>

//输出所有小于number的质数,number为一个大于2的正整数
//要求：1.每行输出10个质数  2.尽可能采用最优算法
void outputPrimeNumber(int number) {
    int counter = 0;
    int judgmentFlag = 0;
    for (int i=2; i<=number; i++) {
        judgmentFlag = judgment(i);
        if (judgmentFlag == 1) {
            counter ++;
            printf("%d  ",i);
        }
        if (counter == 10) {
            counter = 0 ;
            printf("\n");
        }
    }
}

//判断数number是不是一个质数
int judgment(int number) {
    int demarcation = (int)sqrt((double)number);
    for (int i=1; i<=demarcation; i++) {
        if (i!=1 && number % i == 0) {
            return 0;
        }
    }
    return 1;
}
