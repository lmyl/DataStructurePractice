//
//  LCBXXZDChapterTenAlgorithmDesignEleven.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterTenAlgorithmDesignEleven_h
#define LCBXXZDChapterTenAlgorithmDesignEleven_h

#include <stdio.h>
#include "LCBChapterNineListFind.h"

//有一种简单的排序算法叫做计数排序，这种排序算法对一个待排序的表进行排序，并将排序结果存放到另一个新的表中，必须注意的是，表中所有待排序的关键字互不相同，计数排序算法针对表中的每个记录，扫描待排序的表一趟，统计表中有多少个记录的关键字比该记录的关键字小，假设针对某一个记录，统计出的技术值为count，那么这个记录在新的有序表中的合适存放位置即为count

void countSort(SeqList seqlist , int elementNumber ,SeqList result) ;

#endif /* LCBXXZDChapterTenAlgorithmDesignEleven_h */
