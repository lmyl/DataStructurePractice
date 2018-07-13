//
//  LCBXXZDChapterEightAlgorithmDesignThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/12.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterEightAlgorithmDesignThree.h"

void displayVertexOfInVertexInHaveWeightAndDirectALGraph(ALGraph *graph , int vertex) {
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        if (i == vertex ) {
            continue ;
        }
        ArcNode *nextArcNode = graph->nextList[i].firstArcNode ;
        while (nextArcNode != NULL) {
            if (nextArcNode->vertexNumber == vertex) {
                printf("%d  ",i) ;
                break ;
            }
            nextArcNode = nextArcNode->nextVertex ;
        }
    }
    printf("\n");
}
