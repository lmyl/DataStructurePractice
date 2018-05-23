//
//  LCBChapterThreeSqStack.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/23.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreeSqStack.h"


//初始化
SqStack * initSqStack(void) {
    SqStack *stack = (SqStack *)malloc(sizeof(SqStack));
    stack->top = -1;
    return stack ;
}

//销毁栈
void destorySqStack(SqStack *stack) {
    free(stack);
    stack = NULL ;
}

//判断栈是否为空
bool stackSqEmpty(SqStack *stack) {
    return stack->top == -1 ;
}

//进栈
bool pushSq(SqStack *stack,ElemType element) {
    if (stack->top == MaxSize-1) {
        return false ;
    }else{
        stack->top ++ ;
        stack->data[stack->top] = element ;
        return true ;
    }
}

//出栈
bool popSq(SqStack *stack,ElemType *element) {
    if (stack->top == -1) {
        return false ;
    }else{
        *element = stack->data[stack->top] ;
        stack->top -- ;
        return true ;
    }
}

//取栈顶元素
bool getTopSq(SqStack *stack,ElemType *element) {
    if (stack->top == -1) {
        return false ;
    }else{
        *element = stack->data[stack->top];
        return true ;
    }
}
