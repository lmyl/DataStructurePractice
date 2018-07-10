//
//  LCBChapterEightExampleSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/10.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightExampleSix.h"

void findALLPathInALGraphPrivate(ALGraph *graph , int way[MaxVertex] , int wayLength , int visitFlag[MaxVertex],int startVertex, int endVertex) ;

void findALLPathInALGraph(ALGraph *graph,int startVertex , int endVertex) {
    int way[MaxVertex] ;
    int visitFlag[MaxVertex] ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    findALLPathInALGraphPrivate(graph, way, 0, visitFlag, startVertex, endVertex) ;
}


void findALLPathInALGraphPrivate(ALGraph *graph , int way[MaxVertex] , int wayLength , int visitFlag[MaxVertex],int startVertex, int endVertex) {
    visitFlag[startVertex] = 1 ;
    wayLength ++ ;
    way[wayLength-1] = startVertex ;
    if (startVertex == endVertex) {
        displayWayInALGraph(way, wayLength) ;
        visitFlag[startVertex] = 0 ;
        return ;
    }
    ArcNode *tempNode = graph->nextList[startVertex].firstArcNode ;
    while (tempNode != NULL) {
        if (visitFlag[tempNode->vertexNumber] == 0) {
            findALLPathInALGraphPrivate(graph, way, wayLength, visitFlag, tempNode->vertexNumber,endVertex) ;
        }
        tempNode = tempNode->nextVertex ;
    }
    visitFlag[startVertex] = 0 ;
}
