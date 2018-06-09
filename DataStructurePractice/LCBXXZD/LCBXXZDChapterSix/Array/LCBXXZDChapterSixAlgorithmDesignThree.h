//
//  LCBXXZDChapterSixAlgorithmDesignThree.h
//  DataStructurePractice
//
//  Created by ly on 2018/6/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterSixAlgorithmDesignThree_h
#define LCBXXZDChapterSixAlgorithmDesignThree_h

#include <stdio.h>

#define Row 50
#define Col 50

//假设有一个m行n列的二维数组a，其中所有元素为整数，其大量的运算是求左上角为a[i,j]、右下角为a[s,t](i<s,j<t)的子矩阵的所有元素之和，请设计一个时间复杂度为O(1)的算法
//求给定矩阵中的所有元素之和


//预处理数组，使得数组中的每一个元素表示与a[0,0]围成的子矩阵的和
//O(m*n)
void pretreatment(int input[Row][Col] , int output[Row][Col] , int row ,int col) ;


//通过加上两个矩阵的和减去两个矩阵的和实现特定子矩阵的计算
//O(1)
int sumSubmatrix(int input[Row][Col] , int row , int col ,int locationLowRow , int locationLowCol , int locationUpRow , int locationUpCol ) ;

#endif /* LCBXXZDChapterSixAlgorithmDesignThree_h */
