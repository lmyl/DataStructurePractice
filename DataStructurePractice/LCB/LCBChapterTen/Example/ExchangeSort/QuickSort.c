//
//  QuickSort.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "QuickSort.h"

void QuickSortPrivate(SeqList seqlist , int low ,int up) ;
void QuickSortBetterPrivate(SeqList seqlist , int low ,int up) ;

void QuickSort(SeqList seqlist , int elementNumbers) {
    QuickSortPrivate(seqlist, 0, elementNumbers -1) ;
}

void QuickSortPrivate(SeqList seqlist , int low ,int up) {
    if (low >= up) {
        return ;
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
    QuickSortPrivate(seqlist, low+1, baseUp) ;
    QuickSortPrivate(seqlist, baseLow, low-1) ;
}

void QuickSortBetter(SeqList seqlist , int elementNumbers) {
    QuickSortBetterPrivate(seqlist, 0, elementNumbers - 1);
}

void QuickSortBetterPrivate(SeqList seqlist , int low ,int up) {
    if (low >= up) {
        return ;
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
    QuickSortBetterPrivate(seqlist, low+1, baseUp) ;
    QuickSortBetterPrivate(seqlist, baseLow, low-1) ;
}
