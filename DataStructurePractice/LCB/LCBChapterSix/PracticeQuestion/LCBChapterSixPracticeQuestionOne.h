//
//  LCBChapterSixPracticeQuestionOne.h
//  DataStructurePractice
//
//  Created by ly on 2018/6/4.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterSixPracticeQuestionOne_h
#define LCBChapterSixPracticeQuestionOne_h

#include <stdio.h>
#define Row 20
#define Col 20

//设定二维整数数组B[0,..,m-1,0...n-1]的数据在行、列方向上都按从小到大的顺序排列，且整数变量x中的数据在B中存在，试设计一个算法，找出一对满足B[i][j]=x的i，j值，要求比较次数不超过m+n

void findElementInSortArray(int data[Row][Col] ,int row,int col, int *locationRow,int *locationCol,int element)  ;

#endif /* LCBChapterSixPracticeQuestionOne_h */
