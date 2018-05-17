//
//  LCBXXZDChapterTwoAlgorithmDesignTwentyFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignTwentyFive.h"


bool isLessThanSumTwoJoint(CLinkList *list)  {
    CLinkList *next = list->next;
    CLinkList *nextToNext = next->next;
    CLinkList *nextToToNext = nextToNext->next;
    while (next != list) {
        if (nextToNext == list) {
            next = next->next;
        }else if (nextToToNext == list) {
            if (next->data < nextToNext->data) {
                next = next->next ;
            }else{
                return false ;
            }
        }else{
            if (next->data < nextToNext->data + nextToToNext->data) {
                next = next->next ;
            }else{
                return false ;
            }
        }
        nextToNext = next->next;
        nextToToNext = nextToNext->next;
    }
    return true ;
}
