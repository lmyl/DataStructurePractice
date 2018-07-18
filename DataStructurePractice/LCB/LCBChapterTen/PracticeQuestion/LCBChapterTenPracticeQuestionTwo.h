//
//  LCBChapterTenPracticeQuestionTwo.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTenPracticeQuestionTwo_h
#define LCBChapterTenPracticeQuestionTwo_h

#include <stdio.h>
#include "LCBChapterNineListFind.h"

//将两个有序表归并为一个有序表

typedef struct {
    SeqList seqlist ;
    int length ;
}LCBChapterTenPracticeQuestionTwo;

LCBChapterTenPracticeQuestionTwo mergeTwoSortList(SeqList seqlistOne , int elementNumberOne , SeqList seqlistTwo , int elementNumberTwo) ;

#endif /* LCBChapterTenPracticeQuestionTwo_h */
