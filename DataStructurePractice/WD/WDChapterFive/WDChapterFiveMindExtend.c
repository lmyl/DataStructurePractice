//
//  WDChapterFiveMindExtend.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFiveMindExtend.h"

void BFSPrivateByWD(ALGraph *graph , int startVertex , int visitFlag[MaxVertex]) ;
bool isConnectedGraphByWD(ALGraph *graph) ;

void findAllCutPointInALGraph(ALGraph *graph)  {
    int cutPoint[MaxVertex] ;
    int length = 0 ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        ALGraph * newALGraph  = initALGraph() ;
        newALGraph->vertexsNumbers = graph->vertexsNumbers - 1 ;
        int  count =  0;
        for (int j = 0; j<graph->vertexsNumbers; j++) {
            if (j == i) {
                continue ;
            }
            newALGraph->nextList[count].firstArcNode = NULL ;
            ArcNode * existArcNode = graph->nextList[j].firstArcNode ;
            while (existArcNode != NULL) {
                if (existArcNode->vertexNumber == i) {
                    existArcNode = existArcNode->nextVertex ;
                    continue ;
                }
                ArcNode * newArcNode = initArcNode() ;
                newArcNode->info[0] = existArcNode->info[0];
                if (existArcNode->vertexNumber > i) {
                    newArcNode->vertexNumber = existArcNode->vertexNumber - 1 ;
                }else{
                    newArcNode->vertexNumber = existArcNode->vertexNumber ;
                }
                newArcNode->nextVertex = newALGraph->nextList[count].firstArcNode ;
                newALGraph->nextList[count].firstArcNode = newArcNode ;
                existArcNode = existArcNode->nextVertex ;
            }
            count ++ ;
        }
        if (!isConnectedGraphByWD(newALGraph)) {
            cutPoint[length] = i ;
            length ++ ;
        }
    }
    for (int i = 0; i<length; i++) {
        printf("%d  ",cutPoint[i]) ;
    }
}

void BFSPrivateByWD(ALGraph *graph , int startVertex , int visitFlag[MaxVertex]) {
    int queue[MaxVertex]  ;
    int rear = 0;
    int front = 0 ;
    rear = (rear + 1)%MaxVertex ;
    queue[rear] = startVertex ;
    visitFlag[startVertex] = 1 ;
    while (front != rear ) {
        front = (front + 1) %MaxVertex ;
        int nodeNumber = queue[front] ;
        ArcNode * nextNode = graph->nextList[nodeNumber].firstArcNode ;
        while (nextNode != NULL) {
            if (visitFlag[nextNode->vertexNumber] == 0) {
                rear = (rear + 1)%MaxVertex ;
                queue[rear] = nextNode->vertexNumber ;
                visitFlag[nextNode->vertexNumber] = 1;
            }
            nextNode = nextNode->nextVertex ;
        }
    }
}

bool isConnectedGraphByWD(ALGraph *graph) {
    int visitFlag[MaxVertex] ;
    for (int i =  0; i<graph->vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    BFSPrivateByWD(graph, 0, visitFlag);
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        if (visitFlag[i] == 0) {
            return false ;
        }
    }
    return true ;
}
