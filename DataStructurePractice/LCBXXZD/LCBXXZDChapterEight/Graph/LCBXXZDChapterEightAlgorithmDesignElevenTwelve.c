//
//  LCBXXZDChapterEightAlgorithmDesignElevenTwelve.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterEightAlgorithmDesignElevenTwelve.h"

int DijkstraInALGrpahPrivate(ALGraph *graph,int startVertex,int endVertex) ;
void displayDijkstraInALGrpahWay(ALGraph *graph ,int startVertex,int distance[MaxVertex] ,int pathAdjacent[MaxVertex], int havePicked[MaxVertex]) ;

void DijkstraInALGrpah(ALGraph *graph,int startVertex)  {
    int distance[MaxVertex] ;
    int pathAdjacent[MaxVertex] ;
    int havePicked[MaxVertex] ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        havePicked[i] = 0;
        distance[i] = INF ;
        pathAdjacent[i] = -1 ;
    }
    ArcNode *nextArcNode = graph->nextList[startVertex].firstArcNode ;
    while (nextArcNode != NULL) {
        distance[nextArcNode->vertexNumber] = nextArcNode->info[0] ;
        pathAdjacent[nextArcNode->vertexNumber] = startVertex ;
        nextArcNode = nextArcNode->nextVertex ;
    }
    havePicked[startVertex] = 1 ;
    pathAdjacent[startVertex] = startVertex ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        int minDistance = INF ;
        int minDistanceVertex = -1 ;
        for (int j = 0; j<graph->vertexsNumbers; j++) {
            if (havePicked[j] == 0 && distance[j] < minDistance) {
                minDistance = distance[j] ;
                minDistanceVertex  = j ;
            }
        }
        havePicked[minDistanceVertex] = 1 ;
        for (int j = 0; j<graph->vertexsNumbers; j++) {
            int distanceTwoPoint = DijkstraInALGrpahPrivate(graph, minDistanceVertex, j) ;
            if (havePicked[j] == 0 && distanceTwoPoint < INF && distance[j] > minDistance + distanceTwoPoint) {
                distance[j] = distance[minDistanceVertex] + distanceTwoPoint ;
                pathAdjacent[j] = minDistanceVertex ;
            }
        }
    }
    displayDijkstraInALGrpahWay(graph, startVertex, distance, pathAdjacent, havePicked) ;
}

int DijkstraInALGrpahPrivate(ALGraph *graph,int startVertex,int endVertex) {
    int distance = INF ;
    ArcNode *nextNode = graph->nextList[startVertex].firstArcNode;
    while (nextNode != NULL) {
        if (nextNode->vertexNumber == endVertex) {
            distance = nextNode->info[0] ;
            return distance ;
        }
        nextNode = nextNode->nextVertex ;
    }
    return distance ;
}

void displayDijkstraInALGrpahWay(ALGraph *graph ,int startVertex,int distance[MaxVertex] ,int pathAdjacent[MaxVertex], int havePicked[MaxVertex]) {
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        if (i == startVertex) {
            continue ;
        }
        if (havePicked[i] == 0) {
            printf("%d---%d无路径\n",startVertex,i) ;
            continue ;
        }
        printf("%d---%d有路径长%d     路径:",startVertex,i,distance[i]) ;
        int way[MaxVertex] ;
        int wayLength = -1 ;
        wayLength ++ ;
        way[wayLength] = i ;
        int parentVertex = pathAdjacent[i] ;
        while (parentVertex != startVertex) {
            wayLength ++;
            way[wayLength] = parentVertex ;
            parentVertex = pathAdjacent[parentVertex] ;
        }
        wayLength ++ ;
        way[wayLength] = startVertex ;
        for (int j = wayLength; j>= 0; j--) {
            printf("%d  ",way[j]) ;
        }
        printf("\n") ;
    }
}
