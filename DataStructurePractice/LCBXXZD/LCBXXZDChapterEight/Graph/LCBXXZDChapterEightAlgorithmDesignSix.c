//
//  LCBXXZDChapterEightAlgorithmDesignSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/12.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterEightAlgorithmDesignSix.h"

ALGraph * reverseAdjacencyListByALGraph(ALGraph *graph) {
    ALGraph *reverse = initALGraph() ;
    reverse->edgesNumbers = graph->edgesNumbers;
    reverse->vertexsNumbers  = graph->vertexsNumbers ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        reverse->nextList[i].firstArcNode = NULL ;
    }
    for (int j = 0; j<graph->vertexsNumbers; j++) {
        ArcNode *nextArcNode = graph->nextList[j].firstArcNode ;
        while (nextArcNode != NULL) {
            ArcNode *node = initArcNode() ;
            node->vertexNumber = j ;
            node->nextVertex = reverse->nextList[nextArcNode->vertexNumber].firstArcNode ;
            reverse->nextList[nextArcNode->vertexNumber].firstArcNode = node ;
            nextArcNode = nextArcNode->nextVertex ;
        }
    }
    return reverse ;
}
