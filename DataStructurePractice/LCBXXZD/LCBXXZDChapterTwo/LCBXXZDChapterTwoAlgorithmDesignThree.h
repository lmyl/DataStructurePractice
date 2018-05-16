//
//  LCBXXZDChapterTwoAlgorithmDesignThree.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterTwoAlgorithmDesignThree_h
#define LCBXXZDChapterTwoAlgorithmDesignThree_h

#include <stdio.h>
#include "LCBChapterTwoSqList.h"

//若一个线性表采用顺序表L存储，其中所有元素为整数，每个元素的值只能取0，1，2。设计一个算法，将所有元素按0，1，2的顺序排列
//与 DataStructurePractice/LCB/LCBChapterTwo/PracticeQuestion/LCBChapterTwoPracticeQuestionThree 性质相同使用三切分快排

void  segmentationOneElementInSqListDesign(SqList *list);

#endif /* LCBXXZDChapterTwoAlgorithmDesignThree_h */
