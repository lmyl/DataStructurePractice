//
//  LCBXXZDChapterEightAlgorithmDesignSeven.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/12.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterEightAlgorithmDesignSeven.h"

void DFSInMGraphPrivate(MGraph graph,int startVertex,int visitFlag[MaxVertex],int resultArray[MaxVertex],int *resultLength) ;

void DFSInMGraph(MGraph graph,int startVertex) {
    int visitFlag[MaxVertex] ;
    for (int i = 0; i<graph.vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    int resultArray[MaxVertex] ;
    int resultLength = -1 ;
    DFSInMGraphPrivate(graph, startVertex, visitFlag,resultArray,&resultLength);    //有可能是Xcode的bug，会出现printf函数出现崩溃，因此只好使用数组保存递归的值最后打印
    for (int i = 0; i<=resultLength; i++) {
        printf("%d",resultArray[i]) ;
    }
    printf("\n");
}

void DFSInMGraphPrivate(MGraph graph,int startVertex,int visitFlag[MaxVertex],int resultArray[MaxVertex],int *resultLength) {
    visitFlag[startVertex] = 1 ;
    *resultLength = *resultLength + 1 ;
    resultArray[*resultLength] = startVertex ;
    for (int i = 0; i<graph.vertexsNumbers; i++) {
        if (i == startVertex || graph.edges[startVertex][i] == 0 || graph.edges[startVertex][i] == INF) {
            continue ;
        }
        if (visitFlag[i] == 0) {
            DFSInMGraphPrivate(graph, i, visitFlag,resultArray,resultLength) ;
        }
    }
}

