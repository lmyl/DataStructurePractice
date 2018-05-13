//
//  LCBChapterTwoExampleSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoExampleSix.h"


void deleteMaxListLink(LinkList *list) {
    LinkList *next = list->next;
    LinkList *max = next ;
    LinkList *maxPre = list ;
    while (next != NULL) {
        if (next->next != NULL && next->next->data > max->data) {
            max = next->next;
            maxPre = next ;
            next = next->next ;
        }else{
            next = next ->next ;
        }
    }
    if (max != NULL) {
        maxPre->next = max->next ;
        free(max);
    }
}
