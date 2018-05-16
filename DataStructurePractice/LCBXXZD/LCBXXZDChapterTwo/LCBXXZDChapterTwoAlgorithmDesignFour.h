//
//  LCBXXZDChapterTwoAlgorithmDesignFour.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterTwoAlgorithmDesignFour_h
#define LCBXXZDChapterTwoAlgorithmDesignFour_h

#include <stdio.h>
#include "LCBChapterTwoSqList.h"

//若一个线性表采用顺序表L存储，其中所有元素为整数，设计一个时间和空间两方面尽可能高效的算法将所有元素划分成两部分，其中前半部分的每个元素均小于等于整数k1，后半部分每个元素都大于等于k2，如何k1>k2,算法返回false，否则返回true
bool segmentationSqListDesignToThreePart(SqList *list,int firstElement,int secondElement);

#endif /* LCBXXZDChapterTwoAlgorithmDesignFour_h */
