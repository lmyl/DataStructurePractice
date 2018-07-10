//
//  LCBChapterEightGraphTraversing.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightGraphTraversing.h"



void DFS(ALGraph *graph , int startVertex) {
    int visitFlag[MaxVertex] ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    DFSPrivate(graph, startVertex, visitFlag) ;
    printf("\n") ;
}

void DFSPrivate(ALGraph *graph , int startVertex , int visitFlag[MaxVertex]) {
    visitFlag[startVertex] = 1 ;
    printf("%d",startVertex) ;
    ArcNode * nextNode = graph->nextList[startVertex].firstArcNode ;
    while (nextNode != NULL ) {
        if (visitFlag[nextNode->vertexNumber] == 0) {
            DFSPrivate(graph, nextNode->vertexNumber, visitFlag) ;
        }
        nextNode = nextNode->nextVertex ;
    }
}

void BFS(ALGraph *graph ,int startVertex) {
    int visitFlag[MaxVertex] ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    BFSPrivate(graph, startVertex, visitFlag) ;
}

void BFSPrivate(ALGraph *graph , int startVertex , int visitFlag[MaxVertex]) {
    int queue[MaxVertex]  ;
    int rear = 0;
    int front = 0 ;
    rear = (rear + 1)%MaxVertex ;
    queue[rear] = startVertex ;
    visitFlag[startVertex] = 1 ;
    while (front != rear ) {
        front = (front + 1) %MaxVertex ;
        int nodeNumber = queue[front] ;
        printf("%d",nodeNumber) ;
        ArcNode * nextNode = graph->nextList[nodeNumber].firstArcNode ;
        while (nextNode != NULL) {
            if (visitFlag[nextNode->vertexNumber] == 0) {
                rear = (rear + 1)%MaxVertex ;
                queue[rear] = nextNode->vertexNumber ;
                visitFlag[nextNode->vertexNumber] = 1;
            }
            nextNode = nextNode->nextVertex ;
        }
    }
    printf("\n") ;
}

void NonConnectedGraphBFS(ALGraph *graph) {
    int visitFlag[MaxVertex] ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    for (int i= 0; i<graph->vertexsNumbers; i++) {
        if (visitFlag[i] == 0) {
            BFSPrivate(graph, i, visitFlag) ;
        }
    }
}

void NonConnectedGraphDFS(ALGraph *graph) {
    int visitFlag[MaxVertex] ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    for (int i= 0; i<graph->vertexsNumbers; i++) {
        if (visitFlag[i] == 0) {
            DFSPrivate(graph, i, visitFlag) ;
            printf("\n");
        }
    }
    
}
