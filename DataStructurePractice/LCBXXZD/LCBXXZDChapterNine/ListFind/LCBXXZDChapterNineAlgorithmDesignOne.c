//
//  LCBXXZDChapterNineAlgorithmDesignOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterNineAlgorithmDesignOne.h"

int seqSearchByRescurivePrivate(SeqList seqlist , int elementNumber , int nowLocation,KeyType value)  ;

int seqSearchByRescurivePrivate(SeqList seqlist , int elementNumber , int nowLocation,KeyType value) {
    if (nowLocation == elementNumber) {
        return -1 ;
    }
    if (seqlist[nowLocation].key == value) {
        return nowLocation + 1 ;
    }else{
        return seqSearchByRescurivePrivate(seqlist, elementNumber, nowLocation+1, value) ;
    }
}


int seqSearchByRescurive(SeqList seqlist , int elementNumber , KeyType value) {
    return seqSearchByRescurivePrivate(seqlist, elementNumber, 0, value) ;
}
