//
//  LCBXXZDChapterTwoAlgorithmDesignTwentyFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignTwentyFour.h"


void deleteAllOddValueInDLinkList(DLinkList *list) {
    DLinkList *next = list->next;
    DLinkList *nextPre ;
    while (next != NULL) {
        if (next->data % 2 == 1 || next->data % 2 == -1) {
            nextPre = next->prior;
            nextPre->next = next->next;
            if (next->next != NULL) {
                next->next->prior = nextPre ;
            }
            free(next);
            next = nextPre->next;
        }else{
            next = next->next ;
        }
    }
}
