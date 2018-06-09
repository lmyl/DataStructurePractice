//
//  LCBXXZDChapterSixAlgorithmDesignTen.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSixAlgorithmDesignTen.h"

void replaceElementInGeneralTable(GeneralTable *list , int element , int toElement)  {
    if (list == NULL) {
        return ;
    }
    GeneralTable *next = list ;
    while (next != NULL) {
        if (next->tag == 0 && next->value.data == element) {
            next->value.data = toElement ;
        }else if (next->tag == 1) {
            replaceElementInGeneralTable(next->value.sublist, element, toElement) ;
        }
        next = next->next ;
    }
}
