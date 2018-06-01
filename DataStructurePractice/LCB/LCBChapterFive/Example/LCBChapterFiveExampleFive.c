//
//  LCBChapterFiveExampleFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFiveExampleFive.h"

#define MaxSize 500
#define Row 10
#define Col 10

typedef struct {
    int row ;
    int col ;
}mazeBoxbyRecursive;

typedef struct {
    mazeBoxbyRecursive data[MaxSize];
    int length ;
}mazePathByRecursive;


int mazeMapByRecursive[Row][Col] = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,0,0,1,0,0,0,1,0,1},
    {1,0,0,1,0,1,0,1,0,1},
    {1,0,0,0,0,0,1,0,0,1},
    {1,0,1,1,1,0,1,0,0,1},
    {1,0,1,0,1,0,0,0,1,1},
    {1,0,1,0,0,0,1,0,0,1},
    {1,0,1,1,1,1,1,1,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1}
};


void displayRecursiveWay(mazePathByRecursive mazeWayPath) ;
void solvingMazeMapByRecursive(int inportRow,int inportCol,int exportRow,int exportCol , mazePathByRecursive path) ;

void findMazeOfExportByRecursive(int inportRow,int inportCol,int exportRow,int exportCol)  {
    mazePathByRecursive path ;
    path.length = -1 ;
    solvingMazeMapByRecursive(inportRow,inportCol,exportRow,exportCol,path) ;
}

void solvingMazeMapByRecursive(int inportRow,int inportCol,int exportRow,int exportCol , mazePathByRecursive path) {
    if (inportRow == exportRow && inportCol == exportCol) {
        mazeBoxbyRecursive box = {exportRow,exportCol} ;
        path.length ++ ;
        path.data[path.length] = box;
        displayRecursiveWay(path) ;
        return ;
    }
    if (mazeMapByRecursive[inportRow][inportCol] == 0) {
        int direct = 0 ;
        mazeBoxbyRecursive box = {inportRow , inportCol};
        mazeMapByRecursive[inportRow][inportCol] = -1 ;
        path.length ++ ;
        path.data[path.length] = box ;
        while (direct < 4) {
            int nextRow = inportRow;
            int nextCol = inportCol;
            switch (direct) {
                case 0:
                    nextRow = inportRow - 1 ;
                    break;
                case 1:
                    nextCol = inportCol + 1 ;
                    break ;
                case 2:
                    nextRow = inportRow + 1 ;
                    break ;
                case 3:
                    nextCol = inportCol - 1 ;
                    break ;
                default:
                    printf("状态异常%d\n",direct);
                    exit(1);
                    break;
            }
            solvingMazeMapByRecursive(nextRow, nextCol, exportRow, exportCol, path);
            direct ++ ;
        }
        mazeMapByRecursive[inportRow][inportCol] = 0 ;
        path.length -- ;
    }
}

void displayRecursiveWay(mazePathByRecursive mazeWayPath) {
    for (int i = 0; i<mazeWayPath.length; i++) {
        printf("(%d,%d)->",mazeWayPath.data[i].row,mazeWayPath.data[i].col);
    }
    printf("(%d,%d)\n",mazeWayPath.data[mazeWayPath.length].row,mazeWayPath.data[mazeWayPath.length].col);
    
}

