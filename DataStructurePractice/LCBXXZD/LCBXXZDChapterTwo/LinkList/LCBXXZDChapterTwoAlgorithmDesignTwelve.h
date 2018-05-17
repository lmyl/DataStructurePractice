//
//  LCBXXZDChapterTwoAlgorithmDesignTwelve.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterTwoAlgorithmDesignTwelve_h
#define LCBXXZDChapterTwoAlgorithmDesignTwelve_h

#include <stdio.h>
#include "LCBChapterTwoLinkList.h"


//假定采用带头节点的单链表保存单词，当两个单词有相同的后缀时可共享相同的后缀存储空间，设str1和str2分别指向两个单词所在的单链表的头节点，链表节点结构为(data,next)，请设计一个时间上尽可能高效的算法，找出由str1和str2所指向链表共同后缀的起始位置

//分别求出两个单词的长，对齐表尾，从短的开始比对

LinkList * findCommonTailStoreLocationLinkList(LinkList *first ,LinkList *second);

#endif /* LCBXXZDChapterTwoAlgorithmDesignTwelve_h */
