//
//  LCBXXZDChapterEightAlgorithmDesignFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/12.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterEightAlgorithmDesignFour.h"

void solvingConnectedComponentInNoDirectALGraphPrivate(ALGraph *graph , int startVertex , int visitFlag[MaxVertex],int fullFlag) ;

int solvingConnectedComponentInNoDirectALGraph(ALGraph *graph) {
    int visitFlag[MaxVertex] ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    int count = 0 ;
    for (int i  =0; i<graph->vertexsNumbers; i++) {
        if (visitFlag[i] == 0) {
            count ++ ;
            solvingConnectedComponentInNoDirectALGraphPrivate(graph, i, visitFlag, count) ;
            printf("\n") ;
        }
    }
    return count ;
}


void solvingConnectedComponentInNoDirectALGraphPrivate(ALGraph *graph , int startVertex , int visitFlag[MaxVertex],int fullFlag) {
    visitFlag[startVertex] = fullFlag ;
    printf("%d  ",startVertex) ;
    ArcNode * nextNode = graph->nextList[startVertex].firstArcNode ;
    while (nextNode != NULL ) {
        if (visitFlag[nextNode->vertexNumber] == 0) {
            solvingConnectedComponentInNoDirectALGraphPrivate(graph, nextNode->vertexNumber, visitFlag,fullFlag) ;
        }
        nextNode = nextNode->nextVertex ;
    }
}
