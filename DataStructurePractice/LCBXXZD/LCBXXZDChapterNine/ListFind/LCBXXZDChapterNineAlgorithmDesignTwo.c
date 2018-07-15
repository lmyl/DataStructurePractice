//
//  LCBXXZDChapterNineAlgorithmDesignTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterNineAlgorithmDesignTwo.h"

int seqSearchOnSpeciallyStrategy(SeqList seqlist , int elementNumber , KeyType value) {
    int location = 0 ;
    while (location < elementNumber && seqlist[location].key != value) {
        location ++ ;
    }
    if (location == elementNumber) {
        return  -1 ;
    }else{
        if (location >= 1) {
            NodeType temp = seqlist[location] ;
            seqlist[location] = seqlist[location -1] ;
            seqlist[location - 1] = temp ;
            return location ;
        }
        return location + 1;
    }
}
