//
//  LCBXXZDChapterTwoAlgorithmDesignTwo.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterTwoAlgorithmDesignTwo_h
#define LCBXXZDChapterTwoAlgorithmDesignTwo_h

#include <stdio.h>
#include "LCBChapterTwoSqList.h"

//设计一个时间和空间两方面尽可能高效的算法，将顺序表L中存放的整数序列循环左移p(0<p<n，n为L中元素个数)个位置
//将前p个元素反转，后n-p个元素反转，再将全部n个元素反转

void cyclicShiftSqList(SqList *list,int location);
#endif /* LCBXXZDChapterTwoAlgorithmDesignTwo_h */
