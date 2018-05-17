//
//  LCBXXZDChapterTwoAlgorithmDesignTwentyThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignTwentyThree.h"


void deleteAllSameInDLinkList(DLinkList *list,int number) {
    DLinkList *next = list->next;
    DLinkList *nextPre ;
    while (next != NULL) {
        if (next->data != number) {
            next = next->next;
        }else{
            nextPre = next->prior ;
            nextPre->next = next->next;
            if (next->next != NULL) {
                next->next->prior = nextPre ;
            }
            free(next);
            next = nextPre->next ;
        }
    }
}
