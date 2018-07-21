//
//  WDChapterSevenMindExtend.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/21.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterSevenMindExtend.h"

#define MaxInt 32767
void sortInteger(SeqList seqlist ,int elementCount) {
    int array[MaxInt] ;
    for (int i = 0 ; i<MaxInt; i++) {
        array[i] = 0 ;
    }
    for (int i =  0; i<elementCount; i++) {
        array[seqlist[i].key] ++ ;
    }
    for (int i = 0 ; i<MaxInt; i++) {
        for (int j =  0; j < array[i]; j ++) {
            printf("%d  ",i) ;
        }
    }
    printf("\n") ;
}
