//
//  LCBChapterTenMachineExperimentTen.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTenMachineExperimentTen_h
#define LCBChapterTenMachineExperimentTen_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MaxLen 20

//设计一个将一组英文单词按字典顺序排列的基数排序，假设单词均由小写字母或空格构成，最长的单词有MaxLen

typedef struct radixdictionarynode {
    char data[MaxLen] ;
    struct radixdictionarynode * next ;
}RadixDictionaryNode;

RadixDictionaryNode * RadixSortDictionary(RadixDictionaryNode * list) ;



#endif /* LCBChapterTenMachineExperimentTen_h */
