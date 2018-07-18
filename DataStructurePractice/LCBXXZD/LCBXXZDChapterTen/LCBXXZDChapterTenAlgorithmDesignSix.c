//
//  LCBXXZDChapterTenAlgorithmDesignSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTenAlgorithmDesignSix.h"

LinkList * directSelectSortInLinkList(LinkList * list) {
    LinkList * next = list->next ;
    while (next != NULL) {
        LinkList *scan = next ;
        int min = scan->data ;
        LinkList *minFlag = scan ;
        while (scan != NULL) {
            if (scan->data < min) {
                min = scan->data ;
                minFlag = scan ;
            }
            scan = scan->next ;
        }
        ElemType tempData = next->data ;
        next->data = min ;
        minFlag->data = tempData ;
        next = next->next ;
    }
    return list ;
}
