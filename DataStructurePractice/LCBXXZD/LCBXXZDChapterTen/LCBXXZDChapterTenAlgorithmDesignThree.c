//
//  LCBXXZDChapterTenAlgorithmDesignThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTenAlgorithmDesignThree.h"


void oddEvenSort(SeqList seqlist , int  elementNumber) {
    while (true) {
        bool exchanged = false ;
        for (int i = 1; i+1 <elementNumber; i += 2) {
            if (seqlist[i].key > seqlist[i+1].key ) {
                exchanged = true ;
                NodeType temp  = seqlist[i+1] ;
                seqlist[i+1] = seqlist[i] ;
                seqlist[i] = temp ;
            }
        }
        for (int i = 0; i+1 <elementNumber; i += 2) {
            if (seqlist[i].key > seqlist[i+1].key ) {
                exchanged = true ;
                NodeType temp  = seqlist[i+1] ;
                seqlist[i+1] = seqlist[i] ;
                seqlist[i] = temp ;
            }
        }
        if (!exchanged) {
            break ;
        }
    }
}
