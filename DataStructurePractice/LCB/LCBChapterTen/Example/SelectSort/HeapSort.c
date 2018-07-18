//
//  HeapSort.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "HeapSort.h"

void HeapSortPrivate(SeqList seqlist , int low ,int up) ;

void HeapSort(SeqList seqlist , int elementNumbers) {
    for (int i = elementNumbers /2 - 1; i>=0; i--) {
        HeapSortPrivate(seqlist, i, elementNumbers -1 ) ;
    }
    for (int i = elementNumbers -1 ; i>=1; i--) {
        NodeType temp = seqlist[0] ;
        seqlist[0] = seqlist[i] ;
        seqlist[i] = temp ;
        HeapSortPrivate(seqlist, 0, i-1) ;
    }
}

void HeapSortPrivate(SeqList seqlist , int low ,int up) {
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
