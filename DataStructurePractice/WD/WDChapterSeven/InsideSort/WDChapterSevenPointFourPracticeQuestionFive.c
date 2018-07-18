//
//  WDChapterSevenPointFourPracticeQuestionFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterSevenPointFourPracticeQuestionFive.h"

bool isSmallRootHeapPrivate(SeqList seqlist , int now,int elementNumber)  ;

bool isSmallRootHeap(SeqList seqlist , int elementNumber) {
    return isSmallRootHeapPrivate(seqlist, 0, elementNumber) ;
    
}



bool isSmallRootHeapPrivate(SeqList seqlist , int now,int elementNumber)  {
    int down = 2 * now + 1 ;
    if (down < elementNumber) {
        if (down + 1 < elementNumber) {
            if (seqlist[now].key <= seqlist[down].key && seqlist[now].key <= seqlist[down+1].key) {
                return isSmallRootHeapPrivate(seqlist, down, elementNumber) && isSmallRootHeapPrivate(seqlist, down+1, elementNumber) ;
            }else{
                return false ;
            }
        }else{
            if (seqlist[now].key <= seqlist[down].key) {
                return isSmallRootHeapPrivate(seqlist, down, elementNumber) ;
            }else{
                return false ;
            }
        }
    }else{
        return true ;
    }
}
