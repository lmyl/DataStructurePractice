//
//  WDChapterSevenPracticeQuestionSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterSevenPracticeQuestionSix.h"

void dutchFlagQuestion(SeqList seqlist , int elementNumber)  {
    int flag = 1 ;
    int low = 0 ;
    int middle = 0 ;
    int up = elementNumber - 1 ;
    while (middle <= up) {
        if (seqlist[middle].key < flag) {
            NodeType temp = seqlist[low] ;
            seqlist[low] = seqlist[middle] ;
            seqlist[middle] = temp ;
            middle ++ ;
            low ++ ;
        }else if (seqlist[middle].key == flag) {
            middle ++ ;
        }else{
            NodeType temp = seqlist[up] ;
            seqlist[up] = seqlist[middle] ;
            seqlist[middle] = temp ;
            up -- ;
        }
    }
}
