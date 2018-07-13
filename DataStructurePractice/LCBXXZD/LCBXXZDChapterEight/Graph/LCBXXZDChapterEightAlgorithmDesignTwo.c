//
//  LCBXXZDChapterEightAlgorithmDesignTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/12.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterEightAlgorithmDesignTwo.h"

void deleteEdgeInHaveWeightAndDirectALGraph(ALGraph *graph,int startVertex , int endVertex ) {
    ArcNode *nextArcNode = graph->nextList[startVertex].firstArcNode ;
    if (nextArcNode->vertexNumber == endVertex) {
        graph->nextList[startVertex].firstArcNode = nextArcNode->nextVertex ;
        free(nextArcNode) ;
        return ;
    }
    ArcNode *preArcNode = nextArcNode ;
    nextArcNode = nextArcNode->nextVertex ;
    while (nextArcNode != NULL) {
        if (nextArcNode->vertexNumber == endVertex) {
            preArcNode->nextVertex  = nextArcNode->nextVertex ;
            free(nextArcNode) ;
            return ;
        }
        preArcNode = preArcNode->nextVertex ;
        nextArcNode = nextArcNode->nextVertex ;
    }
}
