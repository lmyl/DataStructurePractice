//
//  LCBXXZDChapterTwoAlgorithmDesignFifteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignFifteen.h"


void deleteAllOddLocationInLinkList(LinkList *list)  {
    LinkList *next = list->next;
    LinkList *nextPre = list;
    while (next != NULL) {
        nextPre ->next = next->next;
        nextPre = next->next;
        free(next);
        if (nextPre != NULL) {
            next = nextPre->next;
        }else{
            break ;
        }
    }
}
