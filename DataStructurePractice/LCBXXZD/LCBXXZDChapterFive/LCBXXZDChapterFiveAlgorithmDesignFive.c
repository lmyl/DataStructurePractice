//
//  LCBXXZDChapterFiveAlgorithmDesignFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/1.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterFiveAlgorithmDesignFive.h"

#define MaxSize 500

/*
 有以下递归计算公式：
 C(n,0) = 1 n >= 0
 C(n,n) = 1 n>= 0
 C(n,m) = C(n-1,m) + C(n-1,m-1) n>m ,n>= 0,m>=0
 
 设计一个递归和非递归算法求解C(n,m)
 */

int solvingCombinationNumberByReverse(int number , int index) {
    if (number >= 0 && index == 0) {
        return 1 ;
    }
    if (number >= 0 && index == number) {
        return 1 ;
    }
    if (number > index && index > 0) {
        return solvingCombinationNumberByReverse(number-1, index) + solvingCombinationNumberByReverse(number-1, index-1) ;
    }else{
        printf("输入有误！\n");
        return -1 ;
    }
}

typedef struct {
    int number ;
    int index ;
}Combination;

typedef struct {
    Combination data[MaxSize] ;
    int top ;
}CombinationStack;

int solvingCombinationNumber(int number , int index) {
    CombinationStack stack ;
    stack.top = 0 ;
    Combination element = {number,index} ;
    stack.data[stack.top] = element;
    int value = 0 ;
    while (stack.top != -1) {
        Combination stackTopElement = stack.data[stack.top] ;
        if (stackTopElement.number >= 0 && stackTopElement.index == 0) {
            value ++ ;
            stack.top -- ;
        }else if (stackTopElement.number >= 0 && stackTopElement.index == stackTopElement.number) {
            value ++ ;
            stack.top -- ;
        }else if (stackTopElement.number > stackTopElement.index && stackTopElement.index > 0) {
            Combination elementOne = {stackTopElement.number-1,stackTopElement.index} ;
            Combination elementTwo = {stackTopElement.number-1,stackTopElement.index -1} ;
            stack.data[stack.top] = elementOne;
            stack.top ++ ;
            stack.data[stack.top] = elementTwo;
        }else{
            printf("输入有误！\n");
            return -1 ;
        }
    }
    return value ;
}
