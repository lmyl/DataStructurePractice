//
//  LCBChapterFourExampleThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/29.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFourExampleThree.h"

bool changABToXYZInLiString(LiString *string) {
    LiString *next = string->next ;
    if (next == NULL) {
        return false ;
    }
    LiString *nextToNext = next->next ;
    if (nextToNext == NULL) {
        return false ;
    }
    while (nextToNext != NULL) {
        if (next->data == 'a' && nextToNext->data == 'b') {
            LiString *dataOne = initLiString();
            dataOne->data = 'y';
            next->data = 'x' ;
            nextToNext->data = 'z' ;
            dataOne->next = nextToNext ;
            next ->next = dataOne ;
            return true ;
        }
        nextToNext = nextToNext ->next;
        next = next->next ;
    }
    return false ;
}
