//
//  LCBXXZDChapterEightAlgorithmDesignEleven.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterEightAlgorithmDesignEleven.h"

int buildHospitalProblemInMGraph(MGraph graph) {
    int distance[MaxVertex][MaxVertex] ;
    int pathAdjacent[MaxVertex][MaxVertex] ;
    for (int i = 0; i<graph.vertexsNumbers; i++) {
        for (int j = 0; j<graph.vertexsNumbers; j++) {
            distance[i][j] = graph.edges[i][j] ;
            if (graph.edges[i][j] < INF && graph.edges[i][j] != 0) {
                pathAdjacent[i][j] = i ;
            }else{
                pathAdjacent[i][j] = -1 ;
            }
        }
    }
    for (int i = 0; i<graph.vertexsNumbers; i++) {
        for (int j = 0; j<graph.vertexsNumbers; j++) {
            for (int k = 0; k<graph.vertexsNumbers; k++) {
                if (distance[j][k] > distance[j][i] + distance[i][k]) {
                    distance[j][k] = distance[j][i] + distance[i][k] ;
                    pathAdjacent[j][k] = pathAdjacent[i][k] ;
                }
            }
        }
    }
    int gobalMaxDistance[MaxVertex] ;
    for (int i = 0; i<graph.vertexsNumbers; i++) {
        gobalMaxDistance[i]  = -1 ;
        for (int j = 0; j<graph.vertexsNumbers; j++) {
            if (j == i ) {
                continue ;
            }
            if (distance[j][i] > gobalMaxDistance[i]) {
                gobalMaxDistance[i]  = distance[j][i] ;
            }
        }
    }
    int gobalMinVertex  = -1 ;
    int gobalMinDistance = INF ;
    for (int i = 0; i<graph.vertexsNumbers; i++) {
        if (gobalMaxDistance[i] < gobalMinDistance) {
            gobalMinVertex = i ;
            gobalMinDistance = gobalMaxDistance[i] ;
        }
    }
    return gobalMinVertex ;
}
