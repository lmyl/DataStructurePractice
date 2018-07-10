//
//  LCBChapterEightFloyd.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/10.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightFloyd.h"
void displayFloyddWay(int distance[MaxVertex][MaxVertex] ,int pathAdjacent[MaxVertex][MaxVertex] ,int vertexsNumbers ) ;

void Floyd(MGraph graph)  {
    int distance[MaxVertex][MaxVertex] ;
    int pathAdjacent[MaxVertex][MaxVertex] ;
    for (int i = 0; i<graph.vertexsNumbers; i++) {
        for (int j = 0; j<graph.vertexsNumbers; j++) {
            distance[i][j] = graph.edges[i][j] ;
            if (distance[i][j] != 0 && distance[i][j] < INF) {
                pathAdjacent[i][j] = i ;
            }else{
                pathAdjacent[i][j] = -1 ;
            }
        }
    }
    for (int i = 0 ; i<graph.vertexsNumbers; i++) {
        for (int j = 0; j<graph.vertexsNumbers; j++) {
            for (int k = 0; k<graph.vertexsNumbers; k++) {
                if (distance[j][k] > distance[j][i] + distance[i][k]) {
                    distance[j][k] = distance[j][i] + distance[i][k] ;
                    pathAdjacent[j][k] = pathAdjacent[i][k] ;
                }
            }
        }
    }
    displayFloyddWay(distance, pathAdjacent, graph.vertexsNumbers);
}

void displayFloyddWay(int distance[MaxVertex][MaxVertex] ,int pathAdjacent[MaxVertex][MaxVertex] ,int vertexsNumbers ) {
    for (int i= 0 ; i<vertexsNumbers; i++) {
        for (int j = 0; j<vertexsNumbers; j++) {
            if (i == j) {
                continue ;
            }
            if (pathAdjacent[i][j] == -1) {
                printf("%d---%d无路径!\n",i,j) ;
                continue ;
            }
            printf("%d---%d有路径长%d\n",i,j,distance[i][j]) ;
            int way[MaxVertex] ;
            int countLength = 0 ;
            way[countLength] = j ;
            countLength ++ ;
            int pathAdjacentVertex = pathAdjacent[i][j] ;
            while (pathAdjacentVertex != i) {
                way[countLength] = pathAdjacentVertex ;
                countLength ++ ;
                pathAdjacentVertex = pathAdjacent[i][pathAdjacentVertex] ;
            }
            way[countLength] = i ;
            countLength ++ ;
            for (int k = countLength-1; k>=0; k--) {
                printf("%d  ",way[k]) ;
            }
            printf("\n") ;
        }
    }
}
