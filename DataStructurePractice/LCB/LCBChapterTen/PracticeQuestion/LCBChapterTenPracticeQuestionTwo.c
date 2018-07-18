//
//  LCBChapterTenPracticeQuestionTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTenPracticeQuestionTwo.h"

LCBChapterTenPracticeQuestionTwo mergeTwoSortList(SeqList seqlistOne , int elementNumberOne , SeqList seqlistTwo , int elementNumberTwo) {
    LCBChapterTenPracticeQuestionTwo result ;
    result.length = elementNumberOne + elementNumberTwo ;
    int i = 0 ;
    int j = 0 ;
    int count = -1 ;
    while (i < elementNumberOne && j < elementNumberTwo) {
        while (i <elementNumberTwo && seqlistOne[i].key <= seqlistTwo[j].key) {
            count ++ ;
            result.seqlist[count] = seqlistOne[i] ;
            i ++ ;
        }
        if (i == elementNumberOne) {
            break ;
        }
        while (j<elementNumberTwo && seqlistTwo[j].key < seqlistOne[i].key) {
            count ++ ;
            result.seqlist[count] = seqlistTwo[j] ;
            j ++ ;
        }
        if (j == elementNumberTwo) {
            break ;
        }
    }
    while (i<elementNumberOne) {
        count ++ ;
        result.seqlist[count] = seqlistOne[i] ;
        i ++ ;
    }
    while (j<elementNumberTwo) {
        count ++ ;
        result.seqlist[count] = seqlistTwo[j] ;
        j ++ ;
    }
    return result ;
}
