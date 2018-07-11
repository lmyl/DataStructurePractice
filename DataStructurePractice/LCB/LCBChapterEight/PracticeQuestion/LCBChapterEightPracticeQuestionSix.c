//
//  LCBChapterEightPracticeQuestionSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/11.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightPracticeQuestionSix.h"

void countOutDegreeInALGraph(ALGraph *graph) {
    for (int i  =0; i<graph->vertexsNumbers; i++) {
        ArcNode *nextArcNode = graph->nextList[i].firstArcNode ;
        int count =  0 ;
        while (nextArcNode != NULL) {
            count ++ ;
            nextArcNode = nextArcNode->nextVertex ;
        }
        graph->nextList[i].countOutDegree = count ;
        printf("%d : 出度%d\n",i,count) ;
    }
    
}

int maxOutDegreeInALGraph(ALGraph *graph) {
    int maxOutDegree = -1 ;
    int maxOutVertex = -1 ;
    for (int i  =0; i<graph->vertexsNumbers; i++) {
        ArcNode *nextArcNode = graph->nextList[i].firstArcNode ;
        int count =  0 ;
        while (nextArcNode != NULL) {
            count ++ ;
            nextArcNode = nextArcNode->nextVertex ;
        }
        graph->nextList[i].countOutDegree = count ;
        if (count > maxOutDegree) {
            maxOutDegree = count ;
            maxOutVertex = i ;
        }
    }
    return maxOutVertex ;
}

int countNoOutDegreeInALGraph(ALGraph *graph) {
    int noOutDegreeCount = 0 ;
    for (int i  =0; i<graph->vertexsNumbers; i++) {
        ArcNode *nextArcNode = graph->nextList[i].firstArcNode ;
        int count =  0 ;
        while (nextArcNode != NULL) {
            count ++ ;
            nextArcNode = nextArcNode->nextVertex ;
        }
        graph->nextList[i].countOutDegree = count ;
        if (count == 0) {
            noOutDegreeCount ++ ;
        }
    }
    return noOutDegreeCount ;
}

bool isExistEdgeInALGraph(ALGraph *graph , int startVertex , int endVertex) {
    if (startVertex < 0 || startVertex >= graph->vertexsNumbers || endVertex < 0 || endVertex >= graph->vertexsNumbers) {
        return false ;
    }
    ArcNode *nextArcNode = graph->nextList[startVertex].firstArcNode ;
    while (nextArcNode != NULL) {
        if (nextArcNode->vertexNumber == endVertex) {
            return true ;
        }
        nextArcNode = nextArcNode->nextVertex ;
    }
    return false ;
}
