//
//  WDChapterTwoPracticeQuestionTen.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterTwoPracticeQuestionTen_h
#define WDChapterTwoPracticeQuestionTen_h

#include <stdio.h>
#include "LCBChapterTwoSqList.h"

//2010真题
//设计一个时间和空间两方面尽可能高效的算法，将顺序表L中存放的整数序列循环左移p(0<p<n，n为L中元素个数)个位置,时间复杂度为O(n),空间复杂度为O(1)
//与 // 与DataStructurePractice/DataStructurePractice/LCBXXZD/LCBXXZDChapterTwo/SqList/LCBXXZDChapterTwoAlgorithmDesignTwo 相似

void cyclicShiftSqListWDDesign(SqList *list,int location) ;

#endif /* WDChapterTwoPracticeQuestionTen_h */
