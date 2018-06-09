//
//  LCBXXZDChapterSixAlgorithmDesignSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSixAlgorithmDesignSix.h"

void serpentineStorageArray(int input[] , int numbers , int output[Row][Col])  {
    int steeringFlag = 3 ;
    int row = 0 ;
    int col = 0 ;
    output[0][0] = input[0];
    for (int i = 1; i<numbers*numbers; i++) {
        switch (steeringFlag) {
            case 3:
                col ++;
                output[row][col] = input[i] ;
                if (row == 0) {
                    steeringFlag = 2;
                }else if(row == numbers - 1) {
                    steeringFlag = 0 ;
                }
                break;
            case 2:
                col -- ;
                row ++ ;
                output[row][col] = input[i] ;
                if (row == numbers -1) {
                    steeringFlag = 3 ;
                }else if (col == 0 ) {
                    steeringFlag = 1 ;
                }
                break ;
            case 1:
                row ++ ;
                output[row][col] = input[i] ;
                if (col == 0) {
                    steeringFlag = 0 ;
                }else if (col == numbers - 1) {
                    steeringFlag = 2 ;
                }
                break ;
            case 0:
                col ++ ;
                row -- ;
                output[row][col] = input[i] ;
                if (col == numbers -1) {
                    steeringFlag = 1 ;
                }else if (row == 0) {
                    steeringFlag = 3 ;
                }
                break;
        }
    }
}
