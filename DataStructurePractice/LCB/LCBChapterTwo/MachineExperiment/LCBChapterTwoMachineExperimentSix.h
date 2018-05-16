//
//  LCBChapterTwoMachineExperimentSix.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTwoMachineExperimentSix_h
#define LCBChapterTwoMachineExperimentSix_h

#include <stdio.h>
#include "LCBChapterTwoCLinkList.h"

//采用单链表表示集合，并按其递增排列，构成有序单链表，并求这两个集合的并，交，差

typedef CLinkList OrderSetLinkList ;

OrderSetLinkList * creatOrderSetLinkList(int numbers[] ,int count);

OrderSetLinkList * addOrderSetLinkList(OrderSetLinkList *setOne,OrderSetLinkList *setTwo) ;
OrderSetLinkList * subOrderSetLinkList(OrderSetLinkList *setOne,OrderSetLinkList *setTwo) ;
OrderSetLinkList * interSectionOrderSetLinkList(OrderSetLinkList *setOne,OrderSetLinkList *setTwo) ;


#endif /* LCBChapterTwoMachineExperimentSix_h */
