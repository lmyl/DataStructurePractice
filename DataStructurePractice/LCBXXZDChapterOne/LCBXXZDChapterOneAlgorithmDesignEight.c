//
//  LCBXXZDChapterOneAlgorithmDesignEight.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/11.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterOneAlgorithmDesignEight.h"

//尽可能高效的算法求一个整数数组中的最大元素和次大元素。并分析该算法的最好和最坏情况下的元素比较次数和时间复杂度

void findMaxAndSecondMax(int numbers[],int count,int *maxFirst, int *maxSecond) {
    int first,second ;
    first = second = numbers[0] ;
    for (int i = 1; i<count; i++) {
        if (first <= numbers[i]) {
            second = first ;
            first = numbers[i] ;
        }else if (second < numbers[i]) {
            second = numbers[i] ;
        }
    }
    *maxFirst = first ;
    *maxSecond = second ;
}

//最好  n-1
//最坏  2n-2
//时间复杂度 O(n)
