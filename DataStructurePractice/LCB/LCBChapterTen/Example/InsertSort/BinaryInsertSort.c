//
//  BinaryInsertSort.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "BinaryInsertSort.h"

void BinaryInsertSort(SeqList seqlist,int elementNumbers) {
    for (int i = 1; i<elementNumbers; i++) {
        int low = 0 ;
        int up = i - 1 ;
        while (low <= up) {
            int middle = (low + up) /2;
            if (seqlist[middle].key < seqlist[i].key) {
                low = middle + 1 ;
            }else{
                up = middle - 1 ;
            }
        }
        NodeType temp = seqlist[i] ;
        for (int j = i-1; j>=low; j--) {
            seqlist[j+1] = seqlist[j] ;
        }
        seqlist[low] = temp ;
    }
}
