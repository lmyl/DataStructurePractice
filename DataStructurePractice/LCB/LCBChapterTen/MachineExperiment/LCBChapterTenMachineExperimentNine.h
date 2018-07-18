//
//  LCBChapterTenMachineExperimentNine.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTenMachineExperimentNine_h
#define LCBChapterTenMachineExperimentNine_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define MaxElement 500

//某个待排序的序列是一个可变长度的字符串序列，这些字符串一个接一个地存储于唯一的字符数组中，用快排实现字符串排序。

typedef struct {
    int start ;
    int length ;
}StringNodeByLCBXXZD;

void quickSortString(StringNodeByLCBXXZD strings[MaxElement] , char string[] , int stringCount) ;

#endif /* LCBChapterTenMachineExperimentNine_h */
