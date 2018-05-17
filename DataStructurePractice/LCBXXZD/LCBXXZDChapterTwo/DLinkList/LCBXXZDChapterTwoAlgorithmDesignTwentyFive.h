//
//  LCBXXZDChapterTwoAlgorithmDesignTwentyFive.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterTwoAlgorithmDesignTwentyFive_h
#define LCBXXZDChapterTwoAlgorithmDesignTwentyFive_h

#include <stdio.h>
#include "LCBChapterTwoCLinkList.h"

//已知带头节点的循环单链表L中至少有两个节点，每个节点的两个域为data和next，其中data的类型为整数，设计一个算法判断该链表中每个节点值是否小于其后续两个节点值之和，若满足返回true，否则返回false

bool isLessThanSumTwoJoint(CLinkList *list) ;

#endif /* LCBXXZDChapterTwoAlgorithmDesignTwentyFive_h */
