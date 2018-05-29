//
//  LCBChapterFourExampleTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/29.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFourExampleTwo.h"


void findTheFirstSameContinuousTheMostLength(SqString string , int * index ,int *maxLength) {
    if (string.length == 0) {
        *index = 0 ;
        *maxLength = 0 ;
        return ;
    }
    int count = 1;
    int gobalMaxLength = 1;
    int gobalLocation = 1 ;
    int tempMaxLength = 1;
    int tempMaxLocation = 1 ;
    while (count < string.length) {
        if (string.data[count] == string.data[count-1]) {
            tempMaxLength ++ ;
        }else{
            if (tempMaxLength > gobalMaxLength) {
                gobalMaxLength = tempMaxLength;
                gobalLocation = tempMaxLocation ;
            }
            tempMaxLocation = count + 1;
            tempMaxLength = 1 ;
        }
        count ++ ;
    }
    if (tempMaxLength > gobalMaxLength) {
        gobalMaxLength = tempMaxLength;
        gobalLocation = tempMaxLocation ;
    }
    *index = gobalLocation;
    *maxLength = gobalMaxLength ;
}
