//
//  WDChapterFivePracticeQuestionThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFivePracticeQuestionThree.h"

bool isExistPathInALGraphDFSByWD(ALGraph *graph,int startVertex , int endVertex) {
    return isExistPathInALGraph(graph, startVertex, endVertex) ;
}

bool isExistPathInALGraphBFSByWD(ALGraph *graph,int startVertex , int endVertex) {
    int queue[MaxVertex] ;
    int rear = 0 ;
    int front = 0 ;
    int visitFlag[MaxVertex] ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    rear = (rear + 1) %MaxVertex ;
    queue[rear] = startVertex ;
    visitFlag[startVertex] = 1 ;
    while (rear != front) {
        front = (front + 1)%MaxVertex ;
        int tempVertex = queue[front] ;
        if (tempVertex == endVertex) {
            return true ;
        }
        ArcNode *nextNode = graph->nextList[tempVertex].firstArcNode ;
        while (nextNode != NULL) {
            if (visitFlag[nextNode->vertexNumber] == 0) {
                rear = (rear + 1) %MaxVertex ;
                queue[rear] = nextNode->vertexNumber ;
                visitFlag[nextNode->vertexNumber] = 1 ;
            }
            nextNode = nextNode->nextVertex ;
        }
    }
    return false ;
}
