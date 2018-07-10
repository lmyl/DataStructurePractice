//
//  LCBChapterEightGraphTraversing.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterEightGraphTraversing_h
#define LCBChapterEightGraphTraversing_h

#include <stdio.h>
#include "LCBChapterEightALGraph.h"


//BFS
void BFS(ALGraph *graph ,int startVertex) ;

//DFS,从指定定点开始遍历
void DFS(ALGraph *graph , int startVertex) ;

//非连通图遍历
void NonConnectedGraphBFS(ALGraph *graph) ;

void NonConnectedGraphDFS(ALGraph *graph) ;

//可放入数组标志的遍历
void DFSPrivate(ALGraph *graph , int startVertex , int visitFlag[MaxVertex]) ;

void BFSPrivate(ALGraph *graph , int startVertex , int visitFlag[MaxVertex]) ;


#endif /* LCBChapterEightGraphTraversing_h */
