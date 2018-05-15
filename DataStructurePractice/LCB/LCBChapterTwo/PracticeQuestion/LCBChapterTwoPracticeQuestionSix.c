//
//  LCBChapterTwoPracticeQuestionSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoPracticeQuestionSix.h"


CLinkList * combineTwoCLinkList(CLinkList *first ,CLinkList *second) {
    CLinkList * result = initCLinkList();
    CLinkList *firstnext = first->next;
    CLinkList *secondnext = second->next;
    while (firstnext != first) {
        CLinkList *data = initCLinkList();
        data->data = firstnext->data;
        data->next = result->next;
        result->next = data;
        firstnext = firstnext->next;
    }
    while (secondnext != second) {
        CLinkList *data = initCLinkList();
        data->data = secondnext->data;
        data->next = result->next;
        result->next = data;
        secondnext  = secondnext ->next;
    }
    return result;
}
