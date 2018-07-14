//
//  LCBChapterNineIndexSearch.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterNineIndexSearch.h"

int indexSearch(IDX indexList ,int indexLength,SeqList seqList, int elementNumbers , int value) {
    int resultArea = 0 ;
    int low = 0 ;
    int up = indexLength - 1;
    while (low <= up) {
        int middle = (low + up) / 2 ;
        if (indexList[middle].key < elementNumbers) {
            low = middle + 1 ;
        }else{
            up = middle - 1 ;
        }
    }
    resultArea = low ;
    if (low >= indexLength) {
        return 0 ;
    }
    int seqLow = indexList[resultArea].link ;
    int seqUp = 0 ;
    if (resultArea == indexLength - 1) {
        seqUp = elementNumbers - 1 ;
    }else{
        seqUp =  indexList[resultArea + 1].link - 1 ;
    }
    for (int i = seqLow; i<=seqUp; i++) {
        if (seqList[i].key == value) {
            return i + 1;
        }
    }
    return 0 ;
}
