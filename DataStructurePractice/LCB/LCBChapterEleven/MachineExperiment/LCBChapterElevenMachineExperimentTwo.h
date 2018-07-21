//
//  LCBChapterElevenMachineExperimentTwo.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterElevenMachineExperimentTwo_h
#define LCBChapterElevenMachineExperimentTwo_h

#include <stdio.h>
#include "LCBChapterElevenMachineExperimentOne.h"

//实现败者树的算法
#define NegativeINF -12345

#define INF 12345

typedef struct {
    int result[MAXL] ;
    int length ;
}LoserTreeResult;

LoserTreeResult loserTree(SelectChangedSortResult sequence ) ;


#endif /* LCBChapterElevenMachineExperimentTwo_h */
