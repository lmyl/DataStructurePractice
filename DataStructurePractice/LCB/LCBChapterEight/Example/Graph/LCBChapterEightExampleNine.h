//
//  LCBChapterEightExampleNine.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/10.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterEightExampleNine_h
#define LCBChapterEightExampleNine_h

#include <stdio.h>
#include "LCBChapterEightALGraph.h"

//图采用邻接表存储，设计一个算法，求不带权连通图G中从顶点u到v的最短路径

typedef struct {
    int vertexNumber ;
    int parent ;
}VertexNode;


void findShortestPathInALGraph(ALGraph *graph,int startVertex , int endVertex) ;

void displayGraphQueuePath(VertexNode queue[MaxVertex] ,int front ) ;
#endif /* LCBChapterEightExampleNine_h */
