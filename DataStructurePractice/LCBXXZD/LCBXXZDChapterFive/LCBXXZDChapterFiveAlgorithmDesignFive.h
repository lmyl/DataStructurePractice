//
//  LCBXXZDChapterFiveAlgorithmDesignFive.h
//  DataStructurePractice
//
//  Created by ly on 2018/6/1.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterFiveAlgorithmDesignFive_h
#define LCBXXZDChapterFiveAlgorithmDesignFive_h

#include <stdio.h>

/*
 有以下递归计算公式：
 C(n,0) = 1 n >= 0
 C(n,n) = 1 n>= 0
 C(n,m) = C(n-1,m) + C(n-1,m-1) n>m ,n>= 0,m>=0
 
 设计一个递归和非递归算法求解C(n,m)
 */

int solvingCombinationNumberByReverse(int number , int index) ;


int solvingCombinationNumber(int number , int index) ;


#endif /* LCBXXZDChapterFiveAlgorithmDesignFive_h */
