//
//  LCBXXZDChapterSixAlgorithmDesignTwelve.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSixAlgorithmDesignTwelve.h"

int sumInGeneralTable(GeneralTable *list)  {
    if (list == NULL) {
        return 0 ;
    }
    int sum = 0 ;
    GeneralTable *next = list ;
    while (next != NULL) {
        if (next->tag == 0) {
            sum += next->value.data ;
        }else if (next->tag == 1) {
            sum += sumInGeneralTable(next->value.sublist) ;
        }
        next = next->next ;
    }
    return sum;
}
