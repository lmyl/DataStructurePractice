//
//  LCBXXZDChapterEightAlgorithmDesignEight.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/12.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterEightAlgorithmDesignEight.h"


void BFSInMGraph(MGraph graph , int startVertex) {
    int queue[MaxVertex] ;
    int rear = 0 ;
    int front = 0 ;
    int visitFlag[MaxVertex] ;
    for (int i = 0; i<graph.vertexsNumbers; i++) {
        visitFlag[i] = 0 ;
    }
    rear = (rear + 1) %MaxVertex ;
    queue[rear] = startVertex ;
    visitFlag[startVertex]  = 1 ;
    while (rear != front) {
        front = (front + 1)%MaxVertex ;
        int tempVertex = queue[front] ;
        printf("%d",tempVertex) ;
        for (int i = 0; i<graph.vertexsNumbers; i++) {
            if (i == tempVertex || graph.edges[tempVertex][i] == INF || graph.edges[tempVertex][i] == 0) {
                continue ;
            }
            if (visitFlag[i] == 0) {
                visitFlag[i] = 1 ;
                rear = (rear + 1) %MaxVertex ;
                queue[rear] = i ;
            }
        }
    }
    printf("\n");
}
