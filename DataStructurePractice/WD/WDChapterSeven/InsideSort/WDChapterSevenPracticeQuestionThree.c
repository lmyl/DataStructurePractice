//
//  WDChapterSevenPracticeQuestionThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterSevenPracticeQuestionThree.h"

void quickSortBestPrivate(SeqList seqlist , int low ,int up) ;

void quickSortBest(SeqList seqlist ,int elementNumber) {
    quickSortBestPrivate(seqlist, 0, elementNumber - 1) ;
}

void quickSortBestPrivate(SeqList seqlist , int low ,int up) {
    if (low >= up) {
        return ;
    }
    int random = rand() % (up - low + 1) + low ;
    if (random != low) {
        NodeType change = seqlist[random] ;
        seqlist[random] = seqlist[low] ;
        seqlist[low] = change ;
    }
    NodeType temp  = seqlist[low] ;
    int baseLow = low ;
    int baseUp = up ;
    while (low < up) {
        while (up > low && seqlist[up].key >= temp.key) {
            up -- ;
        }
        if (up == low) {
            break;
        }
        seqlist[low] = seqlist[up] ;
        while (low < up && seqlist[low].key <= temp.key) {
            low ++ ;
        }
        if (up == low) {
            break ;
        }
        seqlist[up] = seqlist[low] ;
    }
    seqlist[low] = temp ;
    quickSortBestPrivate(seqlist, low+1, baseUp) ;
    quickSortBestPrivate(seqlist, baseLow, low-1) ;
}
