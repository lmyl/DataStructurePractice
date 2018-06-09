//
//  LCBXXZDChapterSixAlgorithmDesignFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSixAlgorithmDesignFour.h"


void adjustIncreaseArray(int data[] , int numbers) {
    int count = 0;
    data[0] = 0 ;
    for (int i = 1; i<numbers; i++) {
        if (data[i] > data[i-1]) {
            data[i] = i;
            count = i;
        }else{
            data[i] = count ;
        }
    }
}
