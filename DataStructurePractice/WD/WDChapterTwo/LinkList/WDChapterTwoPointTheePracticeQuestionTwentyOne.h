//
//  WDChapterTwoPointTheePracticeQuestionTwentyOne.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterTwoPointTheePracticeQuestionTwentyOne_h
#define WDChapterTwoPointTheePracticeQuestionTwentyOne_h

#include <stdio.h>
#include "LCBChapterTwoLinkList.h"


//一直一个带有头节点的单链表，节点结构为  | data | link |  假设该链表只给出了头指针list，在不改变链表的前提下，请设计一个尽可能高效的算法，查找链表中倒数第k个位置上的节点(k为正整数)，若查找成功，算法输出该节点的data域的值并返回1 ，否则只返回0


int findReciprocalLocationValue(LinkList *list, int reciprocalLocation) ;

#endif /* WDChapterTwoPointTheePracticeQuestionTwentyOne_h */
