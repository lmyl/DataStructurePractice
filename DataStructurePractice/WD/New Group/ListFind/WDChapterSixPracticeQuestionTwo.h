//
//  WDChapterSixPracticeQuestionTwo.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterSixPracticeQuestionTwo_h
#define WDChapterSixPracticeQuestionTwo_h

#include <stdio.h>
#include "LCBXXZDChapterNineAlgorithmDesignTwo.h"

//若顺序表中各元素的查找概率不等，可用以下策略提高顺序查找的效率，若找到指定的元素，则将该元素与其前驱元素(若存在)交换，使得经常被查找的元素尽量位于表的前端，设计满足如上策略的顺序查找算法
//与 DataStructurePractice/DataStructurePractice/LCBXXZD/LCBXXZDChapterNine/ListFind/LCBXXZDChapterNineAlgorithmDesignTwo.h 相似

int seqSearchOnSpeciallyStrategyByWD(SeqList seqlist , int elementNumber , KeyType value) ;
#endif /* WDChapterSixPracticeQuestionTwo_h */
