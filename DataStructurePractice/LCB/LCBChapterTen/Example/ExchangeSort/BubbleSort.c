//
//  BubbleSort.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "BubbleSort.h"

void BubbleSort(SeqList seqlist , int elementNumbers) {
    for (int i = 0; i<elementNumbers - 1; i++) {
        for (int j = elementNumbers - 1; j>i; j--) {
            if (seqlist[j].key < seqlist[j-1].key) {
                NodeType temp = seqlist[j-1] ;
                seqlist[j-1] = seqlist[j] ;
                seqlist[j] = temp ;
            }
        }
    }
}


void BubbleSortFast(SeqList seqlist , int elementNumbers) {
    for (int i = 0; i<elementNumbers - 1; i++) {
        bool exchange = false ;
        for (int j = elementNumbers - 1; j>i; j--) {
            if (seqlist[j].key < seqlist[j-1].key) {
                exchange = true ;
                NodeType temp = seqlist[j-1] ;
                seqlist[j-1] = seqlist[j] ;
                seqlist[j] = temp ;
            }
        }
        if (!exchange) {
            return ;
        }
    }
}
