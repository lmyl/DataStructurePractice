//
//  LCBChapterEightPracticeQuestionFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/11.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightPracticeQuestionFive.h"

void displayALGraph(ALGraph *graph) {
    printf("%d个顶点  %d条边\n",graph->vertexsNumbers,graph->edgesNumbers) ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        printf("%d :  ",i) ;
        ArcNode * nextArcNode = graph->nextList[i].firstArcNode ;
        while (nextArcNode != NULL) {
            printf("  %d  ",nextArcNode->vertexNumber) ;
            nextArcNode = nextArcNode->nextVertex ;
        }
        printf("\n") ;
    }
}
