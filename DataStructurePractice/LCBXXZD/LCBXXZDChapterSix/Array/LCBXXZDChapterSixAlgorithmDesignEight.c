//
//  LCBXXZDChapterSixAlgorithmDesignEight.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSixAlgorithmDesignEight.h"


void adjustArray(int data[] , int numbers)  {
    for (int i = 0; i<numbers; i++) {
        int count = 0 ;
        for (int j= 0; j<i; j++) {
            if (data[i] > data[j]) {
                count ++ ;
            }
        }
        data[i] = count ;
    }
}
