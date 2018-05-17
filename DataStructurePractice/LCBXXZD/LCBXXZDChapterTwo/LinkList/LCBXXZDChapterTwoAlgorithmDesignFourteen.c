//
//  LCBXXZDChapterTwoAlgorithmDesignFourteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignFourteen.h"


bool deleteFirstValueInLinkList(LinkList *list,int number) {
    LinkList * next = list->next;
    LinkList *nextPre = list;
    while (next != NULL && next->data != number) {
        next = next->next;
        nextPre = nextPre->next;
    }
    if (next == NULL) {
        return false;
    }else{
        nextPre->next = next->next;
        free(next);
        return true ;
    }
}
