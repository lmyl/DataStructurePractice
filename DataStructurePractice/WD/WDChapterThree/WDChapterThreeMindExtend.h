//
//  WDChapterThreeMindExtend.h
//  DataStructurePractice
//
//  Created by ly on 2018/6/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterThreeMindExtend_h
#define WDChapterThreeMindExtend_h

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MaxSize 500

typedef int ElemType;

typedef struct {
    ElemType stackMain[MaxSize] ;
    ElemType stackMin[MaxSize] ;
    int top ;
}DoubleSqStackInCustomize;

//设计一个栈，可以在O(1)的时间复杂度实现pop,push，和得到栈中最小值的min操作
DoubleSqStackInCustomize * initDoubleSqStackInCustomize(void) ;

bool popDoubleSqStackInCustomize(DoubleSqStackInCustomize *stack , ElemType *element) ;

bool pushDoubleSqStackInCustomize(DoubleSqStackInCustomize *stack , ElemType element) ;

bool minDoubleSqStackInCustomize(DoubleSqStackInCustomize *stack , ElemType *element) ;

#endif /* WDChapterThreeMindExtend_h */
