//
//  DirectSelectSort.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "DirectSelectSort.h"

void DirectSelectSort(SeqList seqlist ,int elementNumbers) {
    for (int i = 0; i<elementNumbers-1; i++) {
        int minLocation = i ;
        for (int j = i; j<elementNumbers; j++) {
            if (seqlist[j].key < seqlist[minLocation].key) {
                minLocation = j ;
            }
        }
        NodeType temp = seqlist[minLocation] ;
        seqlist[minLocation] = seqlist[i] ;
        seqlist[i] = temp ;
    }
}
