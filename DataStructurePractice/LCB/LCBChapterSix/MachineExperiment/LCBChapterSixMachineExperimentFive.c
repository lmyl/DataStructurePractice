//
//  LCBChapterSixMachineExperimentFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSixMachineExperimentFive.h"


ElemType returnTheMaxAtomInGeneralTable(GeneralTable *list)  {
    int max = -100;
    if (list == NULL) {
        return -100;
    }
    GeneralTable *next = list ;
    while (next != NULL) {
        if (next->tag == 0) {
            if (next->value.data > max) {
                max = next->value.data ;
            }
        }else{
            int temp = returnTheMaxAtomInGeneralTable(next->value.sublist);
            if (temp > max) {
                max = temp ;
            }
        }
        next = next->next;
    }
    return max ;
}
