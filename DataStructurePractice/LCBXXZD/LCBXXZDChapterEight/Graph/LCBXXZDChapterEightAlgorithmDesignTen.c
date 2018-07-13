//
//  LCBXXZDChapterEightAlgorithmDesignTen.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/12.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterEightAlgorithmDesignTen.h"


int diameterOfAcyclicConnectedGraphPirvate(MGraph graph,int visitFlag[MaxVertex] ,int upStartVertex,int startVertex ,int endVertex,int wayLength) ;

int diameterOfAcyclicConnectedGraph(MGraph graph) {
    int visitFlag[MaxVertex] ;
    int gobalMaxDistance = -1 ;
    for (int i = 0 ; i<graph.vertexsNumbers; i++) {
        int closestDistance[MaxVertex] ;
        for (int j = 0; j<graph.vertexsNumbers; j++) {
            for (int k = 0; k<graph.vertexsNumbers; k++) {
                visitFlag[k] = 0 ;
            }
            closestDistance[j] = diameterOfAcyclicConnectedGraphPirvate(graph, visitFlag, i,i, j, 0) ;
        }
        int maxDistance = -1 ;
        for (int k = 0; k<graph.vertexsNumbers; k++) {
            if (closestDistance[k] > maxDistance) {
                maxDistance = closestDistance[k] ;
            }
        }
        if (maxDistance > gobalMaxDistance) {
            gobalMaxDistance = maxDistance ;
        }
    }
    return gobalMaxDistance ;
}


int diameterOfAcyclicConnectedGraphPirvate(MGraph graph,int visitFlag[MaxVertex] ,int upStartVertex,int startVertex ,int endVertex,int wayLength) {
    visitFlag[startVertex] = 1 ;
    wayLength += graph.edges[upStartVertex][startVertex] ;
    if (startVertex == endVertex) {
        return wayLength ;
    }
    for (int i = 0; i<graph.vertexsNumbers; i++) {
        int tempLength = -1 ;
        if (i == startVertex || graph.edges[startVertex][i] == INF || graph.edges[startVertex][i] == 0) {
            continue ;
        }
        if (visitFlag[i] == 0) {
            tempLength = diameterOfAcyclicConnectedGraphPirvate(graph, visitFlag,startVertex, i,endVertex, wayLength) ;
            if (tempLength >=1) {
                return tempLength ;
            }
        }
    }
    return -1 ;
}
