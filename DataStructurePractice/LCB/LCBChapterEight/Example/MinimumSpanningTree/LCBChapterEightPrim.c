//
//  LCBChapterEightPrim.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/10.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightPrim.h"

void Prim(MGraph graph ,int startVertex) {
    int distance[MaxVertex] ;
    int adjacentVertex[MaxVertex] ;
    for (int i =0; i<graph.vertexsNumbers; i++) {
        distance[i] = graph.edges[startVertex][i] ;
        adjacentVertex[i] = startVertex ;
    }
    for (int i = 0; i<graph.vertexsNumbers-1; i++) {
        int minDistance = INF ;
        int minVertex = INF ;
        for (int j = 0; j<graph.vertexsNumbers; j++) {
            if (distance[j] != 0 && distance[j] < minDistance) {
                minDistance = distance[j] ;
                minVertex = j ;
            }
        }
        printf("%d---%d 距离%d\n" ,adjacentVertex[minVertex],minVertex,minDistance) ;
        distance[minVertex] = 0 ;
        for (int j= 0; j<graph.vertexsNumbers; j++) {
            if (distance[j] != 0 && graph.edges[j][minVertex] < distance[j]) {
                distance[j] = graph.edges[j][minVertex] ;
                adjacentVertex[j] = minVertex ;
            }
        }
    }
}
