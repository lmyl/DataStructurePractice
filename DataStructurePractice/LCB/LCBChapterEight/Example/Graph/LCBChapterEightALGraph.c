//
//  LCBChapterEightALGraph.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightALGraph.h"

ALGraph * initALGraph(void) {
    ALGraph * graph = (ALGraph *)malloc(sizeof(ALGraph)) ;
    graph->edgesNumbers = 0 ;
    graph->vertexsNumbers = 0 ;
    return graph ;
}

ArcNode * initArcNode(void)  {
    ArcNode * node = (ArcNode *)malloc(sizeof(ArcNode)) ;
    node->nextVertex = NULL ;
    return node ;
}
