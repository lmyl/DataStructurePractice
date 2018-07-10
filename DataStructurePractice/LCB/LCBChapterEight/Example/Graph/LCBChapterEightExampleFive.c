//
//  LCBChapterEightExampleFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/10.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightExampleFive.h"

void isExistPathInALGraphPrviate(ALGraph *graph , int visitFlag[MaxVertex],int startVertex, int endVertex,bool *find) ;

bool isExistPathInALGraph(ALGraph *graph,int startVertex , int endVertex) {
    bool find = false ;
    int visitFlag[MaxVertex] ;
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    isExistPathInALGraphPrviate(graph,  visitFlag, startVertex, endVertex,&find) ;
    return find ;
}

void isExistPathInALGraphPrviate(ALGraph *graph , int visitFlag[MaxVertex],int startVertex, int endVertex,bool *find) {
    visitFlag[startVertex] = 1 ;
    if (startVertex == endVertex) {
        *find = true ;
        return ;
    }
    ArcNode *tempNode = graph->nextList[startVertex].firstArcNode ;
    while (tempNode != NULL) {
        if (visitFlag[tempNode->vertexNumber] == 0) {
            isExistPathInALGraphPrviate(graph, visitFlag, tempNode->vertexNumber,endVertex,find) ;
        }
        tempNode = tempNode->nextVertex ;
    }
}
