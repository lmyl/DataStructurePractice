//
//  LCBChapterTwoExampleTen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoExampleTen.h"

int valueForCountInCLinkList(CLinkList *list,int number) {
    CLinkList *next = list->next;
    int count = 0;
    while (next != list) {
        if (next->data == number) {
            count ++;
        }
        next  = next->next;
    }
    return count ;
}


