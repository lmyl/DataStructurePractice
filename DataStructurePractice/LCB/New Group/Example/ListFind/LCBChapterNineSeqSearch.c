//
//  LCBChapterNineSeqSearch.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterNineSeqSearch.h"

int seqSearch(SeqList seqlist , int elementNumber , KeyType value) {
    for (int i = 0 ; i<elementNumber; i++) {
        if (seqlist[i].key == value) {
            return i + 1 ;
        }
    }
    return 0 ;
}
