//
//  LCBXXZDChapterEightAlgorithmDesignElevenTwelve.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterEightAlgorithmDesignElevenTwelve_h
#define LCBXXZDChapterEightAlgorithmDesignElevenTwelve_h

#include <stdio.h>
#include "LCBChapterEightALGraph.h"

#define INF 32767
//假设一个带权有向图采用邻接表存储，设计源点v开始到各个顶点的最短路径长度的Dijkstra算法，并分析时间复杂度
//O(n^2)

void DijkstraInALGrpah(ALGraph *graph,int startVertex) ;
#endif /* LCBXXZDChapterEightAlgorithmDesignElevenTwelve_h */
