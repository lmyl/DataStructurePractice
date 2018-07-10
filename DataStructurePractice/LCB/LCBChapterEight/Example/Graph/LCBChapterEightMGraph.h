//
//  LCBChapterEightMGraph.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterEightMGraph_h
#define LCBChapterEightMGraph_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MaxVertex 500
#define MaxEdge 500

typedef struct {
    int number ;
    char info[10] ;
}VertexType;

typedef struct {
    int edges[MaxVertex][MaxVertex] ;
    int vertexsNumbers ;
    int edgesNumbers ;
    VertexType vextex[MaxVertex] ;
}MGraph;



#endif /* LCBChapterEightMGraph_h */
