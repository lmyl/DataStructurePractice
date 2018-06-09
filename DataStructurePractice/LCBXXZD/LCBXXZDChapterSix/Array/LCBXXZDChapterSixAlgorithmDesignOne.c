//
//  LCBXXZDChapterSixAlgorithmDesignOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSixAlgorithmDesignOne.h"


int findTheLastMinElementInArray(int data[], int numbers ) {
    int min = data[0];
    int location =  0;
    for (int i = 0; i<numbers; i++) {
        if (data[i] <= min) {
            min = data[i];
            location = i ;
        }
    }
    return location ;
}
