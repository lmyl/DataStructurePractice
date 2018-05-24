//
//  LCBChapterThreeStackApplicationOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/23.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreeStackApplicationOne.h"

typedef struct  {
    char perators ;
    int rank ;
}OperatorsRank;

OperatorsRank rightOperatorsRankSet[] = {{'=',0},{'(',6},{'+',2},{'-',2},{'*',4},{'/',4},{')',1}};
OperatorsRank leftOperatorsRankSet[] = {{'=',0},{'(',1},{'+',3},{'-',3},{'*',5},{'/',5},{')',6}};



void inputExpression(char *input) ;

SqStack * changeToSuffixExpression(char *input);

int suffixExpressionSolveValue(SqStack *stack) ;

int operatorsRankCompare(char left , char right) ;

void displaySuffixExpression(SqStack *suffixExpression) ;   //调试用



void expressionSolutionByStack(void)  {
    char input ;
    inputExpression(&input);
    SqStack *suffix = changeToSuffixExpression(&input);
    int result = suffixExpressionSolveValue(suffix);
    printf("%d\n",result);
    exit(0);    //编译器未知错误，需要在此处终止程序
}

int suffixExpressionSolveValue(SqStack *stack) {
    SqStack *finalCountStack = initSqStack() ;
    int intResult ;
    int numberValue = 0;
    while (popSq(stack, &intResult)) {
        char result = (char )intResult;
        int operationOne ,operationTwo ;
        switch (result) {
            case '+':
                if (popSq(finalCountStack, &operationOne) && popSq(finalCountStack, &operationTwo)) {
                    pushSq(finalCountStack, operationOne+operationTwo);
                }else{
                    printf("未知错误！");
                    exit(0);
                };
                break;
            case '-':
                if (popSq(finalCountStack, &operationOne) && popSq(finalCountStack, &operationTwo)) {
                    pushSq(finalCountStack, operationTwo-operationOne);
                }else{
                    printf("未知错误！");
                    exit(0);
                };
                break;
            case '*':
                if (popSq(finalCountStack, &operationOne) && popSq(finalCountStack, &operationTwo)) {
                    pushSq(finalCountStack, operationOne*operationTwo);
                }else{
                    printf("未知错误！");
                    exit(0);
                };
                break;
            case '/':
                if (popSq(finalCountStack, &operationOne) && popSq(finalCountStack, &operationTwo)) {
                    pushSq(finalCountStack, operationTwo/operationOne);
                }else{
                    printf("未知错误！");
                    exit(2);
                };
                break;
            default:
                if (result == '#') {
                    pushSq(finalCountStack, numberValue);
                    numberValue = 0 ;
                    break ;
                }
                numberValue = 10*numberValue + result - '0' ;
                break;
        }
    }
    int result ;
    if (getTopSq(finalCountStack, &result)) {
        return result ;
    }else{
        printf("未知错误！");
        exit(1);
    }
}

SqStack * changeToSuffixExpression(char *input) {
    SqStack *suffixExpressionStack = initSqStack();
    SqStack *operatorsStack = initSqStack();
    int count = 0 ;
    int flagNumberToOperation = 0 ;
    while (input[count] != '\0') {
        if (input[count] != '=' && input[count] != '+' && input[count] != '-' && input[count] != '*' && input[count] != '/' && input[count] != '(' && input[count] != ')') {
            int number = (int )input[count];
            pushSq(suffixExpressionStack, number);
            flagNumberToOperation = 1;
        }else{
            if (flagNumberToOperation == 1) {
                flagNumberToOperation = 0 ;
                pushSq(suffixExpressionStack, '#');
            }
            if (stackSqEmpty(operatorsStack)) {
                int number = (int )input[count];
                pushSq(operatorsStack,number);
            }else{
                int temp ;
                getTopSq(operatorsStack, &temp);
                char leftOperator = (char )temp ;
                while (operatorsRankCompare(leftOperator, input[count]) == -1) {
                    popSq(operatorsStack, &temp);
                    pushSq(suffixExpressionStack, temp);
                    if (getTopSq(operatorsStack, &temp)) {
                        leftOperator = (char )temp ;
                    }else{
                        int number = (int )input[count];
                        pushSq(operatorsStack, number);
                        goto Jump ;
                    }
                }
                if (operatorsRankCompare(leftOperator, input[count]) == 0) {
                    popSq(operatorsStack, &temp);
                }else{
                    int number = (int )input[count];
                    pushSq(operatorsStack, number);
                }
            }
        }
    Jump:
        count ++ ;
    }
    int temp ;
    count -- ;
    if (input[count] != '=' && input[count] != '+' && input[count] != '-' && input[count] != '*' && input[count] != '/' && input[count] != '(' && input[count] != ')') {
        pushSq(suffixExpressionStack, '#');
    }
    while (!stackSqEmpty(operatorsStack)) {
        popSq(operatorsStack, &temp);
        pushSq(suffixExpressionStack, temp);
    }
    SqStack *reverseSuffixExpressionStack = initSqStack();
    while (popSq(suffixExpressionStack, &temp)) {
        pushSq(reverseSuffixExpressionStack, temp);
    }
    return reverseSuffixExpressionStack ;
}


void inputExpression(char *input) {
    printf("请输入合法的表达式:\n");
    scanf("%s",input);
}

int operatorsRankCompare(char left , char right) {
    int leftLocation = 0 ;
    int rightLocation = 0;
    while (leftLocation < 7) {
        if (leftOperatorsRankSet[leftLocation].perators == left) {
            break ;
        }
        leftLocation ++ ;
    }
    while (rightLocation < 7) {
        if (rightOperatorsRankSet[rightLocation].perators == right) {
            break ;
        }
        rightLocation ++ ;
    }
    if (leftOperatorsRankSet[leftLocation].rank == rightOperatorsRankSet[rightLocation].rank) {
        return  0 ;
    }else if (leftOperatorsRankSet[leftLocation].rank < rightOperatorsRankSet[rightLocation].rank) {
        return 1 ;
    }else{
        return  -1 ;
    }
}

void displaySuffixExpression(SqStack *suffixExpression) {
    int action = suffixExpression->top ;
    while (action >= 0) {
        char temp = (char )suffixExpression->data[action];
        printf("%c",temp);
        action -- ;
    }
    printf("\n");
}
