//
//  LCBXXZDChapterEightAlgorithmDesignTwo.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/12.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterEightAlgorithmDesignTwo_h
#define LCBXXZDChapterEightAlgorithmDesignTwo_h

#include <stdio.h>
#include "LCBChapterEightALGraph.h"

//假设带权有向图G采用邻接表存储，设计一个算法删除一条边<i,j>,其权值为w，假设顶点i,j已存在，原来图中存在<i,j>遍

void deleteEdgeInHaveWeightAndDirectALGraph(ALGraph *graph,int startVertex , int endVertex ) ;

#endif /* LCBXXZDChapterEightAlgorithmDesignTwo_h */
