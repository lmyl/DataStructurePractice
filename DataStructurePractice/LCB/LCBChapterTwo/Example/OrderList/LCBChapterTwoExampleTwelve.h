//
//  LCBChapterTwoExampleTwelve.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTwoExampleTwelve_h
#define LCBChapterTwoExampleTwelve_h

#include <stdio.h>
#include "LCBChapterTwoOrderSqList.h"
#include "LCBChapterTwoOrderLinkList.h"
//假设有两个有序表LA和LB，设计一个算法，将它们合并成一个有序表LC(假设每个有序表中和两个有序表间均不含相同的元素)，要求不破坏原来的有序表LA和LB

OrderSqList * mergeOrderSqList(OrderSqList *first ,OrderSqList *second);
OrderLinkList * mergeOrderLinkList(OrderLinkList *first ,OrderLinkList *second);

#endif /* LCBChapterTwoExampleTwelve_h */
