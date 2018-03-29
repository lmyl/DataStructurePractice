//
//  LCBChapterOneMachineExperimentTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/29.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterOneMachineExperimentTwo.h"

//计算输入任意的正整数的个位数字之和，并分析算法的时间复杂度
void countSum(int number) {
    int sum = 0;
    int flag = number;
    do {
        sum += (flag % 10);
        flag = flag/10;
    } while (flag != 0);
    printf("%d\n",sum);
}

//时间复杂度为O(n的位数)
