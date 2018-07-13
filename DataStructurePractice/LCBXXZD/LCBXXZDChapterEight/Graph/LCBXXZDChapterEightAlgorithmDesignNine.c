//
//  LCBXXZDChapterEightAlgorithmDesignNine.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/12.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterEightAlgorithmDesignNine.h"

void rootInHaveDirectMGraphPrivate(MGraph graph , int startVertex , int visitFlag[MaxVertex]) ;


int rootInHaveDirectMGraph(MGraph graph) {
    int visitFlag[MaxVertex] ;
    for (int i = 0; i<graph.vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    for (int i = 0; i<graph.vertexsNumbers; i++) {
        int count = 0 ;
        rootInHaveDirectMGraphPrivate(graph, i, visitFlag) ;
        for (int j = 0; j<graph.vertexsNumbers; j++) {
            if (visitFlag[j] == 1) {
                count ++ ;
            }
            visitFlag[j] = 0 ;
        }
        if (count == graph.vertexsNumbers) {
            return i ;
        }
    }
    return -1 ;
}

void rootInHaveDirectMGraphPrivate(MGraph graph , int startVertex , int visitFlag[MaxVertex]) {
    visitFlag[startVertex] = 1 ;
    for (int i = 0; i<graph.vertexsNumbers; i++) {
        if (i == startVertex || graph.edges[startVertex][i] == 0 || graph.edges[startVertex][i] == INF ) {
            continue ;
        }
        if (visitFlag[i] == 0) {
            rootInHaveDirectMGraphPrivate(graph, i, visitFlag) ;
        }
    }
}


