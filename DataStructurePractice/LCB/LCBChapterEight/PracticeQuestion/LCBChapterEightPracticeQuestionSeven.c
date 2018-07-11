//
//  LCBChapterEightPracticeQuestionSeven.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/11.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightPracticeQuestionSeven.h"

void DFSNoRecursive(ALGraph *graph,int startVertex) {
    int visitedFlag[MaxVertex] ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        visitedFlag[i] = 0 ;
    }
    int stack[MaxVertex] ;
    int top = -1 ;
    top ++ ;
    stack[top] =  startVertex ;
    while (top != -1) {
        int tempVertex = stack[top] ;
        top -- ;
        if (visitedFlag[tempVertex] == 1) {
            continue ;
        }
        printf("%d",tempVertex) ;
        visitedFlag[tempVertex] = 1 ;
        ArcNode *node = graph->nextList[tempVertex].firstArcNode ;
        while (node != NULL) {
            top ++ ;
            stack[top] = node->vertexNumber ;
            node = node->nextVertex ;
        }
    }
    printf("\n");
}
