//
//  LCBXXZDChapterSixAlgorithmDesignFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSixAlgorithmDesignFive.h"


int maxSumSubSqueueInArray(int data[] , int numbers ) {
    int max = 0 ;
    int changed = 0 ;
    for (int i= 0; i<numbers; i++) {
        int sum = 0 ;
        for (int j = 0; i+j<numbers; j++) {
            sum += data[i+j] ;
            if (changed == 0) {
                max = sum ;
                changed ++ ;
            }else if (sum > max) {
                max = sum ;
            }
        }
    }
    return max ;
}


