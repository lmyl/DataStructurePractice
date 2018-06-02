//
//  LCBChapterSixExampleOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/2.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSixExampleOne.h"

void josephProblem(int numbers ,int outNumber) {
    int data[numbers] ;
    for (int i = 0; i<numbers; i++) {
        data[i] = i + 1 ;
    }
    int start = 0 ;
    for (int i = 0; i<numbers; i++) {
        int out = (start + outNumber - 1) % (numbers - i) ;
        printf("%d  ",data[out]) ;
        start  = out  ;
        for (int j= out + 1; j <= numbers - i - 1; j++) {
            data[j-1] = data[j];
        }
    }
    printf("\n");
}
