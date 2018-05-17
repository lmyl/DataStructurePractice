//
//  LCBChapterTwoExampleThirteen.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTwoExampleThirteen_h
#define LCBChapterTwoExampleThirteen_h

#include <stdio.h>
#include "LCBChapterTwoOrderLinkList.h"
//已知3个带头节点的单链表LA，LB和LC其中节点均以元素值自小至大递增排列(假设每个单链表不存在数据值相同的节点，但3个单链表中可能存在数据值相同的节点)。编写一个算法对LA链表进行如下操作:使操作后的链表LA中仅留下3个表中均包含的数据元素的节点，且没有数据值相同的节点，并释放LA中所有无用节点，要求算法的时间复杂度为O(m+n+p)，其中m,n和p分别为3个表的长度.
void interSectionThreeOrderLinkList(OrderLinkList *first,OrderLinkList *second,OrderLinkList *third) ;

#endif /* LCBChapterTwoExampleThirteen_h */
