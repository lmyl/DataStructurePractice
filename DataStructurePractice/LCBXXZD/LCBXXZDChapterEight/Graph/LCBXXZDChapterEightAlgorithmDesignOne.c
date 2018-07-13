//
//  LCBXXZDChapterEightAlgorithmDesignOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/12.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterEightAlgorithmDesignOne.h"

void addEdgeInHaveWeightAndDirectALGraph(ALGraph *graph,int startVertex , int endVertex ,int weight) {
    ArcNode *addArcNode = initArcNode() ;
    addArcNode->vertexNumber = endVertex ;
    addArcNode->info[0] = weight ;
    addArcNode->nextVertex = graph->nextList[startVertex].firstArcNode ;
    graph->nextList[startVertex].firstArcNode = addArcNode ;
    graph->edgesNumbers ++ ;
}
