//
//  LCBChapterThreeExampleFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/23.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreeExampleFive.h"

bool isMatch(char *string) {
    LiStack *stack = initLiStack();
    int count = 0 ;
    while (string[count] != '\0') {
        if (string[count] == '(') {
            pushLi(stack, 1);
        }else if(string[count] == ')') {
            int temp = 0  ;
            if (!popLi(stack, &temp)) {
                return false ;
            }
        }
        count ++ ;
    }
    if (stackLiEmpty(stack)) {
        return true;
    }else{
        return false ;
    }
}
