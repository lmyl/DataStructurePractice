//
//  WDChapterTwoPointTheePracticeQuestionTwentyThree.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterTwoPointTheePracticeQuestionTwentyThree_h
#define WDChapterTwoPointTheePracticeQuestionTwentyThree_h

#include <stdio.h>
#include "LCBChapterTwoLinkList.h"

//用单链表保存m个整数，节点结构为  | data | link |  ，且|data|<=n (n为正整数) ，现要求设计一个时间复杂度尽可能高效的算法，对于链表中data的绝对值相等的节点，仅保留第一次出现的节点而删除其余绝对值相等的节点

void deleteAllSameAbsValue(LinkList *list,int upNumebr);

#endif /* WDChapterTwoPointTheePracticeQuestionTwentyThree_h */
