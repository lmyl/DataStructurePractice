//
//  LCBXXZDChapterTwoAlgorithmDesignSeventeen.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterTwoAlgorithmDesignSeventeen_h
#define LCBXXZDChapterTwoAlgorithmDesignSeventeen_h

#include <stdio.h>
#include "LCBChapterTwoExampleFive.h"

typedef LCBChapterTwoExampleFive LCBXXZDTwoDesignSeventeen;
//有一个整数元素构成的非空单链表A,设计一个算法，将其拆分成两个单链表A和B，使得A单链表中含有所有的偶数节点，B节点含有所有的奇数节点，且保持原来的相对次序

LCBXXZDTwoDesignSeventeen * splitLinkListToTwoLinkList(LinkList *list) ;
#endif /* LCBXXZDChapterTwoAlgorithmDesignSeventeen_h */
