//
//  InsertSort.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "DirectInsertSort.h"

void DirectInsertSort(SeqList seqlist , int elementNumbers) {
    for (int i  = 1; i<elementNumbers; i++) {
        NodeType temp = seqlist[i] ;
        int j = i-1 ;
        while (j>= 0 && temp.key < seqlist[j].key) {
            seqlist[j+1] = seqlist[j] ;
            j -- ;
        }
        j ++ ;
        seqlist[j] = temp ;
    }
}


