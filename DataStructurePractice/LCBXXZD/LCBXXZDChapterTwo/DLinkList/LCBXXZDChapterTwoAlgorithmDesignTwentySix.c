//
//  LCBXXZDChapterTwoAlgorithmDesignTwentySix.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignTwentySix.h"


void insertBeforeTheMaxJoint(CLinkList *list ,int number)  {
    CLinkList *next = list->next;
    CLinkList *nextPre = list ;
    CLinkList *maxPre = list;
    if (next == list) {
        CLinkList *data =initCLinkList();
        data->data = number;
        data->next = list->next;
        list->next = data ;
        return ;
    }
    ElemType max = next->data ;
    while (next != list) {
        if (next->data > max) {
            maxPre = nextPre ;
            max = next->data ;
        }
        nextPre = nextPre->next;
        next = next->next ;
    }
    CLinkList *data =initCLinkList();
    data->data = number;
    data->next = maxPre->next;
    maxPre->next = data ;
}
