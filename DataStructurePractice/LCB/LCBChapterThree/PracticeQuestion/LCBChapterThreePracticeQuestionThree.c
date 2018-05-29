//
//  LCBChapterThreePracticeQuestionThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreePracticeQuestionThree.h"


bool judgementBracketsMatch(char *input)  {
    SqStack *stack = initSqStack();
    int count = 0 ;
    while (input[count] != '\0') {
        if (input[count] == '(') {
            pushSq(stack, 1);
        }else if (input[count] == ')') {
            ElemType temp ;
            if (!popSq(stack, &temp) || temp != 1) {
                return false ;
            }
        }else if (input[count] == '['){
            pushSq(stack, 2);
        }else if (input[count] == ']') {
            ElemType temp ;
            if (!popSq(stack, &temp) || temp != 2) {
                return false ;
            }
        }else if (input[count] == '{') {
            pushSq(stack, 3);
        }else if (input[count] == '}') {
            ElemType temp ;
            if (!popSq(stack, &temp) || temp != 3) {
                return false ;
            }
        }
        count ++ ;
    }
    if (stackSqEmpty(stack)) {
        return true ;
    }else{
        return false;
    }
    
}
