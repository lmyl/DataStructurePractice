//
//  LCBXXZDChapterNineAlgorithmDesignFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterNineAlgorithmDesignFour.h"

void insertElementInSortedListByBinarySearch(SeqList seqlist , int elementNumbers,KeyType key) {
    int low = 0 ;
    int up = elementNumbers -1 ;
    while (low <= up) {
        int middle = (low + up) / 2;
        if (seqlist[middle].key < key) {
            low = middle + 1 ;
        }else{
            up = middle - 1 ;
        }
    }
    for (int i = elementNumbers - 1; i>=low; i--) {
        seqlist[i+1] = seqlist[i] ;
    }
    NodeType value ;
    value.key = key ;
    seqlist[low] = value ;
}
