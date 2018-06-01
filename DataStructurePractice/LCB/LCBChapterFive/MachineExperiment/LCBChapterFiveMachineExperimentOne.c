//
//  LCBChapterFiveMachineExperimentOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFiveMachineExperimentOne.h"

#define MaxSize 500

typedef struct {
    int row ;
    int col ;
}QueeuLocationByRecursive;

typedef struct {
    QueeuLocationByRecursive location[MaxSize];
    int length ;
}QueeuLocationPath;

void displayCheckerboardByRecursive(int *checkboard ,int numbers)  ;
bool judgementPutableByRecursive(QueeuLocationByRecursive new,int *checkboard ,int numbers);
void solveQueenyRecursive(int newRow , int checkerboardLarge , int *checkboard,int *count) ;

void solveQueenProblemByRecursive(int checkerboardLarge)  {
    int countNumber = 0 ;
    int checkerboard[checkerboardLarge][checkerboardLarge] ;
    for (int i = 0; i<checkerboardLarge; i++) {
        for (int j = 0; j<checkerboardLarge; j++) {
            checkerboard[i][j] = 0 ;
        }
    }
    solveQueenyRecursive(0, checkerboardLarge, checkerboard,&countNumber) ;
}

void solveQueenyRecursive(int newRow , int checkerboardLarge , int *checkboard,int *count) {
    int newcol = 0 ;
    if (newRow == checkerboardLarge) {
        *count = *count + 1 ;
        printf("第%d组解\n",*count);
        displayCheckerboardByRecursive(checkboard, checkerboardLarge);
        return ;
    }
    while (newcol < checkerboardLarge) {
        QueeuLocationByRecursive new = {newRow,newcol} ;
        if (judgementPutableByRecursive(new,checkboard,checkerboardLarge)) {
            *(checkboard + newRow * checkerboardLarge + newcol) = 1 ;
            solveQueenyRecursive(newRow + 1, checkerboardLarge, checkboard,count) ;
            *(checkboard + newRow * checkerboardLarge + newcol) = 0 ;
        }
        newcol ++ ;
    }
}

void displayCheckerboardByRecursive(int *checkboard ,int numbers) {
    for (int i = 0; i<numbers; i++) {
        for (int j = 0; j<numbers; j++) {
            printf("%d ",*(checkboard + i * numbers + j));
        }
        printf("\n");
    }
}

bool judgementPutableByRecursive(QueeuLocationByRecursive new,int *checkboard ,int numbers) {
    int newCol = new.col;
    int newRow = new.row;
    for (int i = 0; i<numbers; i++) {
        if ( i != newRow && *(checkboard + i * numbers + newCol) == 1 ) {
            return false ;
        }
    }
    for (int i = newCol - 1; i>=0; i--) {
        if (newRow-newCol+i >= 0 && *(checkboard + (newRow-newCol+i)*numbers + i) == 1) {
            return false ;
        }
        if (newRow + newCol - i <= numbers-1 && *(checkboard + (newRow + newCol - i)*numbers + i) == 1) {
            return false ;
        }
    }
    for (int i = newCol +1; i<=numbers-1; i++) {
        if (newRow + newCol - i >= 0 && *(checkboard + (newRow + newCol - i)*numbers + i) == 1) {
            return false ;
        }
        if (newRow + i - newCol <= numbers-1 && *(checkboard +(newRow + i - newCol)*numbers + i) == 1) {
            return false ;
        }
    }
    return true ;
}

