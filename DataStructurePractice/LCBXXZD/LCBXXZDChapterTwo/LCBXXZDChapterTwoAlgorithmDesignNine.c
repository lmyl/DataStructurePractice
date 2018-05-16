//
//  LCBXXZDChapterTwoAlgorithmDesignNine.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignNine.h"

int findTheLasteMinLocationInLinkList(LinkList *list) {
    LinkList *next = list->next;
    if (next == NULL) {
        return 0;
    }
    ElemType min = next->data;
    int location = 0 ;
    int count = 0;
    while (next != NULL) {
        count ++ ;
        if (next->data <= min) {
            location = count ;
        }
        next = next->next;
    }
    return location;
}
