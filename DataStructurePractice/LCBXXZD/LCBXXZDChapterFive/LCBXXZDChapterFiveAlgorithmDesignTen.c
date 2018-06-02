//
//  LCBXXZDChapterFiveAlgorithmDesignTen.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/2.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterFiveAlgorithmDesignTen.h"

#define MaxSize 500

typedef struct {
    char data[MaxSize] ;
    int top ;
}CharSqStack;

void stringPopStackArrangementByReverse(char string[],CharSqStack *stack , int nowLocation,char data[],int dataLength,int numbers,int *count) ;

void stringPopStackArrangement(char string[] , int numbers) {
    CharSqStack *stack = (CharSqStack *)malloc(sizeof(CharSqStack)) ;
    stack->top = -1 ;
    char data[numbers] ;
    int count = 0 ;
    stringPopStackArrangementByReverse(string, stack, 1, data, 0, numbers, &count);
}


void stringPopStackArrangementByReverse(char string[],CharSqStack *stack , int nowLocation,char data[],int dataLength,int numbers,int *count) {
    CharSqStack stackTemp ;
    stackTemp.top = -1 ;
    if (nowLocation == numbers + 1) {
        *count = *count + 1;
        printf("第%d组：",*count) ;
        while (stack->top != -1) {
            dataLength ++ ;
            data[dataLength-1] = stack->data[stack->top] ;
            stackTemp.top ++ ;
            stackTemp.data[stackTemp.top] = stack->data[stack->top] ;
            stack->top -- ;
        }
        for (int i = 0; i<numbers; i++) {
            printf("%c ",data[i]) ;
        }
        printf("\n");
        while (stackTemp.top != -1) {
            dataLength -- ;
            stack->top ++ ;
            stack->data[stack->top] = stackTemp.data[stackTemp.top] ;
            stackTemp.top -- ;
        }
        return ;
    }else{
        int countStack = stack->top;
        int pushLocation = 0 ;
        while (pushLocation <= countStack+1) {
            for (int i = 0; i<pushLocation; i++) {
                dataLength ++ ;
                data[dataLength-1] = stack->data[stack->top] ;
                stackTemp.top ++ ;
                stackTemp.data[stackTemp.top] = stack->data[stack->top];
                stack->top -- ;
            }
            stack->top ++ ;
            stack->data[stack->top] = string[nowLocation-1] ;
            stringPopStackArrangementByReverse(string,stack, nowLocation+1, data, dataLength,numbers,count) ;
            stack->top -- ;
            for (int i = 0; i<pushLocation; i++) {
                dataLength -- ;
                stack->top ++ ;
                stack->data[stack->top] = stackTemp.data[stackTemp.top] ;
                stackTemp.top -- ;
            }
            pushLocation ++ ;
        }
    }
}
