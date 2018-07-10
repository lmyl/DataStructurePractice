//
//  LCBChapterEightExampleEight.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/10.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightExampleEight.h"

void findALLLoopPathInALGraphPrivate(ALGraph *graph , int way[MaxVertex] , int wayLength , int visitFlag[MaxVertex],int startVertex,int endVertex) ;

void findALLLoopPathInALGraph(ALGraph *graph,int startVertex) {
    int way[MaxVertex] ;
    int visitFlag[MaxVertex] ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    findALLLoopPathInALGraphPrivate(graph, way, 0, visitFlag, startVertex, startVertex) ;
}

void findALLLoopPathInALGraphPrivate(ALGraph *graph , int way[MaxVertex] , int wayLength , int visitFlag[MaxVertex],int startVertex,int endVertex) {
    if (startVertex != endVertex && visitFlag[startVertex] == 1) {
        return ;
    }
    visitFlag[startVertex] = 1 ;
    wayLength ++ ;
    way[wayLength-1] = startVertex ;
    if (startVertex == endVertex && wayLength >= 2) {
        displayWayInALGraph(way, wayLength) ;
        return ;
    }
    ArcNode *tempNode = graph->nextList[startVertex].firstArcNode ;
    while (tempNode != NULL) {
            findALLLoopPathInALGraphPrivate(graph, way, wayLength, visitFlag, tempNode->vertexNumber,endVertex) ;
        tempNode = tempNode->nextVertex ;
    }
    visitFlag[startVertex] = 0 ;
}
