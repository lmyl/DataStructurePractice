//
//  WDChapterSevenPracticeQuestionFive.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterSevenPracticeQuestionFive_h
#define WDChapterSevenPracticeQuestionFive_h

#include <stdio.h>
#include "LCBChapterNineListFind.h"

//已知由n(n>=2)个正整数构成的集合A[0...n-1]，将其划分为两个不相交的子集A1和A2，元素个数分别是n1和n2，A1和A2中元素之和分别为S1和S2，设计一个尽可能高效的算法，满足|n1-n2|最小且|S1-S2|最大

//从小到大排序 当n1 = [n/2] 时 满足
//时间复杂度O(n)
//空间复杂度O(1)

void slovingPracticeQuestionFiveInWD(SeqList seqlist , int elementNumber ,SeqList setOne , int *elementNumberOne , SeqList setTwo ,int *elementNumberTwo) ;

#endif /* WDChapterSevenPracticeQuestionFive_h */
