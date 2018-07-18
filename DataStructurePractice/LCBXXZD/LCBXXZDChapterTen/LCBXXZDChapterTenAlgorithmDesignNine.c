//
//  LCBXXZDChapterTenAlgorithmDesignNine.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTenAlgorithmDesignNine.h"

void deleteBigRootHeap(SeqList seqlist ,int elementNumber)  {
    seqlist[0] = seqlist[elementNumber - 1] ;
    int i = 0 ;
    int j = 2 * i + 1 ;
    NodeType temp = seqlist[0] ;
    while (j <= elementNumber - 2) {
        if (j < elementNumber - 2 && seqlist[j].key < seqlist[j+1].key) {
            j ++ ;
        }
        if (seqlist[j].key > temp.key) {
            seqlist[i] = seqlist[j] ;
            i = j ;
            j = 2 * i + 1 ;
        }else{
            break ;
        }
    }
    seqlist[i] = temp ;
}
