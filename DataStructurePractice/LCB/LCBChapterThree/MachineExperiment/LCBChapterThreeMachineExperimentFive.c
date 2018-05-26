//
//  LCBChapterThreeMachineExperimentFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/25.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreeMachineExperimentFive.h"

#define MaxSize 500
#define MazeRow 10
#define MazeCol 10

typedef struct {
    int row;
    int col;
    int next;
}MazeBoxType;


typedef struct {
    MazeBoxType data[MaxSize];
    int top ;
}MazeStack;

int mazeMapByMachineExperiment[MazeRow][MazeCol] = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,0,0,1,0,0,0,1,0,1},
    {1,0,0,1,0,0,0,1,0,1},
    {1,0,0,0,0,1,1,0,0,1},
    {1,0,1,1,1,0,0,0,0,1},
    {1,0,1,0,1,0,0,0,0,1},
    {1,0,0,0,0,0,1,0,0,1},
    {1,0,1,1,1,0,1,1,0,1},
    {1,1,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1}
};

void displayAllWay(MazeStack wayStack);

bool findAllMazeOfExportByStack(int inportRow,int inportCol , int exportRow,int exportCol) {
    MazeStack shortest[1]  ;
    shortest[0].top = -1 ;
    MazeBoxType startBox = {inportRow,inportCol,-1};
    mazeMapByMachineExperiment[inportRow][inportCol] = -1;
    MazeStack mazeWayStack ;
    mazeWayStack.top = 0 ;
    mazeWayStack.data[mazeWayStack.top] = startBox ;
    int countNumber = 0 ;
    NextWay:
    while (mazeWayStack.top != -1) {
        MazeBoxType getOutBox = mazeWayStack.data[mazeWayStack.top] ;
        if (getOutBox.row == exportRow && getOutBox.col == exportCol) {
            countNumber ++ ;
            printf("第%d条路径\n",countNumber);
            displayAllWay(mazeWayStack);
            if (shortest[0].top == -1 ) {
                shortest[0] = mazeWayStack;
            }else if (shortest[0].top > mazeWayStack.top ) {
                shortest[0] = mazeWayStack ;
            }
            mazeWayStack.top -- ;
            mazeMapByMachineExperiment[exportRow][exportCol] = 0 ;
            goto NextWay ;
        }
        MazeBoxType nextBox ;
        while (getOutBox.next < 4) {
            getOutBox.next ++ ;
            if (getOutBox.next == 4) {
                break ;
            }
            switch (getOutBox.next) {
                case 0:
                    nextBox.col = getOutBox.col;
                    nextBox.row = getOutBox.row -1 ;
                    nextBox.next = -1;
                    break;
                case 1:
                    nextBox.col = getOutBox.col + 1;
                    nextBox.row = getOutBox.row ;
                    nextBox.next = -1;
                    break;
                case 2:
                    nextBox.col = getOutBox.col;
                    nextBox.row = getOutBox.row + 1;
                    nextBox.next = -1;
                    break;
                case 3:
                    nextBox.col = getOutBox.col - 1;
                    nextBox.row = getOutBox.row ;
                    nextBox.next = -1;
                    break;
            }
            if (mazeMapByMachineExperiment[nextBox.row][nextBox.col] == 0) {
                break ;
            }
        }
        mazeWayStack.data[mazeWayStack.top].next = getOutBox.next ;
        if (getOutBox.next == 4) {
            mazeMapByMachineExperiment[getOutBox.row][getOutBox.col] = 0;
            mazeWayStack.top -- ;
        }else{
            mazeWayStack.top ++ ;
            mazeWayStack.data[mazeWayStack.top] = nextBox ;
            mazeMapByMachineExperiment[getOutBox.row][getOutBox.col] = -1 ;
        }
    }
    if (shortest[0].top == -1) {
        printf("无路径！");
        return false ;
    }else{
        printf("最短路径如下:\n");
        displayAllWay(shortest[0]);
        printf("最短路径长度:%d\n",shortest[0].top + 1) ;
        return true ;
    }
    
}

void displayAllWay(MazeStack wayStack) {
    MazeBoxType data[MaxSize] ;
    int count = 0 ;
    while (wayStack.top != -1) {
        data[count] = wayStack.data[wayStack.top];
        wayStack.top -- ;
        count ++ ;
    }
    for (int i = count - 1; i>=1; i--) {
        printf("(%d,%d)->",data[i].row,data[i].col);
    }
    printf("(%d,%d)\n",data[0].row,data[0].col);
}
