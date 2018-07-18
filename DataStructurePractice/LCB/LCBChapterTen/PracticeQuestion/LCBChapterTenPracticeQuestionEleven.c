//
//  LCBChapterTenPracticeQuestionEleven.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTenPracticeQuestionEleven.h"

void DoubleBubbleSort(SeqList seqlist , int elementNumbers) {
    int low = 0 ;
    int up = elementNumbers - 1 ;
    while (low < up) {
        bool exchanged = false ;
        for (int i = up; i>low; i--) {
            if (seqlist[i].key < seqlist[i-1].key) {
                exchanged = true ;
                NodeType temp = seqlist[i] ;
                seqlist[i] = seqlist[i-1] ;
                seqlist[i-1] = temp ;
            }
        }
        low ++ ;
        for (int i = low; i<up; i++) {
            if (seqlist[i].key > seqlist[i+1].key) {
                exchanged = true ;
                NodeType temp = seqlist[i] ;
                seqlist[i] = seqlist[i+1] ;
                seqlist[i+1] = temp ;
            }
        }
        up -- ;
        if (!exchanged) {
            return ;
        }
    }
}
