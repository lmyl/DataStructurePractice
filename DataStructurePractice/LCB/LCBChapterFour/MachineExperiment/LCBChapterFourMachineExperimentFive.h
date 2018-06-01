//
//  LCBChapterFourMachineExperimentFive.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/30.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterFourMachineExperimentFive_h
#define LCBChapterFourMachineExperimentFive_h

#include <stdio.h>
#include "LCBChapterFourSqString.h"

//求用户输入串S中出现的第一个最长重复子串的下标和长度

void solvingTheFirstTheMostLengthSubString(SqString input,int *location ,int *length)  ;


//也可以从匹配i开头和与i+1开头的子串
void solvingTheFirstTheMostLengthSubStringAnoterSolve(SqString input,int *location ,int *length)  ;

#endif /* LCBChapterFourMachineExperimentFive_h */
