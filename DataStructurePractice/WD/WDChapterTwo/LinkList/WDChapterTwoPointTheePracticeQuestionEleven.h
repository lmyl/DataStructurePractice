//
//  WDChapterTwoPointTheePracticeQuestionEleven.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterTwoPointTheePracticeQuestionEleven_h
#define WDChapterTwoPointTheePracticeQuestionEleven_h

#include <stdio.h>
#include "LCBChapterTwoExampleFive.h"

//有一个带头节点的单链表L={a1,b1,a2,b2,...,an,bn}，设计一个算法将其拆分成两个带头节点的单链表L1和L2，L1={a1,a2,a3,...,an},L2={bn,bn-1,bn-3,...,b1}.要求L1使用L的头节点
// 与 DataStructurePractice/DataStructurePractice/LCB/LCBChapterTwo/Example/LinkList/LCBChapterTwoExampleFive 相同

typedef LCBChapterTwoExampleFive WDDesignEleven;

WDDesignEleven* splitLinkListWDDesign(LinkList *list) ;

#endif /* WDChapterTwoPointTheePracticeQuestionEleven_h */
