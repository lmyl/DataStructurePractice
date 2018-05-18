//
//  WDChapterTwoPracticeQuestionEleven.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterTwoPracticeQuestionEleven_h
#define WDChapterTwoPracticeQuestionEleven_h

#include <stdio.h>
#include "LCBChapterTwoOrderSqList.h"


//现有两个升序序列A和B，试设计一个时间和空间两方面都尽可能高效的算法，找出两个序列A和B的中位数,位置为(L+1)/2
//与 DataStructurePractice/LCB/LCBChapterTwo/Example/OrderList/LCBChapterTwoExampleTwelve 类似
//时间复杂度为O(n),空间复杂度为O(1)

int findOutTwoOrderSqListMedian(OrderSqList *first,OrderSqList *second) ;

//2011真题
//现有两个升序等长序列A和B，试设计一个时间和空间两方面都尽可能高效的算法，找出两个序列A和B的中位数,位置为(L+1)/2
//时间复杂度为O(log2n),空间复杂度为O(1)
//1.分别求出升序序列A和B的中位数a,b,若a=b，则a或b为所求
//2.若a<b则舍弃序列A中较小的一半，同时舍弃B中较大的一半，要求两次舍弃同样的长度
//3.若a>b则舍弃序列A中较大的一半，同时舍弃B中较小的一半，要求两次舍弃同样的长度
//4.在保留的两个升序序列重复上述操作,直到两个序列均只含一个元素

int findOutTwoEqualLengthOrderSqListMedian(OrderSqList *first,OrderSqList *second) ;

#endif /* WDChapterTwoPracticeQuestionEleven_h */
