//
//  LCBChapterThreeMachineExperimentSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/25.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreeMachineExperimentSix.h"

#define MaxSize 500

typedef struct {
    int row ;
    int col ;
    int nextcol ;
}QueeuLocation;

typedef struct {
    QueeuLocation location[MaxSize];
    int top ;
}QueeuLocationStack;

void displayCheckerboard(int *checkboard ,int numbers)  ;
bool judgementPutable(QueeuLocation new,int *checkboard ,int numbers);

bool solveQueenProblem(int checkerboardLarge) {
    int checkerboard[checkerboardLarge][checkerboardLarge] ;
    for (int i = 0; i<checkerboardLarge; i++) {
        for (int j = 0; j<checkerboardLarge; j++) {
            checkerboard[i][j] = 0 ;
        }
    }
    int countResult = 0;
    QueeuLocation startQueeu = {0,0,-1} ;
    checkerboard[0][0] = 1 ;
    QueeuLocationStack queeuLocation ;
    queeuLocation.top = 0;
    queeuLocation.location[queeuLocation.top] = startQueeu ;
NewResult:
    while (true) {
        if (queeuLocation.location[queeuLocation.top].row == 0 && queeuLocation.location[queeuLocation.top].col == checkerboardLarge) {
            break ;
        }
        QueeuLocation getTopStack = queeuLocation.location[queeuLocation.top] ;
        if (getTopStack.row == checkerboardLarge - 1) {
            countResult ++ ;
            printf("第%d组解\n",countResult);
            displayCheckerboard(&checkerboard, checkerboardLarge);
            if (queeuLocation.top == 0) {
                checkerboard[queeuLocation.location[queeuLocation.top].row][queeuLocation.location[queeuLocation.top].col] = 0 ;
                queeuLocation.location[queeuLocation.top].col ++ ;
                queeuLocation.location[queeuLocation.top].nextcol = -1 ;
                checkerboard[queeuLocation.location[queeuLocation.top].row][queeuLocation.location[queeuLocation.top].col] = 1 ;
            }else{
                queeuLocation.top -- ;
            }
            goto NewResult ;
        }
        QueeuLocation nextLocation = {getTopStack.row+1,getTopStack.nextcol+1,-1} ;
        if (getTopStack.nextcol < checkerboardLarge && getTopStack.nextcol>=0 && checkerboard[nextLocation.row][getTopStack.nextcol] == 1) {
            checkerboard[nextLocation.row][getTopStack.nextcol] = 0 ;
        }
        while (nextLocation.col < checkerboardLarge && !judgementPutable(nextLocation, &checkerboard, checkerboardLarge)) {
            nextLocation.col ++ ;
        }
        if (nextLocation.col == checkerboardLarge) {
            if (queeuLocation.top == 0) {
                checkerboard[queeuLocation.location[queeuLocation.top].row][queeuLocation.location[queeuLocation.top].col] = 0 ;
                queeuLocation.location[queeuLocation.top].col ++ ;
                queeuLocation.location[queeuLocation.top].nextcol = -1 ;
                checkerboard[queeuLocation.location[queeuLocation.top].row][queeuLocation.location[queeuLocation.top].col] = 1 ;
            }else{
                queeuLocation.top -- ;
            }
        }else{
            getTopStack.nextcol = nextLocation.col ;
            queeuLocation.location[queeuLocation.top].nextcol = nextLocation.col;
            queeuLocation.top ++ ;
            queeuLocation.location[queeuLocation.top] = nextLocation ;
            checkerboard[nextLocation.row][nextLocation.col] = 1 ;
        }
    }
    if (countResult == 0) {
        printf("无解！\n");
        return false ;
    }else{
        printf("有%d个解\n",countResult);
        return true ;
    }
}


void displayCheckerboard(int *checkboard ,int numbers) {
    for (int i = 0; i<numbers; i++) {
        for (int j = 0; j<numbers; j++) {
            printf("%d ",*(checkboard + i * numbers + j));
        }
        printf("\n");
    }
}

bool judgementPutable(QueeuLocation new,int *checkboard ,int numbers) {
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
