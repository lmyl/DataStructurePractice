//
//  LCBChapterElevenMachineExperimentOne.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterElevenMachineExperimentOne_h
#define LCBChapterElevenMachineExperimentOne_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//完成选择-置换排序算法
#define MAXL 500

typedef struct {
    int result[MAXL][MAXL] ;
    int length[MAXL] ;
    int number ;
}SelectChangedSortResult;

SelectChangedSortResult selectChangedSort(int sequence[MAXL] , int elementNumber,int memorySize) ;

#endif /* LCBChapterElevenMachineExperimentOne_h */
