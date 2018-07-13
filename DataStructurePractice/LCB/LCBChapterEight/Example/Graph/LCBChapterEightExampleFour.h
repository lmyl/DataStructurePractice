//
//  LCBChapterEightExampleFour.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterEightExampleFour_h
#define LCBChapterEightExampleFour_h

#include <stdio.h>
#include "LCBChapterEightGraphTraversing.h"


//图G采用邻接表存储，设计一个算法求图G中从顶点u到v的简单路径

void findPathInALGraph(ALGraph *graph,int startVertex , int endVertex) ;


void displayWayInALGraph(int way[MaxVertex] , int wayLength) ;
#endif /* LCBChapterEightExampleFour_h */
