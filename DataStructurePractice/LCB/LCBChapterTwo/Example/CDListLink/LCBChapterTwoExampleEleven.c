//
//  LCBChapterTwoExampleEleven.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoExampleEleven.h"


bool deleteFirstValueInCDLinkList(CDLinkList *list ,int number) {
    CDLinkList *next = list->next;
    while (next != list) {
        if (next->data == number) {
            next->prior->next = next->next;
            next->next->prior = next->prior;
            free(next);
            return true;
        }
        next = next->next ;
    }
    return false;
}
