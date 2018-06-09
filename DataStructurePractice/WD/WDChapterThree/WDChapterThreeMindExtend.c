//
//  WDChapterThreeMindExtend.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterThreeMindExtend.h"

DoubleSqStackInCustomize * initDoubleSqStackInCustomize(void) {
    DoubleSqStackInCustomize *stack = (DoubleSqStackInCustomize *)malloc(sizeof(DoubleSqStackInCustomize)) ;
    stack->top = -1 ;
    return stack ;
}

bool popDoubleSqStackInCustomize(DoubleSqStackInCustomize *stack , ElemType *element){
    if (stack->top == -1) {
        return false ;
    }
    *element = stack->stackMain[stack->top];
    stack->top -- ;
    return true ;
}

bool pushDoubleSqStackInCustomize(DoubleSqStackInCustomize *stack , ElemType element) {
    if (stack->top == MaxSize - 1) {
        return false ;
    }
    if (stack->top == -1) {
        stack->top ++ ;
        stack->stackMain[stack->top] = element;
        stack->stackMin[stack->top] = element ;
    }else{
        int min = stack->stackMin[stack->top] ;
        if (min > element) {
            min = element ;
        }
        stack->top ++ ;
        stack->stackMain[stack->top] = element;
        stack->stackMin[stack->top] = min ;
    }
    return true ;
}

bool minDoubleSqStackInCustomize(DoubleSqStackInCustomize *stack , ElemType *element) {
    if (stack->top == -1) {
        return false ;
    }
    *element = stack->stackMin[stack->top];
    return true ;
}
