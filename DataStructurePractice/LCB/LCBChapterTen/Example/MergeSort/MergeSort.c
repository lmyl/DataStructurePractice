//
//  MergeSort.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "MergeSort.h"

void MergeSortExective(SeqList seqlist , int low , int segement , int up) ;
void MergesortPrivate(SeqList seqlist , int elementNumber , int stepLength) ;


void MergeSort(SeqList seqlist ,int elementNumbers)  {
    for (int i = 1; i<elementNumbers; i *= 2) {
        MergesortPrivate(seqlist, elementNumbers, i) ;
    }
}


void MergeSortExective(SeqList seqlist , int low , int segement , int up) {
    int i  = low ;
    int j = segement + 1 ;
    NodeType result[up - low + 1] ;
    int count = -1 ;
    while (i <= segement && j <= up) {
        while (i <= segement && seqlist[i].key <= seqlist[j].key) {
            count ++ ;
            result[count] = seqlist[i] ;
            i ++ ;
        }
        if (i > segement) {
            break ;
        }
        while (j <= up && seqlist[j].key < seqlist[i].key) {
            count ++ ;
            result[count] = seqlist[j] ;
            j ++ ;
        }
        if (j > up) {
            break ;
        }
    }
    while (i <= segement) {
        count ++ ;
        result[count] = seqlist[i] ;
        i ++ ;
    }
    while (j <= up) {
        count ++ ;
        result[count] = seqlist[j] ;
        j ++ ;
    }
    for (int i = 0; i<up - low + 1; i++) {
        seqlist[low + i ] = result[i] ;
    }
}

void MergesortPrivate(SeqList seqlist , int elementNumber , int stepLength) {
    int i = 0 ;
    for ( ; i + 2 *stepLength - 1 < elementNumber ; i += 2 * stepLength) {
        MergeSortExective(seqlist, i, i+stepLength-1, i + 2*stepLength - 1) ;
    }
    if (i + stepLength - 1 <elementNumber) {
        MergeSortExective(seqlist, i, i+stepLength -1, elementNumber -1) ;
    }
}
