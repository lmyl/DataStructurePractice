//
//  LCBChapterSixExampleTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/2.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSixExampleTwo.h"


bool addSparseMatrixTriad(TSMatrix addOne , TSMatrix addTwo , TSMatrix *result) {
    result->numbers = 0 ;
    if (addOne.cols != addTwo.cols || addOne.rows != addTwo.rows) {
        return false ;
    }
    result->cols = addTwo.cols;
    result->rows = addTwo.rows ;
    int indexOne = 0 ;
    int indexTwo = 0 ;
    while (indexOne < addOne.numbers && indexTwo < addTwo.numbers ) {
        if (addOne.data[indexOne].row < addTwo.data[indexTwo].row) {
            result->data[result->numbers] = addOne.data[indexOne] ;
            result->numbers ++ ;
            indexOne ++ ;
        }else if ( addOne.data[indexOne].row == addTwo.data[indexTwo].row && addOne.data[indexOne].col < addTwo.data[indexTwo].col) {
            result->data[result->numbers] = addOne.data[indexOne];
            result->numbers ++ ;
            indexOne ++ ;
        }else if ( addOne.data[indexOne].row == addTwo.data[indexTwo].row && addOne.data[indexOne].col == addTwo.data[indexTwo].col) {
            result->data[result->numbers] = addOne.data[indexOne] ;
            result->data[result->numbers].data = addOne.data[indexOne].data + addTwo.data[indexTwo].data ;
            result->numbers ++ ;
            indexTwo ++ ;
            indexOne ++ ;
        }else if (addOne.data[indexOne].row == addTwo.data[indexTwo].row && addOne.data[indexOne].col > addTwo.data[indexTwo].col) {
            result->data[result->numbers] = addTwo.data[indexTwo];
            result->numbers ++ ;
            indexTwo ++ ;
        }else {
            result->data[result->numbers] = addTwo.data[indexTwo];
            result->numbers ++ ;
            indexTwo ++ ;
        }
    }
    while (indexOne < addOne.numbers) {
        result->data[result->numbers] = addOne.data[indexOne] ;
        result->numbers ++ ;
        indexOne ++ ;
    }
    while (indexTwo < addTwo.numbers) {
        result->data[result->numbers] = addTwo.data[indexTwo];
        result->numbers ++ ;
        indexTwo ++ ;
    }
    return true ;
}
