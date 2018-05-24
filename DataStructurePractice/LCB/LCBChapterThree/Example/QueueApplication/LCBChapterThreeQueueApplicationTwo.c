//
//  LCBChapterThreeQueueApplicationTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreeQueueApplicationTwo.h"

#define MaxSize 500
#define Row 10
#define Col 10

typedef struct {
    int row;
    int col;
    int pre;
}MazeBox;


typedef struct {
    MazeBox data[MaxSize] ;
    int front ;
    int rear ;
}MazeQueue;

int mazeMapArray[Row][Col] = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,0,0,1,0,0,0,1,0,1},
    {1,0,0,1,0,0,0,1,0,1},
    {1,0,0,0,0,1,1,0,0,1},
    {1,0,1,1,1,0,0,0,0,1},
    {1,0,0,0,1,0,0,0,0,1},
    {1,0,1,0,0,0,1,0,0,1},
    {1,0,1,1,1,0,1,1,0,1},
    {1,1,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1}
    };

void displayWayQueue(MazeQueue mazeWay) ;

bool findMazeOfExportByQueue(int inportRow,int inportCol,int exportRow,int exportCol) {
    MazeBox inportBox = {inportRow,inportCol,-1} ;
    MazeQueue mazeWayQueue ;
    mazeWayQueue.front = -1;
    mazeWayQueue.rear = 0 ;
    mazeWayQueue.data[0] = inportBox;
    mazeMapArray[inportRow][inportCol] = -1;
    int count = -1 ;
    while (mazeWayQueue.rear != mazeWayQueue.front) {
        mazeWayQueue.front ++ ;
        MazeBox getRearBox = mazeWayQueue.data[mazeWayQueue.front];
        count ++ ;
        if (getRearBox.row == exportRow && getRearBox.col == exportCol) {
            displayWayQueue(mazeWayQueue);
            return true ;
        }
        for (int i = 0; i<4; i++) {
            MazeBox nextBox ;
            switch (i) {
                case 0:
                    nextBox.col = getRearBox.col ;
                    nextBox.row = getRearBox.row - 1 ;
                    nextBox.pre = count ;
                    break;
                case 1:
                    nextBox.col = getRearBox.col + 1 ;
                    nextBox.row = getRearBox.row  ;
                    nextBox.pre = count ;
                    break ;
                case 2:
                    nextBox.col = getRearBox.col  ;
                    nextBox.row = getRearBox.row + 1 ;
                    nextBox.pre = count ;
                    break ;
                default:
                    nextBox.col = getRearBox.col - 1 ;
                    nextBox.row = getRearBox.row  ;
                    nextBox.pre = count ;
                    break;
            }
            if (mazeMapArray[nextBox.row][nextBox.col] == 0) {
                mazeWayQueue.rear ++ ;
                mazeWayQueue.data[mazeWayQueue.rear] = nextBox ;
                mazeMapArray[nextBox.row][nextBox.col] = -1 ;
            }
        }
    }
    return false ;
}

void displayWayQueue(MazeQueue mazeWay)  {
    MazeBox way[MaxSize] ;
    int count = 0 ;
    MazeBox getRearBox = mazeWay.data[mazeWay.front];
    while (getRearBox.pre != -1) {
        way[count] = getRearBox ;
        count ++ ;
        getRearBox = mazeWay.data[getRearBox.pre] ;
    }
    way[count] = getRearBox ;
    while (count >= 1) {
        printf("(%d,%d)->",way[count].row,way[count].col);
        count -- ;
    }
    printf("(%d,%d)\n",way[0].row,way[0].col);
}
