//
//  LCBChapterSixMachineExperimentOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/5.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSixMachineExperimentOne.h"

void makeSpiralSquare(int number)  {
    int data[number][number] ;
    int row = 0 ;
    int col = 0 ;
    int rowUp = -1 ;
    int rowLow = number ;
    int colUp = number  ;
    int colLow = -1 ;
    int direct = 0 ;
    int count = 1 ;
    while (count < number * number + 1) {
        data[row][col] = count ;
        if (direct == 0) {
            if (col == colUp -1) {
                direct = 1;
                rowUp = row ;
            }
        }else if (direct == 1) {
            if (row == rowLow - 1) {
                direct = 2;
                colUp = col ;
            }
        }else if (direct == 2) {
            if (col == colLow + 1) {
                direct = 3 ;
                rowLow = row ;
            }
        }else{
            if (direct == 3) {
                if (row == rowUp + 1) {
                    direct = 0 ;
                    colLow = col ;
                }
            }
        }
        switch (direct) {
            case 1:
                row ++ ;
                break;
            case 2 :
                col -- ;
                break ;
            case 3 :
                row -- ;
                break;
            case 0:
                col ++ ;
                break ;
        }
        count ++ ;
    }
    for (int i = 0; i<number; i++) {
        for (int j= 0; j<number; j++) {
            printf("%d  ",data[i][j]) ;
        }
        printf("\n");
    }
}
