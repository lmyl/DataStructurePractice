//
//  LCBXXZDChapterTenAlgorithmDesignFour.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterTenAlgorithmDesignFour_h
#define LCBXXZDChapterTenAlgorithmDesignFour_h

#include <stdio.h>
#include "LCBChapterNineListFind.h"

//设计快排的非递归算法

typedef struct {
    int start ;
    int end ;
}QuickSortNoRescuriveRange;

void quickSortNoRescurive(SeqList seqlist , int elementNumber) ;

#endif /* LCBXXZDChapterTenAlgorithmDesignFour_h */
