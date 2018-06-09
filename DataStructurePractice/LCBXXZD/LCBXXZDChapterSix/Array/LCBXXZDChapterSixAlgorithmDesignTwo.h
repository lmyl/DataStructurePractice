//
//  LCBXXZDChapterSixAlgorithmDesignTwo.h
//  DataStructurePractice
//
//  Created by ly on 2018/6/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterSixAlgorithmDesignTwo_h
#define LCBXXZDChapterSixAlgorithmDesignTwo_h

#include <stdio.h>
#include <stdbool.h>

#define Row 50
#define Col 50

//设计一个算法，求一个m行n列的二维数组a的下三角部分的所有元素之和，当m不等于n时返回false，否则返回true

bool sumLowerTriangleInArray(int data[Row][Col] ,int row, int col,int *result) ;

#endif /* LCBXXZDChapterSixAlgorithmDesignTwo_h */
