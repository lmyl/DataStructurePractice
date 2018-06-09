//
//  LCBXXZDChapterSixAlgorithmDesignThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSixAlgorithmDesignThree.h"

void pretreatment(int input[Row][Col] , int output[Row][Col] , int row ,int col)  {
    output[0][0] = input[0][0] ;
    for (int i = 1; i<row; i++) {
        output[0][i] = input[0][i] + output[0][i-1] ;
    }
    for (int i = 1; i<col; i++) {
        output[i][0] = input[i][0] + output[i-1][0] ;
    }
    for (int i = 1; i<col; i++) {
        for (int j = 1; j<row; j++) {
            output[i][j] = input[i][j] + output[i][j-1] + output[i-1][j] - output[i-1][j-1] ;
        }
    }
}


int sumSubmatrix(int input[Row][Col] , int row , int col ,int locationLowRow , int locationLowCol , int locationUpRow , int locationUpCol ) {
    if (locationLowCol >= 1 && locationLowRow >= 1) {
        return input[locationUpRow][locationUpCol] + input[locationLowRow-1][locationLowCol-1] - input[locationLowRow-1][locationUpCol] - input[locationUpRow][locationLowCol-1] ;
    }else if (locationLowRow == 0 && locationLowCol >= 1) {
        return input[locationUpRow][locationUpCol] - input[locationUpRow][locationLowCol-1] ;
    }else if (locationLowRow >= 1 && locationLowCol == 0) {
        return input[locationUpRow][locationUpCol] - input[locationLowRow-1][locationUpCol] ;
    }else {
        return input[locationUpRow][locationUpCol] ;
    }
}
