//
//  WDChapterSevenPracticeQuestionFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterSevenPracticeQuestionFour.h"

void findRankValueSmallElementPrivate(SeqList seqlist , int low ,int up) ;

NodeType findRankValueSmallElement(SeqList seqlist ,int elementNumber , int rank)  {
    for (int i = elementNumber /2 - 1 ; i>= 0; i--) {
        findRankValueSmallElementPrivate(seqlist, i, elementNumber-1) ;
    }
    for (int i = elementNumber-1; i>=rank-1; i--) {
        NodeType temp = seqlist[0] ;
        seqlist[0] = seqlist[i] ;
        seqlist[i] = temp ;
        findRankValueSmallElementPrivate(seqlist, 0, i-1) ;
    }
    return seqlist[rank-1] ;
}

void findRankValueSmallElementPrivate(SeqList seqlist , int low ,int up) {
    int i = low ;
    int j = 2 * i + 1 ;
    NodeType temp = seqlist[i];
    while (j <= up) {
        if (j<up && seqlist[j].key < seqlist[j+1].key) {
            j ++ ;
        }
        if (temp.key < seqlist[j].key) {
            seqlist[i] = seqlist[j] ;
            i = j ;
            j = 2 *i +1 ;
        }else{
            break ;
        }
    }
    seqlist[i] = temp ;
}
