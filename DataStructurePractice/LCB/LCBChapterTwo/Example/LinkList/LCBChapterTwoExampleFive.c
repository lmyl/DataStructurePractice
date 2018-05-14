//
//  LCBChapterTwoExampleFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/12.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoExampleFive.h"


LCBChapterTwoExampleFive* splitLinkList(LinkList *list)  {
    LinkList *listTwo = initLinkList();
    LinkList *next = list->next ;
    while (next != NULL) {
        if (next->next != NULL) {
            LinkList *out = next->next;
            next->next = next->next->next;
            out ->next = listTwo->next;
            listTwo->next = out;
            next = next->next;
        }else{
            next = next->next;
        }
    }
    LCBChapterTwoExampleFive *result = (LCBChapterTwoExampleFive *)malloc(sizeof(LCBChapterTwoExampleFive));
    result->result[0] = list;
    result->result[1] = listTwo;
    return result;
}
