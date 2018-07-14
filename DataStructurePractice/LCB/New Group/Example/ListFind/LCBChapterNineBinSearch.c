//
//  LCBChapterNineBinSearch.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterNineBinSearch.h"

int binSearch(SeqList seqlist , int elementNumber , int value ) {
    int low = 0 ;
    int up = elementNumber - 1 ;
    while (low <= up) {
        int middle =  (low + up) / 2 ;
        if (seqlist[middle].key == value) {
            return middle + 1 ;
        }else if (seqlist[middle].key < value) {
            low = middle + 1 ;
        }else {
            up = middle - 1 ;
        }
    }
    return  0 ;
}
