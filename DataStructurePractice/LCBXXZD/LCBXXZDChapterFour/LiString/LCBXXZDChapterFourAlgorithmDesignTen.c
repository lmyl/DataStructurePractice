//
//  LCBXXZDChapterFourAlgorithmDesignTen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterFourAlgorithmDesignTen.h"

int findLocationTheLastOfSubstringInLiString(LiString *stringOne , LiString *subString)  {
    LiString *nextOne = stringOne->next ;
    LiString *nextTwo = subString->next ;
    LiString *actionOne = nextOne ;
    int gobalLocation = 0 ;
    int tempLocation = 0 ;
    while (nextOne != NULL) {
        tempLocation ++ ;
        nextTwo = subString->next ;
        actionOne = nextOne ;
        while (actionOne != NULL && nextTwo != NULL && actionOne->data == nextTwo->data) {
            actionOne = actionOne->next ;
            nextTwo = nextTwo ->next ;
        }
        if (nextTwo == NULL && tempLocation >= gobalLocation) {
            gobalLocation = tempLocation ;
        }
        nextOne = nextOne->next ;
    }
    return gobalLocation ;
}
