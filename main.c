//
//  main.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include <stdio.h>
#include "LCBChapterEightExampleTwo.h"
#include "LCBChapterEightGraphTraversing.h"
#include "LCBChapterEightPracticeQuestionSeven.h"


int main(int argc, const char * argv[]) {
    // insert code here...



    int Matrix[MaxVertex][MaxVertex] = {
        {0,1,0,1,0},
        {0,0,1,0,0},
        {0,0,0,0,1},
        {0,0,1,0,0},
        {0,0,0,0,0}
    };
    MGraph mgraph ;
    for (int i= 0 ; i<6; i++) {
        for (int j= 0; j<6; j++) {
            mgraph.edges[i][j] = Matrix[i][j] ;
        }
    }
    mgraph.edgesNumbers = 5;
    mgraph.vertexsNumbers = 5 ;
    ALGraph *algraph =  MatrixToList(mgraph) ;
    
    DFSNoRecursive(algraph, 0);
    DFS(algraph, 0);
    return 0;
} 



