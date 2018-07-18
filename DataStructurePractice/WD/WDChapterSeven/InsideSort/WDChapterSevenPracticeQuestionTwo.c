//
//  WDChapterSevenPracticeQuestionTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterSevenPracticeQuestionTwo.h"

void adjustElementOddFrontEven(SeqList seqlist , int elementNumber) {
    int i = 1 ;
    int j = elementNumber-1 ;
    if (j % 2 == 1) {
        j -- ;
    }
    while (i < j) {
        NodeType temp = seqlist[i] ;
        seqlist[i] = seqlist[j] ;
        seqlist[j] = temp ;
        i += 2 ;
        j -= 2 ;
    }
}
