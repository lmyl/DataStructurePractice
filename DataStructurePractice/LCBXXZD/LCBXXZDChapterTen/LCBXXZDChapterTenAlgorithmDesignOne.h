//
//  LCBXXZDChapterTenAlgorithmDesignOne.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterTenAlgorithmDesignOne_h
#define LCBXXZDChapterTenAlgorithmDesignOne_h

#include <stdio.h>
#include "LCBChapterNineListFind.h"

//已知一个顺序表中有n个记录，设计一个算法采用直接插入排序为该顺序表建立一个有序的索引表(关键字递增排列)，索引表中的每一项应含记录的关键字和该记录在顺序表中的序号



typedef struct indexnode {
    KeyType key ;
    int location ;
}IndexNodeLCBXXZD;

void createdIndexByDirectInsertSort(SeqList seqlist , int elementNumbers , IndexNodeLCBXXZD index[MAXL]) ;


#endif /* LCBXXZDChapterTenAlgorithmDesignOne_h */
