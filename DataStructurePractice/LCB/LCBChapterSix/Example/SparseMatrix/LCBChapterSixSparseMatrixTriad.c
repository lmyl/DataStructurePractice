//
//  LCBChapterSixSparseMatrixTriad.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/2.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSixSparseMatrixTriad.h"

void creatTSMatria(TSMatrix *matrix , ElemType data[Row][Col],int row,int col)  {
    matrix->cols = col ;
    matrix->rows = row ;
    matrix->numbers = 0 ;
    for (int i = 0; i<row; i++) {
        for (int j = 0; j<col; j++) {
            if (data[i][j] != 0) {
                TupNode dataNode = {i,j,data[i][j]};
                matrix->numbers ++ ;
                matrix->data[matrix->numbers - 1] = dataNode ;
            }
        }
    }
}

bool valueAssignmentTSMatrix(TSMatrix *matrix , ElemType element , int row ,int col) {
    if (row >= matrix->rows || col >= matrix->cols || row < 0 || col < 0) {
        return false ;
    }
    int location = 0 ;
    while (location < matrix->numbers && matrix->data[location].row < row ) {
        location ++ ;
    }
    if (location == matrix->numbers || matrix->data[location].row > row ) {
        for (int i = matrix->numbers ; i>= location + 1; i--) {
            matrix->data[i] = matrix->data[i] ;
        }
        TupNode dataNode = {row,col,element};
        matrix->data[location] =  dataNode ;
        matrix->numbers ++ ;
        return true ;
    }else {
        while (location < matrix->numbers && matrix->data[location].row == row && matrix->data[location].col < col) {
            location ++ ;
        }
        if (location < matrix->numbers && matrix->data[location].row == row && matrix->data[location].col == col) {
            matrix->data[location].data = element ;
            return true ;
        }else{
            for (int i = matrix->numbers ; i>= location + 1; i--) {
                matrix->data[i] = matrix->data[i-1] ;
            }
            TupNode dataNode = {row,col,element};
            matrix->data[location] =  dataNode ;
            matrix->numbers ++ ;
            return true ;
        }
    }
}

bool assignmentToElement(TSMatrix matrix , ElemType *element , int row,int col) {
    if (row > matrix.rows || col > matrix.cols || row <= 0 || col <= 0) {
        return false ;
    }
    int location = 0 ;
    while (location < matrix.numbers && matrix.data[location].row < row) {
        location ++ ;
    }
    if (location == matrix.numbers || matrix.data[location].row > row) {
        return false ;
    }
    while (location < matrix.numbers && matrix.data[location].row == row && matrix.data[location].row < col ) {
        location ++ ;
    }
    if (location == matrix.numbers || matrix.data[location].row > row || matrix.data[location].row > col) {
        return false ;
    }
    *element = matrix.data[location].data ;
    return true ;
}

void dispalyTSMatrix(TSMatrix matrix) {
    printf("%d行 %d列 %d个元素\n",matrix.rows,matrix.cols,matrix.numbers) ;
    for (int i = 0; i<matrix.numbers; i++) {
        if (i != 0 && matrix.data[i].row != matrix.data[i - 1].row) {
            printf("\n") ;
        }
        printf("(%d,%d,%d)  ",matrix.data[i].row,matrix.data[i].col,matrix.data[i].data);
    }
    printf("\n") ;
}

void TranTatTSMatrix(TSMatrix matrix,TSMatrix *matrixResult) {
    matrixResult->numbers = 0;
    matrixResult->cols = matrix.rows;
    matrixResult->rows = matrix.cols;
    for (int i = 0; i<matrix.cols; i++) {
        for (int j = 0;j<matrix.numbers; j++) {
            if (matrix.data[j].col == i) {
                matrixResult->numbers ++ ;
                TupNode dataNode = {matrix.data[j].col,matrix.data[j].row,matrix.data[j].data};
                matrixResult->data[matrixResult->numbers - 1] = dataNode ;
            }
        }
    }
}
