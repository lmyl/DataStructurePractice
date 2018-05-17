//
//  LCBXXZDChapterTwoAlgorithmDesignTwentyOne.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterTwoAlgorithmDesignTwentyOne_h
#define LCBXXZDChapterTwoAlgorithmDesignTwentyOne_h

#include <stdio.h>
#include "LCBChapterTwoOrderLinkList.h"

//已知单链表L(带头节点)是一个递增有序的有序表，试写一个高效的算法删除表中值大于min且小于max的节点，同时释放空间，并分析算法的时间复杂度
//O(n)
// 与 DataStructurePractice/DataStructurePractice/LCBXXZD/LCBXXZDChapterTwo/LinkList/LCBXXZDChapterTwoAlgorithmDesignSixteen 类似

void deletElementRangeInOrderLinkList(OrderLinkList *list,int min,int max) ;

#endif /* LCBXXZDChapterTwoAlgorithmDesignTwentyOne_h */
