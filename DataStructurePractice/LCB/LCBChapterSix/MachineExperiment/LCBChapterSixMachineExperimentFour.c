//
//  LCBChapterSixMachineExperimentFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSixMachineExperimentFour.h"

bool MultiplyTSMatrix(TSMatrix matrixOne , TSMatrix matrixTwo , TSMatrix *result)  {
    int numbers = 0;
    if (matrixOne.cols != matrixTwo.rows) {
        return false ;
    }
    result->cols = matrixTwo.cols;
    result->rows = matrixOne.rows ;
    for (int i = 0; i<matrixOne.rows; i++) {
        for (int j = 0; j<matrixTwo.cols; j++) {
            int sum = 0 ;
            int count = 0 ;
            while (count < matrixOne.cols) {
                int tempOne ;
                if (!assignmentToElement(matrixOne, &tempOne, i, count)) {
                    tempOne = 0;
                }
                int tempTwo ;
                if (!assignmentToElement(matrixTwo, &tempTwo, count, j)) {
                    tempTwo = 0;
                }
                sum = sum + tempOne * tempTwo ;
                count ++;
            }
            if (sum != 0) {
                TupNode node = {i,j,sum } ;
                result->data[numbers] = node;
                numbers ++ ;
            }
        }
    }
    result->numbers = numbers ;
    return true ;
}
