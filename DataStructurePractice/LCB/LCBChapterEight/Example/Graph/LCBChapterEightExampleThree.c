//
//  LCBChapterEightExampleThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightExampleThree.h"

bool isConnectedGraph(ALGraph *graph) {
    int visitFlag[MaxVertex] ;
    for (int i=0; i<graph->vertexsNumbers; i++) {
        BFSPrivate(graph, 0, visitFlag) ;
    }
    for (int i = 0; i<graph->vertexsNumbers; i++) {
        if (visitFlag[i] == 0) {
            return false ;
        }
    }
    return true ;
}
