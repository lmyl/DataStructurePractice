//
//  LCBXXZDChapterNineAlgorithmDesignThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterNineAlgorithmDesignThree.h"

int binSearchByRescurivePrivate(SeqList seqlist , int value ,int low ,int up) ;

int binSearchByRescurive(SeqList seqlist , int elementNumber , int value ) {
    return binSearchByRescurivePrivate(seqlist, value, 0, elementNumber -1) ;
}


int binSearchByRescurivePrivate(SeqList seqlist , int value ,int low ,int up) {
    if (low > up) {
        return -1 ;
    }
    int middle = (low + up) / 2 ;
    if (seqlist[middle].key == value) {
        return middle + 1 ;
    }else if (seqlist[middle].key > value) {
        up = middle - 1 ;
        return binSearchByRescurivePrivate(seqlist, value, low, up) ;
    }else{
        low = middle + 1 ;
        return binSearchByRescurivePrivate(seqlist, value, low, up) ;
    }
}
