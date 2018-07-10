//
//  LCBChapterEightExampleFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightExampleFour.h"

void findPathInALGraphPrviate(ALGraph *graph , int way[MaxVertex] , int wayLength , int visitFlag[MaxVertex],int startVertex , int endVertex) ;


void findPathInALGraph(ALGraph *graph,int startVertex , int endVertex) {
    int way[MaxVertex] ;
    int visitFlag[MaxVertex] ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    findPathInALGraphPrviate(graph, way, 0, visitFlag, startVertex, endVertex) ;
}

void findPathInALGraphPrviate(ALGraph *graph , int way[MaxVertex] , int wayLength , int visitFlag[MaxVertex],int startVertex, int endVertex) {
    visitFlag[startVertex] = 1 ;
    wayLength ++ ;
    way[wayLength-1] = startVertex ;
    if (startVertex == endVertex) {
        displayWayInALGraph(way, wayLength) ;
        return ;
    }
    ArcNode *tempNode = graph->nextList[startVertex].firstArcNode ;
    while (tempNode != NULL) {
        if (visitFlag[tempNode->vertexNumber] == 0) {
            findPathInALGraphPrviate(graph, way, wayLength, visitFlag, tempNode->vertexNumber,endVertex) ;
        }
        tempNode = tempNode->nextVertex ;
    }
}

void displayWayInALGraph(int way[MaxVertex] , int wayLength) {
    int count = 0 ;
    while (count < wayLength) {
        printf("%d",way[count]) ;
        count ++;
    }
    printf("\n");
}
