//
//  LCBXXZDChapterEightAlgorithmDesignOne.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/12.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterEightAlgorithmDesignOne_h
#define LCBXXZDChapterEightAlgorithmDesignOne_h

#include <stdio.h>
#include "LCBChapterEightALGraph.h"

//假设带权有向图G采用邻接表存储，设计一个算法增加一条边<i,j>,其权值为w，假设顶点i,j已存在，原来图中不存在<i,j>遍

void addEdgeInHaveWeightAndDirectALGraph(ALGraph *graph,int startVertex , int endVertex ,int weight) ;
#endif /* LCBXXZDChapterEightAlgorithmDesignOne_h */
