//
//  WDChapterFivePracticeQuestionOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFivePracticeQuestionOne.h"

void isTreeByNoDirectALGraphPrivate(ALGraph *graph,int visitFLag[MaxVertex],int startVertex,int *edgesNumbers ,int *vertexNumbers) ;

bool isTreeByNoDirectALGraph(ALGraph *graph)  {
    int visitFlag[MaxVertex] ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    int edgesNumbers = 0 ;
    int vertexNumbers = 0 ;
    isTreeByNoDirectALGraphPrivate(graph, visitFlag, 0, &edgesNumbers, &vertexNumbers) ;
    if (edgesNumbers == 2*(graph->edgesNumbers) && vertexNumbers == graph->vertexsNumbers) {
        return true ;
    }
    return false ;
}

void isTreeByNoDirectALGraphPrivate(ALGraph *graph,int visitFLag[MaxVertex],int startVertex,int *edgesNumbers, int *vertexNumbers) {
    *vertexNumbers = *vertexNumbers + 1 ;
    visitFLag[startVertex]  = 1 ;
    ArcNode *nextNode = graph->nextList[startVertex].firstArcNode ;
    while (nextNode != NULL) {
        *edgesNumbers = *edgesNumbers + 1 ;
        if (visitFLag[nextNode->vertexNumber] == 0) {
            isTreeByNoDirectALGraphPrivate(graph, visitFLag, nextNode->vertexNumber, edgesNumbers,vertexNumbers) ;
        }
        nextNode = nextNode->nextVertex ;
    }
}
