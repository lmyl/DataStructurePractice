//
//  LCBChapterThreeExampleFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/23.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreeExampleFour.h"

bool isSymmetryString(char *string) {
    int count = 0 ;
    SqStack *stack = initSqStack();
    while (string[count] != '\0') {
        pushSq(stack, string[count]);
        count ++;
    }
    count = 0 ;
    char temp ;
    int intTemp ;
    while (string[count] != '\0') {
        popSq(stack, &intTemp);
        temp = intTemp ;
        if (temp != string[count]) {
            return false ;
        }
        count ++ ;
    }
    return true ;
}
