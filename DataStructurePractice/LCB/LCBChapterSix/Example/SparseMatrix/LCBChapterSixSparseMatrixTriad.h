//
//  LCBChapterSixSparseMatrixTriad.h
//  DataStructurePractice
//
//  Created by ly on 2018/6/2.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterSixSparseMatrixTriad_h
#define LCBChapterSixSparseMatrixTriad_h

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MaxSize 500
#define Row 20
#define Col 20

typedef int ElemType;

typedef struct {
    int row ;
    int col ;
    ElemType data ;
}TupNode;

typedef struct {
    int rows ;
    int cols ;
    int numbers ;
    TupNode data[MaxSize] ;
}TSMatrix;


//创建一个稀疏矩阵的三元组表示
void creatTSMatria(TSMatrix *matrix , ElemType data[Row][Col],int row,int col) ;

//三元组赋值
bool valueAssignmentTSMatrix(TSMatrix *matrix , ElemType element , int row ,int col) ;

//将指定位置的元素赋给变量
bool assignmentToElement(TSMatrix matrix , ElemType *element , int row,int col) ;

//输出三元组
void dispalyTSMatrix(TSMatrix matrix) ;

//矩阵转置
void TranTatTSMatrix(TSMatrix matrix,TSMatrix *matrixResult) ;


#endif /* LCBChapterSixSparseMatrixTriad_h */
