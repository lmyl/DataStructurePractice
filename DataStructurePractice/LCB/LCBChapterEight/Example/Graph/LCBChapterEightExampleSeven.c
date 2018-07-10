//
//  LCBChapterEightExampleSeven.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/10.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightExampleSeven.h"

void findSpeciallyLengthPathInALGraphPrviate(ALGraph *graph , int way[MaxVertex] , int wayLength , int visitFlag[MaxVertex],int startVertex, int endVertex,int length) ;

void findSpeciallyLengthPathInALGraph(ALGraph *graph,int startVertex , int endVertex,int length) {
    int way[MaxVertex] ;
    int visitFlag[MaxVertex] ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    findSpeciallyLengthPathInALGraphPrviate(graph, way, 0, visitFlag, startVertex, endVertex,length) ;
}

void findSpeciallyLengthPathInALGraphPrviate(ALGraph *graph , int way[MaxVertex] , int wayLength , int visitFlag[MaxVertex],int startVertex, int endVertex,int length) {
    visitFlag[startVertex] = 1 ;
    wayLength ++ ;
    way[wayLength-1] = startVertex ;
    if (startVertex == endVertex && wayLength == length) {
        displayWayInALGraph(way, wayLength) ;
        visitFlag[startVertex] = 0 ;
        return ;
    }
    ArcNode *tempNode = graph->nextList[startVertex].firstArcNode ;
    while (tempNode != NULL) {
        if (visitFlag[tempNode->vertexNumber] == 0) {
            findSpeciallyLengthPathInALGraphPrviate(graph, way, wayLength, visitFlag, tempNode->vertexNumber,endVertex,length) ;
        }
        tempNode = tempNode->nextVertex ;
    }
    visitFlag[startVertex] = 0 ;
}
