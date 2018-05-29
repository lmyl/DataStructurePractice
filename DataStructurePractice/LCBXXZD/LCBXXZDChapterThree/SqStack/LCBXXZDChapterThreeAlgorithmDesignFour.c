//
//  LCBXXZDChapterThreeAlgorithmDesignFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterThreeAlgorithmDesignFour.h"


typedef struct {
    char element;
    int direct ;
}ElementNode;

typedef struct {
    ElementNode data[MaxSize];
    int top ;
}SerialStack;

ElementNode * initElementNode(void) {
    ElementNode *node = (ElementNode *)malloc(sizeof(ElementNode));
    return node ;
}

bool judgementStackingSequenceIsLegal(char *input , char *output) {
    int countInput = 0 ;
    int countOutput = 0 ;
    SerialStack *serial = (SerialStack *)malloc(sizeof(SerialStack));
    serial->top = -1;
    SqStack *stack = initSqStack() ;
    while (input[countInput] != '\0' && output[countOutput] != '\0') {
        if (stackSqEmpty(stack)) {
            int temp = (int )input[countInput] ;
            pushSq(stack, temp) ;
            ElementNode *node = initElementNode();
            node->direct = 1;
            node->element = input[countInput] ;
            serial->top ++;
            serial->data[serial->top] = *node ;
            countInput ++ ;
        }else{
            int temp ;
            getTopSq(stack, &temp);
            if (output[countOutput] == (char )temp) {
                popSq(stack, &temp);
                ElementNode *node = initElementNode();
                node->direct = -1;
                node->element = (char )temp ;
                serial->top ++;
                serial->data[serial->top] = *node ;
                countOutput ++ ;
            }else{
                pushSq(stack, input[countInput]);
                ElementNode *node = initElementNode();
                node->direct = 1;
                node->element = input[countInput] ;
                serial->top ++;
                serial->data[serial->top] = *node ;
                countInput ++ ;
            }
        }
    }
    if (input[countInput] == '\0' && output[countOutput] != '\0') {
        int temp ;
        while (output[countOutput] != '\0') {
            if (stackSqEmpty(stack)) {
                return false ;
            }
            getTopSq(stack, &temp);
            if (output[countOutput] == (char )temp) {
                popSq(stack, &temp);
                ElementNode *node = initElementNode();
                node->direct = -1;
                node->element = (char )temp ;
                serial->top ++;
                serial->data[serial->top] = *node ;
                countOutput ++ ;
            }else{
                return false ;
            }
        }
    }
    if (stackSqEmpty(stack) && input[countInput] == '\0' && output[countOutput] == '\0') {
        int count = 0 ;
        while (count <= serial->top ) {
            ElementNode node = serial->data[count] ;
            if (node.direct == -1) {
                printf("出栈%c\n",node.element);
            }else{
                printf("进栈%c\n",node.element);
            }
            count ++ ;
        }
        return true ;
    }else{
        return false;
    }
}
