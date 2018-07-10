//
//  LCBChapterEightExampleNine.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/10.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightExampleNine.h"



void findShortestPathInALGraphPrivate(ALGraph *graph  , int visitFlag[MaxVertex],int startVertex, int endVertex)  ;

void displayGraphQueuePath(VertexNode queue[MaxVertex] ,int front ) ;

void findShortestPathInALGraph(ALGraph *graph,int startVertex , int endVertex) {
    int visitFlag[MaxVertex] ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    findShortestPathInALGraphPrivate(graph, visitFlag, startVertex, endVertex) ;
}

void findShortestPathInALGraphPrivate(ALGraph *graph , int visitFlag[MaxVertex],int startVertex, int endVertex)  {
    VertexNode queue[MaxVertex] ;
    int rear = -1 ;
    int front = -1 ;
    visitFlag[startVertex] = 1;
    rear ++;
    VertexNode node = {startVertex,-1};
    queue[rear] = node ;
    int count = -1 ;
    while (rear != front) {
        front  ++ ;
        VertexNode tempVertex = queue[front] ;
        count ++ ;
        if (tempVertex.vertexNumber == endVertex) {
            displayGraphQueuePath(queue, front) ;
            return;
        }
        ArcNode *nextVertex = graph->nextList[tempVertex.vertexNumber].firstArcNode ;
        while (nextVertex != NULL) {
            if (visitFlag[nextVertex->vertexNumber] == 0) {
                rear ++ ;
                VertexNode tempNode = {nextVertex->vertexNumber,count};
                queue[rear] =  tempNode ;
                visitFlag[nextVertex->vertexNumber]  = 1 ;
            }
            nextVertex = nextVertex->nextVertex ;
        }
    }
}

void displayGraphQueuePath(VertexNode queue[MaxVertex] ,int front ) {
    VertexNode tempVertex = queue[front] ;
    printf("%d",tempVertex.vertexNumber) ;
    int parent = tempVertex.parent ;
    while (parent != -1) {
        tempVertex = queue[parent] ;
        printf("%d",tempVertex.vertexNumber) ;
        parent = tempVertex.parent ;
    }
    printf("\n");
}
