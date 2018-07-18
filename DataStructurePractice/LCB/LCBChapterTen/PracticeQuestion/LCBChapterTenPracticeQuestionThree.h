//
//  LCBChapterTenPracticeQuestionThree.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTenPracticeQuestionThree_h
#define LCBChapterTenPracticeQuestionThree_h

#include <stdio.h>
#include "LCBChapterNineListFind.h"

//假设有关键字不同的n个元素存于顺序表中，要求不经过排序而从中选出按从大到小排列的前m(m<<n)个元素，采用直接选择排序算法实现此过程

void selectionFrontElementByDirectSelectSort(SeqList seqlist , int elementNumber, int front) ;

#endif /* LCBChapterTenPracticeQuestionThree_h */
