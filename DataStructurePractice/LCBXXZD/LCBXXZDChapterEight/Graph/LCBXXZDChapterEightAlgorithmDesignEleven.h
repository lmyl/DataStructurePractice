//
//  LCBXXZDChapterEightAlgorithmDesignEleven.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterEightAlgorithmDesignEleven_h
#define LCBXXZDChapterEightAlgorithmDesignEleven_h

#include <stdio.h>
#include "LCBChapterEightMGraph.h"

#define INF 32767

//给定n个村庄，若村庄i与j之间存在路径，则将顶点i与j之间用边链接起来，边上的权值表示这条路径的长度，现在在其中一个村庄中修一所医院，在哪里修能使距离医院最远的村庄到医院的距离最短

int buildHospitalProblemInMGraph(MGraph graph) ;

#endif /* LCBXXZDChapterEightAlgorithmDesignEleven_h */
