//
//  LCBXXZDChapterSixAlgorithmDesignTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSixAlgorithmDesignTwo.h"

bool sumLowerTriangleInArray(int data[Row][Col] ,int row, int col,int *result) {
    if (row != Col || row <=0 || col <=0) {
        return false ;
    }
    int sum = 0;
    for (int i = 0; i<row; i++) {
        for (int j = 0;j<=i; j++) {
            sum += data[i][j];
        }
    }
    *result = sum ;
    return true ;
}
