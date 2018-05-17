//
//  WDChapterTwoPracticeQuestionFive.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterTwoPracticeQuestionFive_h
#define WDChapterTwoPracticeQuestionFive_h

#include <stdio.h>
#include "LCBChapterTwoSqList.h"

//从顺序表中删除其值在给定值s和t之间(要求s<t)的所有元素，如何s或t不合理或者顺序表为空，则显示出错信息并退出运行
// 与 DataStructurePractice/DataStructurePractice/LCB/LCBChapterTwo/PracticeQuestion/LCBChapterTwoPracticeQuestionTwo 相同

void deletElementRangeInSqListWDDesign(SqList *list,int min,int max) ;

#endif /* WDChapterTwoPracticeQuestionFive_h */
