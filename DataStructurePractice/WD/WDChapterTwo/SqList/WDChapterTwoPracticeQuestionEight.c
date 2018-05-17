//
//  WDChapterTwoPracticeQuestionEight.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPracticeQuestionEight.h"
#include "LCBXXZDChapterTwoAlgorithmDesignTwo.h"

void exchangeTwoSqListLocation(SqList *list ,int location)  {
    cyclicShiftSqList(list, location);
}
