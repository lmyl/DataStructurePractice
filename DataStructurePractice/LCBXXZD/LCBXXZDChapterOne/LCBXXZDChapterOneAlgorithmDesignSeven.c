//
//  LCBXXZDChapterOneAlgorithmDesignSeven.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/11.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterOneAlgorithmDesignSeven.h"

//设计一个尽可能高效的算法，在长度为n的一维实型数组a[0..n-1]中查找最大的元素max和最小的元素min，并分析算法的最好和最坏和平均情况下的元素比较次数

void findMaxAndMin(int numbers[],int count,int *max,int *min) {
    int maxIn,minIn ;
    maxIn = minIn = numbers[0];
    for (int i = 1; i<count; i++) {
        if (minIn > numbers[i]) {
            minIn = numbers[i] ;
        }else if (maxIn < numbers[i]) {
            maxIn = numbers[i] ;
        }
    }
    *max = maxIn;
    *min = minIn ;
}

//最好 n-1 次
//最坏 2n-2 次
//平均  3(n-1)/2 次
