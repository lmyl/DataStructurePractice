//
//  WDChapterTwoPracticeQuestionTwelve.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterTwoPracticeQuestionTwelve_h
#define WDChapterTwoPracticeQuestionTwelve_h

#include <stdio.h>
#include "LCBChapterTwoSqList.h"

//2013真题
//设计一个高效的算法，找出A数组的主元素，主元素出现的次数大于数组元素个数的一半。即>n/2，若有则输出主元素，若无则输出-1
//可以堆排序之后进行操作时间复杂度O(nlog2n),空间复杂度O(1)

int findOutMainElement(SqList *list) ;


//最好的解
//时间复杂度O(n),空间复杂度为O(1)
//依次扫描所给数组中的每个整数，将第一个遇到的整数Num保存到C中，记录Num出现的次数为1，若下一个整数仍为Num，则计数加1，否则减1，当计数器减到0时，将遇到的下一个整数保存到C，计数重新记为1，开始新一轮的计数，直到所有元素扫描完，然后判断C中的是否为主元素
int findOutMainElementTheBestSlove(SqList *list) ;

#endif /* WDChapterTwoPracticeQuestionTwelve_h */
