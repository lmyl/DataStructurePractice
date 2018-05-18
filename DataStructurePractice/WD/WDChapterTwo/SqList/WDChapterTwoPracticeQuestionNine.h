//
//  WDChapterTwoPracticeQuestionNine.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterTwoPracticeQuestionNine_h
#define WDChapterTwoPracticeQuestionNine_h

#include <stdio.h>
#include "LCBChapterTwoSqList.h"

//线性表中元素递增有序且按顺序存储于计算机内，要求设计一个算法完成用最少的时间在表中查找数值为x的元素，若找到将其与后续元素位置相交换，若找不到将其插入表中并使表中元素仍递增有序
//此操作会破坏有序表，因此不能使用有序表逻辑结构

void locateSqElementAndAdjust(SqList *list,int element);


//最优解，这折半查找
void locateSqElementAndAdjustTheBestSlove(SqList *list,int element);

#endif /* WDChapterTwoPracticeQuestionNine_h */
