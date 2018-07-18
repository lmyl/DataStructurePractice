//
//  LCBXXZDChapterTenAlgorithmDesignThree.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterTenAlgorithmDesignThree_h
#define LCBXXZDChapterTenAlgorithmDesignThree_h

#include <stdio.h>
#include "LCBChapterNineListFind.h"

//设计一个奇偶排序算法，第一趟对所有奇数的i，将R[i]与R[i+1]进行比较，第二趟对所有偶数的i，将R[i]和R[i+1]进行比较，每次比较时若R[i].key > R[i+1].key ，则将两者交换，以后重复上述两趟过程，直到整个数据有序

void oddEvenSort(SeqList seqlist , int  elementNumber) ;


#endif /* LCBXXZDChapterTenAlgorithmDesignThree_h */
