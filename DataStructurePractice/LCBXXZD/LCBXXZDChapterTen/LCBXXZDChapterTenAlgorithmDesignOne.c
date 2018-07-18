//
//  LCBXXZDChapterTenAlgorithmDesignOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTenAlgorithmDesignOne.h"

void createdIndexByDirectInsertSort(SeqList seqlist , int elementNumbers , IndexNodeLCBXXZD index[MAXL]) {
    for (int i = 0; i<elementNumbers; i++) {
        index[i].key = seqlist[i].key ;
        index[i].location = i ;
    }
    for (int i = 1; i<elementNumbers; i++) {
        IndexNodeLCBXXZD temp = index[i] ;
        int j = i - 1 ;
        while (j >= 0 && index[j].key > temp.key) {
            index[j+1] = index[j] ;
            j -- ;
        }
        index[j+1] = temp ;
    }
}
