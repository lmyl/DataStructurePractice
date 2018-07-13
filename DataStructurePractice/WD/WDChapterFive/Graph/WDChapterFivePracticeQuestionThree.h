//
//  WDChapterFivePracticeQuestionThree.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterFivePracticeQuestionThree_h
#define WDChapterFivePracticeQuestionThree_h

#include <stdio.h>
#include "LCBChapterEightExampleFive.h"

//分别采用基于深度优先遍历算法和广度优先遍历算法判断以邻接表方式存储的有向图中是否存在由顶点i到j的路径
// 与DataStructurePractice/DataStructurePractice/LCB/LCBChapterEight/Example/Graph/LCBChapterEightExampleFive.h 相似
bool isExistPathInALGraphDFSByWD(ALGraph *graph,int startVertex , int endVertex) ;

bool isExistPathInALGraphBFSByWD(ALGraph *graph,int startVertex , int endVertex) ;


#endif /* WDChapterFivePracticeQuestionThree_h */
