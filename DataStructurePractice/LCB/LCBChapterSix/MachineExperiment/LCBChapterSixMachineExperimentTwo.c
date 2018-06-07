//
//  LCBChapterSixMachineExperimentTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/5.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSixMachineExperimentTwo.h"

typedef struct {
    int row ;
    int col ;
    int value ;
}ArrayNode;

void outputSaddlePoint(int data[Row][Col],int row, int col) {
    int minRowValue ;
    int minRowCol ;
    ArrayNode backupTemp[col] ;
    int backupTempLength = 0 ;
    ArrayNode backup[row * col] ;
    int backupLength = 0 ;
    for (int i = 0; i<row; i++) {
        backupTempLength = 0 ;
        for (int j =0; j<col; j++) {
            if (j == 0 ) {
                minRowValue = data[i][j];
                minRowCol = 0 ;
                ArrayNode node = {i,j,minRowValue};
                backupTemp[backupTempLength] = node ;
                backupTempLength ++ ;
            }else if (data[i][j] < minRowValue){
                minRowValue = data[i][j];
                minRowCol = j ;
                backupTempLength = 1 ;
                ArrayNode node = {i,minRowCol,minRowValue} ;
                backupTemp[backupTempLength - 1] = node ;
            }else if (data[i][j] == minRowValue) {
                ArrayNode node = {i,j,minRowValue};
                backupTemp[backupTempLength] = node ;
                backupTempLength ++ ;
            }
        }
        while (backupTempLength != 0) {
            int countRow = 0 ;
            for (; countRow<row; countRow++) {
                if (data[countRow][backupTemp[backupTempLength-1].col] > backupTemp[backupTempLength-1].value) {
                    break ;
                }
            }
            if (countRow == row) {
                backup[backupLength] = backupTemp[backupTempLength-1] ;
                backupLength ++ ;
            }
            backupTempLength -- ;
        }
    }
    printf("共%d个马鞍点\n",backupLength);
    for (int i = 0; i<backupLength; i++) {
        printf("(%d,%d,%d)\n",backup[i].row,backup[i].col,backup[i].value) ;
    }
    
}
