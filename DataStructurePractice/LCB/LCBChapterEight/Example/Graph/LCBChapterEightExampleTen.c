//
//  LCBChapterEightExampleTen.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/10.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightExampleTen.h"

int findLongestPathInALGraphPrivate(ALGraph *graph  , int visitFlag[MaxVertex],int startVertex)  ;


int findLongestPathInALGraph(ALGraph *graph,int startVertex)  {
    int visitFlag[MaxVertex] ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    return findLongestPathInALGraphPrivate(graph, visitFlag, startVertex);
}

int findLongestPathInALGraphPrivate(ALGraph *graph  , int visitFlag[MaxVertex],int startVertex)  {
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
    return queue[front].vertexNumber ;
}
