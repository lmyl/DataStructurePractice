//
//  WDChapterFivePracticeQuestionFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFivePracticeQuestionFive.h"


typedef struct {
    int vertex ;
    double time ;
}VertexTime;

void topologicalSortByDFSPrivate(ALGraph *graph ,int startVertex,int visitFlag[MaxVertex]) ;
void heapSortVertexTimeShift(VertexTime timeSpend[MaxVertex] ,int low ,int up ) ;
void heapSortVertexTime(VertexTime timeSpend[MaxVertex] ,int vertexNumber) ;

void topologicalSortByDFS(ALGraph *graph) {
    int visitFlag[MaxVertex] ;
    VertexTime timeSpend[MaxVertex] ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        for (int j = 0; j<graph->vertexsNumbers; j++) {
            visitFlag[j] =  0;
        }
        time_t start ;
        time_t end ;
        time(&start);
        topologicalSortByDFSPrivate(graph, i, visitFlag) ;
        time(&end) ;
        double spend = difftime(end, start) ;
        VertexTime new = {i,spend} ;
        timeSpend[i] = new ;
    }
    heapSortVertexTime(timeSpend, graph->vertexsNumbers) ;
    for (int i = graph->vertexsNumbers - 1; i>=0; i--) {
        printf("%d",timeSpend[i].vertex) ;
    }
    printf("\n");
}

void topologicalSortByDFSPrivate(ALGraph *graph ,int startVertex,int visitFlag[MaxVertex]) {
    visitFlag[startVertex] = 1 ;
    ArcNode *nextArcNode = graph->nextList[startVertex].firstArcNode ;
    while (nextArcNode != NULL) {
        if (visitFlag[nextArcNode->vertexNumber] == 0) {
            topologicalSortByDFSPrivate(graph, nextArcNode->vertexNumber, visitFlag) ;
        }
        nextArcNode = nextArcNode->nextVertex ;
    }
}

void heapSortVertexTimeShift(VertexTime timeSpend[MaxVertex] ,int low ,int up ) {
    int i = low ;
    int j = 2 * low + 1 ;
    VertexTime temp = timeSpend[i] ;
    while (j <= up) {
        if (j < up && timeSpend[j].time < timeSpend[j+1].time) {
            j ++ ;
        }
        if (temp.time < timeSpend[j].time) {
            timeSpend[i] = timeSpend[j] ;
            i = j ;
            j = 2 * i + 1 ;
        }else{
            break ;
        }
    }
    timeSpend[i] = temp ;
}

void heapSortVertexTime(VertexTime timeSpend[MaxVertex] ,int vertexNumber) {
    for (int i = vertexNumber/2 - 1 ; i>=0; i--) {
        heapSortVertexTimeShift(timeSpend, i, vertexNumber-1) ;
    }
    for (int i = vertexNumber -1; i>=1; i--) {
        VertexTime temp = timeSpend[i] ;
        timeSpend[i] = timeSpend[0] ;
        timeSpend[0] = temp ;
        heapSortVertexTimeShift(timeSpend, 0, i-1) ;
    }
}
