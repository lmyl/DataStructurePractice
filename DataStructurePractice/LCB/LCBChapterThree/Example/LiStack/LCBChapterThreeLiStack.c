//
//  LCBChapterThreeLiStack.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/23.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreeLiStack.h"

LiStack * initLiStack(void) {
    LiStack *stack = (LiStack *)malloc(sizeof(LiStack));
    stack->next = NULL ;
    return stack ;
}

void destoryLiStack(LiStack *stack) {
    LiStack *next  ;
    while (stack != NULL) {
        next = stack->next;
        free(stack);
        stack = next ;
    }
    stack = NULL ;
}

bool stackLiEmpty(LiStack *stack) {
    return stack->next == NULL ;
}

void pushLi(LiStack *stack,ElemType element) {
    LiStack *data = initLiStack();
    data->data = element;
    data->next = stack->next;
    stack->next = data;
}

bool popLi(LiStack *stack,ElemType *element) {
    if (stack->next == NULL) {
        return false ;
    }
    *element = stack->next->data;
    LiStack *temp = stack->next ;
    stack->next = temp->next;
    free(temp);
    return true ;
}

bool getTop(LiStack *stack ,ElemType *element) {
    if (stack->next == NULL) {
        return false ;
    }
    *element = stack->next->data ;
    return true;
}
