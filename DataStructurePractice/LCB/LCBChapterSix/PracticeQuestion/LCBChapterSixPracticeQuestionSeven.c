//
//  LCBChapterSixPracticeQuestionSeven.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/4.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSixPracticeQuestionSeven.h"

bool isEqualGeneralTable(GeneralTable *listOne , GeneralTable *listTwo)  {
    if (listOne == NULL && listTwo == NULL) {
        return true ;
    }else if (listOne != NULL && listTwo != NULL) {
        if (listOne->tag == 1 && listTwo->tag == 1) {
            return isEqualGeneralTable(listOne->value.sublist, listTwo->value.sublist) && isEqualGeneralTable(listOne->next, listTwo->next) ;
        }else if (listOne->tag == 0 && listTwo->tag == 0) {
            if (listOne->value.data == listOne->value.data) {
                return isEqualGeneralTable(listOne->next, listTwo->next) ;
            }else{
                return false ;
            }
        }else {
            return false ;
        }
    }else {
        return false ;
    }
}
