//
//  LCBXXZDChapterTwoAlgorithmDesignFive.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterTwoAlgorithmDesignFive_h
#define LCBXXZDChapterTwoAlgorithmDesignFive_h

#include <stdio.h>
#include "LCBChapterTwoOrderSqList.h"
#include "LCBChapterTwoSqList.h"

/*用顺序表A和B表示的两个线性表，元素的个数分别为m和n，假设表中元素都是递增排列的，且这m+n个元素中没有重复的
 1.设计一个算法将这两个线性表合并成一个递增有序线性表，并存储到另一个顺序表C中
 2.如果顺序表A的大小为m+n个单元，是否可以不利用顺序表C而将合并结果存放于顺序表A中
 3.设顺序表A中前k个元素有序，后m-k个元素有序，试设计一个算法，使整个顺序表有序，要求空间复杂度为O(1)
*/

//1.和 DataStructurePractice/LCB/LCBChapterTwo/Example/OrderList/LCBChapterTwoExampleTwelve 相同
OrderSqList * mergeOrderSqListDesign(OrderSqList *firstList,OrderSqList *secondList) ;

//2.从A的尾部开始放
void mergeOrderSqListDesignNotUseThirdParty(OrderSqList *firstList,OrderSqList *secondList);

//3.返回顺序表与输入的顺序表为同一个
OrderSqList * changeSqListToOrderSqList(SqList *list,int location);

#endif /* LCBXXZDChapterTwoAlgorithmDesignFive_h */
