//
//  LCBXXZDChapterTenAlgorithmDesignTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTenAlgorithmDesignTwo.h"

void BinaryInsertSortSepcially(SeqList seqlist,int elementNumbers) {
    for (int i = 1; i<elementNumbers; i++) {
        int up = i - 1 ;
        int low = 0 ;
        NodeType node = seqlist[i] ;
        while (low <= up) {
            int middle = (up + low) / 2 ;
            if (seqlist[middle].key < node.key) {
                up = middle - 1 ;
            }else{
                low = middle + 1 ;
            }
        }
        for (int j = i-1; j>=low; j--) {
            seqlist[j+1] = seqlist[j] ;
        }
        seqlist[low] = node ;
    }
}
