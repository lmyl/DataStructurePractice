//
//  WDChapterTwoPointTheePracticeQuestionThirteen.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterTwoPointTheePracticeQuestionThirteen_h
#define WDChapterTwoPointTheePracticeQuestionThirteen_h

#include <stdio.h>
#include "LCBChapterTwoOrderLinkList.h"

//设A和B是两个带头节点的单链表，其表元素递增有序排列，设计一个算法，将它们合并成一个有序表元素递减的LC,要求辅助空间为O(1)
// 与 DataStructurePractice/DataStructurePractice/LCBXXZD/LCBXXZDChapterTwo/OrderLinkList/LCBXXZDChapterTwoAlgorithmDesignTwenty 相同

OrderLinkList * mergeOrderLinkListToDecreaseWDDesign(OrderLinkList *first ,OrderLinkList *second) ;

#endif /* WDChapterTwoPointTheePracticeQuestionThirteen_h */
