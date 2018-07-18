//
//  LCBXXZDChapterTenAlgorithmDesignEleven.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTenAlgorithmDesignEleven.h"

void countSort(SeqList seqlist , int elementNumber ,SeqList result) {
    for (int i = 0; i<elementNumber; i++) {
        int count = 0 ;
        for (int j = 0; j<elementNumber; j++) {
            if (seqlist[j].key < seqlist[i].key) {
                count ++ ;
            }
        }
        result[count] = seqlist[i] ;
    }
}
