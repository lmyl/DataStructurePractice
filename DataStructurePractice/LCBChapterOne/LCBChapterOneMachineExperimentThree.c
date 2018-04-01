//
//  LCBChapterOneMachineExperimentThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/29.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterOneMachineExperimentThree.h"

//判断一个字符串是否为回文字符串，并分析时间复杂度
void judgmentStringOfPalindromes(char input[]) {
    int length = 0;
    for (; input[length] != '\0'; length++) {
    }
    int countEnd = length-1;
    for (int countStart = 0; countStart<=countEnd; countStart++) {
        if (input[countStart] != input[countEnd]) {
            printf("不是回文字符串\n");
            return ;
        }
        countEnd--;
    }
    printf("是回文字符串\n");
}
//时间复杂度为O(n),n为字符串长度
