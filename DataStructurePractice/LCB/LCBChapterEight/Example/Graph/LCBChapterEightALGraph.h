//
//  LCBChapterEightALGraph.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterEightALGraph_h
#define LCBChapterEightALGraph_h

#include "LCBChapterEightMGraph.h"

typedef struct ANode {
    int vertexNumber ;
    struct ANode * nextVertex ;
    char info[10] ;
}ArcNode;

typedef struct {
    VertexType nodeInfo ;
    ArcNode * firstArcNode ;
    int count ;
}VNode;

typedef VNode NextList[MaxVertex];

typedef struct {
    NextList nextList ;
    int vertexsNumbers ;
    int edgesNumbers ;
}ALGraph;

ALGraph * initALGraph(void) ;
ArcNode * initArcNode(void) ;
#endif /* LCBChapterEightALGraph_h */
