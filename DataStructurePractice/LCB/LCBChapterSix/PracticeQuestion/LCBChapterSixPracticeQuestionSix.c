//
//  LCBChapterSixPracticeQuestionSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/4.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSixPracticeQuestionSix.h"

bool computerMatrixDiagonalSum(TSMatrix matrix,int *sum) {
    if (matrix.cols != matrix.rows) {
        return false ;
    }
    *sum = 0 ;
    int count = 0;
    while (count < matrix.numbers) {
        if (matrix.data[count].row == matrix.data[count].col) {
            *sum += matrix.data[count].data ;
        }
        count ++ ;
    }
    return true ;
}
