//
//  LCBChapterEightPracticeQuestionSix.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/11.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterEightPracticeQuestionSix_h
#define LCBChapterEightPracticeQuestionSix_h

#include <stdio.h>
#include "LCBChapterEightALGraph.h"

//求出每个顶点的出度
void countOutDegreeInALGraph(ALGraph *graph) ;

//求出每个顶点出度最大的顶点，输出该顶点编号
int maxOutDegreeInALGraph(ALGraph *graph) ;

//计算途中出度为0 的顶点数
int countNoOutDegreeInALGraph(ALGraph *graph) ;
//判断途中是否存在边<i,j>
bool isExistEdgeInALGraph(ALGraph *graph , int startVertex , int endVertex) ;

#endif /* LCBChapterEightPracticeQuestionSix_h */
