//
//  LCBXXZDChapterTwoAlgorithmDesignEighteen.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterTwoAlgorithmDesignEighteen_h
#define LCBXXZDChapterTwoAlgorithmDesignEighteen_h

#include <stdio.h>
#include "LCBChapterTwoLinkList.h"
#include "LCBChapterTwoCLinkList.h"

typedef struct {
    CLinkList *result[4];
}LCBXXZDTwoDesignEighteen;
//已知由单链表L表示的线性表中含有3类字符的数据元素(如字母字符，数字字符和其他字符).设计一个算法构造3个循环单链表A、B、C，使每个循环单链表中只含有同一类字符，且利用原表中的节点空间最为这3个表节点空间，头节点可另辟空间

LCBXXZDTwoDesignEighteen * splitLinkListToThreeCLinkList(LinkList *list) ;

#endif /* LCBXXZDChapterTwoAlgorithmDesignEighteen_h */
