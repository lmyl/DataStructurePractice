//
//  LCBXXZDChapterTwoAlgorithmDesignTwenty.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterTwoAlgorithmDesignTwenty_h
#define LCBXXZDChapterTwoAlgorithmDesignTwenty_h

#include <stdio.h>
#include "LCBChapterTwoOrderLinkList.h"

//设A和B是两个带头节点的单链表，其表元素递增有序排列，设计一个算法，将它们合并成一个有序表元素递减的LC,要求辅助空间为O(1)
//头插法建立C
//与 DataStructurePractice/DataStructurePractice/LCB/LCBChapterTwo/Example/OrderList/LCBChapterTwoExampleTwelve 类似

OrderLinkList * mergeOrderLinkListToDecrease(OrderLinkList *first ,OrderLinkList *second) ;

#endif /* LCBXXZDChapterTwoAlgorithmDesignTwenty_h */
