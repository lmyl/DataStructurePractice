//
//  LCBXXZDChapterTenAlgorithmDesignSeven.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTenAlgorithmDesignSeven.h"


void insertBigRootHeap(SeqList seqlist , int elementNumber , KeyType key ) {
    NodeType new ;
    new.key = key ;
    seqlist[elementNumber] = new ;
    int low = elementNumber ;
    int fater = ( low - 1 ) / 2 ;
    while (low > 0) {
        if (new.key > seqlist[fater].key) {
            seqlist[low] = seqlist[fater] ;
            low = fater ;
            fater = ( low - 1 ) / 2 ;
        }else{
            break ;
        }
    }
    seqlist[low] = new ;
}
