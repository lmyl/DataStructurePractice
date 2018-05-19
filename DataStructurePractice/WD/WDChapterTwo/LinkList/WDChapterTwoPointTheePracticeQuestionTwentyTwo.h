//
//  WDChapterTwoPointTheePracticeQuestionTwentyTwo.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterTwoPointTheePracticeQuestionTwentyTwo_h
#define WDChapterTwoPointTheePracticeQuestionTwentyTwo_h

#include <stdio.h>
#include "LCBChapterTwoLinkList.h"


//2009真题
//假定采用带头节点的单链表保存单词，当两个单词有相同的后缀时可共享相同的后缀存储空间，设str1和str2分别指向两个单词所在的单链表的头节点，链表节点结构为(data,next)，请设计一个时间上尽可能高效的算法，找出由str1和str2所指向链表共同后缀的起始位置
// 与 DataStructurePractice/DataStructurePractice/LCBXXZD/LCBXXZDChapterTwo/LinkList/LCBXXZDChapterTwoAlgorithmDesignTwelve 相同

LinkList * findCommonTailStoreLocationLinkListWDDesign(LinkList *first ,LinkList *second);

#endif /* WDChapterTwoPointTheePracticeQuestionTwentyTwo_h */
