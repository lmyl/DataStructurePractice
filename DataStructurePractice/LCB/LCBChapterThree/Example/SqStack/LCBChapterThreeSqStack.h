//
//  LCBChapterThreeSqStack.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/23.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterThreeSqStack_h
#define LCBChapterThreeSqStack_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MaxSize 500


typedef int ElemType;

typedef struct {
    ElemType data[MaxSize];
    int top ;
}SqStack ;


//初始化
SqStack * initSqStack(void) ;

//销毁栈
void destorySqStack(SqStack *stack) ;

//判断栈是否为空
bool stackSqEmpty(SqStack *stack);

//进栈
bool pushSq(SqStack *stack,ElemType element);

//出栈
bool popSq(SqStack *stack,ElemType *element);

//取栈顶元素
bool getTopSq(SqStack *stack,ElemType *element);



#endif /* LCBChapterThreeSqStack_h */
