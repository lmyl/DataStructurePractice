//
//  LCBChapterTwoPracticeQuestionThree.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTwoPracticeQuestionThree_h
#define LCBChapterTwoPracticeQuestionThree_h

#include <stdio.h>
#include "LCBChapterTwoSqList.h"

//若一个线性表L采用顺序存储结构存储，其中所有元素为整数，设计一个算法，将所有小于0的元素移动到大于0的元素的前面，要求算法时间复杂度为O(n)，空间复杂度为O(1)
//与 DataStructurePractice/LCB/LCBChapterTwo/Example/Sqlist/LCBChapterTwoExampleFour 性质相同

void  segmentationTheFirstElementInSqList(SqList *list);

#endif /* LCBChapterTwoPracticeQuestionThree_h */
