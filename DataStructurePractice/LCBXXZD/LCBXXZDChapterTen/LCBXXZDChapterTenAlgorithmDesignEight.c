//
//  LCBXXZDChapterTenAlgorithmDesignEight.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTenAlgorithmDesignEight.h"

void createHeapByInsert(KeyType keyArray[MAXL] , int elementNumber ,SeqList seqlist) {
    for (int i = 0; i<elementNumber; i++) {
        insertBigRootHeap(seqlist, i, keyArray[i]) ; 
    }
}
