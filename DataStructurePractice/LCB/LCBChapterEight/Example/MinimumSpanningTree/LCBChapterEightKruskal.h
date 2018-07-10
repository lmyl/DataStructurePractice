//
//  LCBChapterEightKruskal.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/10.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterEightKruskal_h
#define LCBChapterEightKruskal_h

#include <stdio.h>
#include "LCBChapterEightMGraph.h"

#define INF 32767

typedef struct {
    int start;
    int end ;
    int weight ;
}Edge;

void Kruskal(MGraph graph) ;

void KruskalFast(MGraph graph) ;
#endif /* LCBChapterEightKruskal_h */
