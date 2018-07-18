//
//  WDChapterSevenPointSixPracticeQuestionTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterSevenPointSixPracticeQuestionTwo.h"

void mergeSortOneArray(SeqList seqlist , int frontElementNumber , int lastElementNumber) {
    SeqList result ;
    int i = 0 ;
    int j = frontElementNumber ;
    int count = -1 ;
    while (i < frontElementNumber && j < lastElementNumber + frontElementNumber ) {
        while (i <frontElementNumber && seqlist[i].key <= seqlist[j].key) {
            count ++ ;
            result[count] = seqlist[i] ;
            i ++ ;
        }
        if (i == frontElementNumber) {
            break ;
        }
        while (j<lastElementNumber + frontElementNumber && seqlist[j].key < seqlist[i].key) {
            count ++ ;
            result[count] = seqlist[j] ;
            j ++ ;
        }
        if (j == lastElementNumber + frontElementNumber) {
            break ;
        }
    }
    while (i<frontElementNumber) {
        count ++ ;
        result[count] = seqlist[i] ;
        i ++ ;
    }
    while (j<lastElementNumber + frontElementNumber) {
        count ++ ;
        result[count] = seqlist[j] ;
        j ++ ;
    }
    for (int k = 0 ; k<=count; k++) {
        seqlist[k] = result[k] ;
    }
}


