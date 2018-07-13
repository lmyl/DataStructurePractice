//
//  LCBXXZDChapterEightAlgorithmDesignFive.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/12.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterEightAlgorithmDesignFive_h
#define LCBXXZDChapterEightAlgorithmDesignFive_h

#include <stdio.h>
#include "LCBChapterEightExampleFive.h"

//假设图G采用邻接表存储，设计一个算法,分别基于DFS与BFS判断i，j之间是否有路径


//与DataStructurePractice/DataStructurePractice/LCB/LCBChapterEight/Example/Graph/LCBChapterEightExampleFive.h相似
bool isExistPathInALGraphByDFS(ALGraph *graph,int startVertex , int endVertex) ;

bool isExistPathInALGraphByBFS(ALGraph *graph,int startVertex , int endVertex)  ;
#endif /* LCBXXZDChapterEightAlgorithmDesignFive_h */
