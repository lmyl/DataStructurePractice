//
//  LCBXXZDChapterEightAlgorithmDesignFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/12.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterEightAlgorithmDesignFive.h"

bool isExistPathInALGraphByDFS(ALGraph *graph,int startVertex , int endVertex) {
    return isExistPathInALGraph(graph, startVertex, endVertex) ;
}

bool isExistPathInALGraphByBFS(ALGraph *graph,int startVertex , int endVertex)  {
    int visitFlag[MaxVertex] ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    int queue[MaxVertex] ;
    int rear = 0 ;
    int front = 0 ;
    rear = (rear + 1)%MaxVertex ;
    queue[rear] = startVertex ;
    visitFlag[startVertex] = 1 ;
    while (rear != front) {
        front = (front + 1) %MaxVertex ;
        int tempVertex  = queue[front] ;
        if (tempVertex == endVertex) {
            return true ;
        }
        ArcNode *nextArcNode = graph->nextList[tempVertex].firstArcNode ;
        while (nextArcNode != NULL) {
            if (visitFlag[nextArcNode->vertexNumber] == 0) {
                rear = (rear + 1)%MaxVertex ;
                queue[rear] = nextArcNode->vertexNumber ;
                visitFlag[nextArcNode->vertexNumber] = 1 ;
            }
            nextArcNode = nextArcNode->nextVertex ;
        }
    }
    return false ;
}
