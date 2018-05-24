//
//  LCBChapterThreePracticeQuestionTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreePracticeQuestionTwo.h"



bool judgementInputCorrect(char *input)  {
    SqStack *stack = initSqStack();
    int count = 0;
    while (input[count] != '\0') {
        if (input[count] == 'I') {
            pushSq(stack, 1);
        }else if (input[count] == 'O'){
            ElemType temp ;
            if (!popSq(stack, &temp)) {
                return false ;
            }
        }else{
            printf("输入错误!\n");
        }
        count ++ ;
    }
    if (stackSqEmpty(stack)) {
        return true ;
    }else{
        return false ;
    }
}
