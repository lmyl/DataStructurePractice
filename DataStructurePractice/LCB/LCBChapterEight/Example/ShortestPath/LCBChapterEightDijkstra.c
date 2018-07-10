//
//  LCBChapterEightDijkstra.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/10.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightDijkstra.h"

void displayDijkstraWay( MGraph graph, int pathAdjacent[MaxVertex] ,int distance[MaxVertex] ,int havePicked[MaxVertex] ,int startVertex) ;

void Dijkstra(MGraph graph,int startVertex) {
    int distance[MaxVertex] ;
    int pathAdjacent[MaxVertex] ;
    int havePicked[MaxVertex] ;
    int debugVertex = startVertex ; //未知bug，会导致startVertex值被改变
    for (int i = 0; i<graph.vertexsNumbers; i++) {
        distance[i] = graph.edges[startVertex][i] ;
        havePicked[i] = 0 ;
        if (graph.edges[startVertex][i] < INF) {
            pathAdjacent[i] = startVertex ;
        }else{
            pathAdjacent[i] = -1 ;
        }
    }
    havePicked[startVertex] = 1 ;
    pathAdjacent[startVertex] = startVertex ;
    for (int i = 0; i<graph.vertexsNumbers; i++) {
        int minDistance = INF ;
        int minVertex = -1 ;
        for (int j= 0; j<graph.vertexsNumbers; j++) {
            if (havePicked[j] == 0 && distance[j] < minDistance) {
                minDistance = distance[j] ;
                minVertex = j ;
            }
        }
        havePicked[minVertex] = 1 ;
        for (int j = 0; j<graph.vertexsNumbers; j++) {
            if (havePicked[j] == 0 && graph.edges[minVertex][j] < INF &&distance[j] > graph.edges[minVertex][j] + minDistance) {
                pathAdjacent[j] = minVertex ;
                distance[j] = graph.edges[minVertex][j] + minDistance ;
            }
        }
    }
    displayDijkstraWay(graph, pathAdjacent, distance, havePicked, debugVertex) ;
}


void displayDijkstraWay( MGraph graph,int pathAdjacent[MaxVertex] ,int distance[MaxVertex] ,int havePicked[MaxVertex] ,int startVertex) {
    for (int i = 0; i< graph.vertexsNumbers ; i++) {
        if (havePicked[i] == 0 || i == startVertex) {
            continue ;
        }
        int pathAdjacentVertex = pathAdjacent[i] ;
        if (pathAdjacentVertex == -1) {
            printf("%d---%d无路径!\n",startVertex,i) ;
            continue ;
        }
        printf("%d---%d有路径长%d\n",startVertex,i,distance[i]) ;
        int tempWay[MaxVertex] ;
        int countWayLength = 0 ;
        tempWay[countWayLength] = i ;
        while (pathAdjacentVertex != startVertex) {
            countWayLength ++ ;
            tempWay[countWayLength] = pathAdjacentVertex ;
            pathAdjacentVertex = pathAdjacent[pathAdjacentVertex] ;
        }
        countWayLength ++ ;
        tempWay[countWayLength] = startVertex ;
        for (int i = countWayLength; i>=0; i--) {
            printf("%d  ",tempWay[i]) ;
        }
        printf("\n") ;
    }
}
