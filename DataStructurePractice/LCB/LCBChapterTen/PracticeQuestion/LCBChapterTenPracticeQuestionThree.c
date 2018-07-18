//
//  LCBChapterTenPracticeQuestionThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTenPracticeQuestionThree.h"

void selectionFrontElementByDirectSelectSort(SeqList seqlist , int elementNumber, int front)  {
    for (int i = 0; i<front; i++) {
        int location = i ;
        for (int j = i; j<elementNumber; j++) {
            if (seqlist[location].key < seqlist[j].key) {
                location = j ;
            }
        }
        NodeType temp = seqlist[i] ;
        seqlist[i] = seqlist[location] ;
        seqlist[location] = temp ;
    }
    for (int i = 0; i<front; i++) {
        printf("%d " ,seqlist[i].key) ;
    }
    printf("\n") ;
}
