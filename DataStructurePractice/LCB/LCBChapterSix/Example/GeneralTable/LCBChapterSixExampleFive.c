//
//  LCBChapterSixExampleFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/4.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSixExampleFive.h"

int getAtomNumberInGeneralTable(GeneralTable *list) {
    int number = 0 ;
    GeneralTable *next = list ;
    while (next != NULL) {
        if (next->tag == 1) {
            number += getAtomNumberInGeneralTable(next->value.sublist) ;
        }else {
            number ++;
        }
        next = next->next ;
    }
    return number ;
}
