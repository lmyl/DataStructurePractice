//
//  LCBChapterEightTopologicalSorting.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/10.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightTopologicalSorting.h"

void TopologicalSort(ALGraph *graph)  {
    int stack[MaxVertex] ;
    int top  = -1 ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        graph->nextList[i].count = 0 ;
    }
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        ArcNode *nextVertex = graph->nextList[i].firstArcNode ;
        while (nextVertex != NULL) {
            graph->nextList[nextVertex->vertexNumber].count ++ ;
            nextVertex = nextVertex->nextVertex ;
        }
    }
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        if (graph->nextList[i].count == 0) {
            top ++ ;
            stack[top] = i ;
        }
    }
    while (top != -1) {
        int tempVertex = stack[top] ;
        top -- ;
        printf("%d",tempVertex) ;
        ArcNode *nextVertex = graph->nextList[tempVertex].firstArcNode ;
        while (nextVertex != NULL) {
            graph->nextList[nextVertex->vertexNumber].count -- ;
            if (graph->nextList[nextVertex->vertexNumber].count == 0) {
                top ++ ;
                stack[top] = nextVertex->vertexNumber;
            }
            nextVertex = nextVertex->nextVertex ;
        }
    }
    printf("\n");
}
