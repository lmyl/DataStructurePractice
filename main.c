//
//  main.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include <stdio.h>
#include "LCBChapterSixSparseMatrixTriad.h"



int main(int argc, const char * argv[]) {
    // insert code here...

    TSMatrix matrix ;
    int data[Row][Col] = {{0,0,1,0,0,0,0},{0,2,0,0,0,0,0},{3,0,0,0,0,0,0},{0,0,0,5,0,0,0},{0,0,0,0,6,0,0},{0,0,0,0,0,7,4}};
    creatTSMatria(&matrix, data, 6, 7);
    dispalyTSMatrix(matrix);
    valueAssignmentTSMatrix(&matrix, 90, 0, 2);
    dispalyTSMatrix(matrix);
    valueAssignmentTSMatrix(&matrix, 80, 4, 5);
    dispalyTSMatrix(matrix);
    int m =-1 ;
    assignmentToElement(matrix, &m, 3,3);
    printf("%d\n",m);
    TSMatrix martixTwo ;
    TranTatTSMatrix(matrix, &martixTwo);
    dispalyTSMatrix(martixTwo);
    return 0;
} 



