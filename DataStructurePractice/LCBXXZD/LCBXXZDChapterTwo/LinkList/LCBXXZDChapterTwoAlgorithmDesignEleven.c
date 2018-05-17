//
//  LCBXXZDChapterTwoAlgorithmDesignEleven.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignEleven.h"


bool isIncreaseLinkList(LinkList *list) {
    LinkList *next = list->next;
    if (next == NULL || next->next == NULL) {
        return  true ;
    }
    LinkList *nextPre  = list->next;
    next = nextPre->next ;
    while (next != NULL) {
        if (nextPre->data <= next->data) {
            nextPre = nextPre->next;
            next = next ->next;
        }else{
            return false ;
        }
    }
    return true;
}
