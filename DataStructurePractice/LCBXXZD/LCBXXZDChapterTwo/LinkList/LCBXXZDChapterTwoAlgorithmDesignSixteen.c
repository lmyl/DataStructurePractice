//
//  LCBXXZDChapterTwoAlgorithmDesignSixteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignSixteen.h"


void deletElementRangeInLinkList(LinkList *list,int min,int max) {
    LinkList *next = list->next;
    LinkList *nextPre = list;
    while (next != NULL) {
        if (next->data < min || next->data > max) {
            next = next->next;
            nextPre = nextPre->next;
        }else{
            nextPre ->next = next->next;
            free(next);
            next = nextPre->next;
        }
        
    }
}
