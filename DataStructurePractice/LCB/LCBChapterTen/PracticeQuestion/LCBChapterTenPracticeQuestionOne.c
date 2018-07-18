//
//  LCBChapterTenPracticeQuestionOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTenPracticeQuestionOne.h"

NodeType findLocationInSortListByQuickPrivate(SeqList seqlist , int low ,int up,int location);

NodeType findLocationInSortListByQuick(SeqList seqlist , int elementNumbers , int location) {
    return findLocationInSortListByQuickPrivate(seqlist, 0, elementNumbers-1, location) ;
}


NodeType findLocationInSortListByQuickPrivate(SeqList seqlist , int low ,int up,int location) {
    if (low > up) {
        NodeType result ;
        result.key  = -128 ;
        return result;
    }
    int middle = (low + up) / 2 ;
    if (middle != low) {
        NodeType change = seqlist[middle] ;
        seqlist[middle] = seqlist[low] ;
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
    if (low == location) {
        return seqlist[low] ;
    }else if (low < location) {
        return findLocationInSortListByQuickPrivate(seqlist, low+1, baseUp,location) ;
    }else{
        return findLocationInSortListByQuickPrivate(seqlist, baseLow, low-1,location) ;
    }
}
