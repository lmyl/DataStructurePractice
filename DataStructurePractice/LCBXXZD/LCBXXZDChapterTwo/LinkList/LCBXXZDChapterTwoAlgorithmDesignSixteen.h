//
//  LCBXXZDChapterTwoAlgorithmDesignSixteen.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterTwoAlgorithmDesignSixteen_h
#define LCBXXZDChapterTwoAlgorithmDesignSixteen_h

#include <stdio.h>
#include "LCBChapterTwoLinkList.h"

//设计一个算法，删除带头节点的单链表L中data值大于等于min、小于等于max之间的节点，同时释放被删节点的空间，并分析算法的时间复杂度
//O(n)

void deletElementRangeInLinkList(LinkList *list,int min,int max) ;

#endif /* LCBXXZDChapterTwoAlgorithmDesignSixteen_h */
