//
//  LCBChapterThreeStackApplicationTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreeStackApplicationTwo.h"

#define MaxSize 500
#define Row 10
#define Col 10

typedef struct {
    int row ;
    int col ;
    int next ;
}mazeBox;

typedef struct {
    mazeBox data[MaxSize];
    int top ;
}mazeStack;


int mazeMap[Row][Col] = {
                         {1,1,1,1,1,1,1,1,1,1},
                         {1,0,0,1,0,0,0,1,0,1},
                         {1,0,0,1,0,0,0,1,0,1},
                         {1,0,0,0,0,1,1,0,0,1},
                         {1,0,1,1,1,0,0,0,0,1},
                         {1,0,1,0,1,0,0,0,0,1},
                         {1,0,1,0,0,0,1,0,0,1},
                         {1,0,1,1,1,0,1,1,0,1},
                         {1,0,0,0,0,0,0,0,0,1},
                         {1,1,1,1,1,1,1,1,1,1}
                        };


void displayWay(mazeStack mazeWayStack) ;

bool findMazeOfExport(int inportRow,int inportCol,int exportRow,int exportCol) {
    mazeBox inportBox = {inportRow,inportCol,-1};
    mazeStack mazeWayStack ;
    mazeWayStack.top = 0 ;
    mazeWayStack.data[mazeWayStack.top] = inportBox ;
    while (mazeWayStack.top >= 0) {
        mazeBox getOutTopMazeBox = mazeWayStack.data[mazeWayStack.top] ;
        if (getOutTopMazeBox.col == exportCol && getOutTopMazeBox.row == exportRow) {
            displayWay(mazeWayStack);
            return true;
        }
        mazeBox nextBox ;
        while (getOutTopMazeBox.next < 4) {
            getOutTopMazeBox.next ++ ;
            switch (getOutTopMazeBox.next) {
                case 0:
                    nextBox.col = getOutTopMazeBox.col ;
                    nextBox.row = getOutTopMazeBox.row - 1;
                    nextBox.next = -1 ;
                    break;
                case 1:
                    nextBox.col = getOutTopMazeBox.col + 1;
                    nextBox.row = getOutTopMazeBox.row ;
                    nextBox.next = -1 ;
                    break ;
                case 2:
                    nextBox.col = getOutTopMazeBox.col ;
                    nextBox.row = getOutTopMazeBox.row + 1;
                    nextBox.next = -1 ;
                    break ;
                default:
                    nextBox.col = getOutTopMazeBox.col - 1;
                    nextBox.row = getOutTopMazeBox.row ;
                    nextBox.next = -1 ;
                    break;
            }
            if (mazeMap[nextBox.row][nextBox.col] == 0) {
                break ;
            }
        }
        mazeWayStack.data[mazeWayStack.top].next = getOutTopMazeBox.next ;
        if (getOutTopMazeBox.next == 4) {
            mazeWayStack.top -- ;
            
            mazeMap[getOutTopMazeBox.row][getOutTopMazeBox.col] = 0 ;
        }else{
            mazeMap[nextBox.row][nextBox.col] = -1 ;
            mazeWayStack.top ++ ;
            mazeWayStack.data[mazeWayStack.top] = nextBox ;
        }
    }
    return false ;
}


void displayWay(mazeStack mazeWayStack) {
    mazeBox way[MaxSize] ;
    int count = 0 ;
    while (mazeWayStack.top >= 0) {
        way[count] = mazeWayStack.data[mazeWayStack.top];
        count ++ ;
        mazeWayStack.top -- ;
    }
    for (int i = count-1 ; i >= 1; i--) {
        printf("(%d,%d)->",way[i].row,way[i].col) ;
    }
    printf("(%d,%d)\n",way[0].row,way[0].col);
}




