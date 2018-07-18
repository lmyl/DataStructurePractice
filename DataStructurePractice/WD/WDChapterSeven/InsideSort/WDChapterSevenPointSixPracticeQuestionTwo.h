//
//  WDChapterSevenPointSixPracticeQuestionTwo.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterSevenPointSixPracticeQuestionTwo_h
#define WDChapterSevenPointSixPracticeQuestionTwo_h

#include <stdio.h>
#include "LCBChapterNineListFind.h"

//设顺序表用数组A[]表示，表中元素存储在数组下标1～m+n的范围内，前m个元素递增有序，后n个元素递增有序，设有一个算法，使得整个顺序表有序
//可以利用 DataStructurePractice/DataStructurePractice/LCB/LCBChapterTen/PracticeQuestion/LCBChapterTenPracticeQuestionTwo.h 的结论

//空间复杂度O(m+n)
//时间复杂度O(m+n)

void mergeSortOneArray(SeqList seqlist , int frontElementNumber , int lastElementNumber) ;

#endif /* WDChapterSevenPointSixPracticeQuestionTwo_h */
