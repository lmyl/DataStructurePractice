//
//  LCBChapterEightExampleTwo.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterEightExampleTwo_h
#define LCBChapterEightExampleTwo_h

#include <stdio.h>
#include "LCBChapterEightALGraph.h"

//设计不带权的图邻接表与邻接矩阵相互转换的算法，并判断时间复杂度

ALGraph * MatrixToList(MGraph graph) ; //O(n^2)
MGraph ListToMatrix(ALGraph * graph) ; //O(n+2e)

#endif /* LCBChapterEightExampleTwo_h */
