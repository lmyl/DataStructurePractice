//
//  LCBChapterSixPracticeQuestionOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/4.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSixPracticeQuestionOne.h"

void findElementInSortArray(int data[Row][Col] ,int row,int col, int *locationRow,int *locationCol,int element) {
    int startRow = 0;
    int startCol = col - 1;
    while (data[startRow][startCol] != element) {
        if (data[startRow][startCol] > element) {
            startRow -- ;
        }else if (data[startRow][startCol] < element) {
            startCol ++ ;
        }
    }
    *locationCol = startCol;
    *locationRow = startRow ;
}
