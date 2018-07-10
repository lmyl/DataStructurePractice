//
//  LCBChapterEightExampleTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightExampleTwo.h"

ALGraph * MatrixToList(MGraph graph) {
    ALGraph *resultGraph = initALGraph() ;
    resultGraph->edgesNumbers = graph.edgesNumbers ;
    resultGraph->vertexsNumbers = graph.vertexsNumbers ;
    for (int i= 0; i<resultGraph->vertexsNumbers; i++) {
        resultGraph->nextList[i].firstArcNode = NULL ;
    }
    for (int i = 0; i<graph.vertexsNumbers; i++) {
        for (int j = 0; j<graph.vertexsNumbers; j++) {
            if (graph.edges[i][j] != 0) {
                ArcNode * node = initArcNode() ;
                node->vertexNumber = j ;
                node->nextVertex =  resultGraph->nextList[i].firstArcNode ;
                resultGraph->nextList[i].firstArcNode = node ;
            }
        }
    }
    return resultGraph ;
}

MGraph ListToMatrix(ALGraph * graph) {
    MGraph resultGraph ;
    resultGraph.edgesNumbers = graph->edgesNumbers;
    resultGraph.vertexsNumbers = graph->vertexsNumbers ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        ArcNode * node = graph->nextList[i].firstArcNode ;
        while (node != NULL) {
            resultGraph.edges[i][node->vertexNumber] = 1 ;
            node = node->nextVertex ;
        }
    }
    return resultGraph ;
}
