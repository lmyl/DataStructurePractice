//
//  LCBXXZDChapterFiveAlgorithmDesignFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/1.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterFiveAlgorithmDesignFour.h"

int solvingMonkeyEatingPeachProblemByReverse(int remaining,int monkeyNumbers , int nowMonkey) ;

int solvingMonkeyEatingPeachProblem(int monkeyNumbers) {
    int remaining = 1 ;
    int numbers = solvingMonkeyEatingPeachProblemByReverse(remaining, monkeyNumbers, monkeyNumbers) ;
    while (numbers == -1) {
        remaining ++ ;
        numbers = solvingMonkeyEatingPeachProblemByReverse(remaining, monkeyNumbers, monkeyNumbers) ;
    }
    return numbers ;
}


int solvingMonkeyEatingPeachProblemByReverse(int remaining,int monkeyNumbers , int nowMonkey) {
    if (nowMonkey == 0) {
        return remaining ;
    }
    int numbers = solvingMonkeyEatingPeachProblemByReverse(remaining,monkeyNumbers, nowMonkey - 1) ;
    if (numbers % (monkeyNumbers - 1) != 0 || numbers == -1) {
        return -1 ;
    }
    return monkeyNumbers * numbers / (monkeyNumbers - 1) + 1 ;
}
