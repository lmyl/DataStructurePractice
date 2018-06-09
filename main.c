//
//  main.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include <stdio.h>
#include "LCBXXZDChapterSixAlgorithmDesignNine.h"



int main(int argc, const char * argv[]) {
    // insert code here...

    int dataOne[] = {0,0,1,0,3,2,1,2,3,2,1,4,2,3,5,-1} ;
    int dataTwo[] = {0,0,1,0,3,2,1,2,3,2,1,4,2,3,5,-1} ;
    int dataThree[16];
    addSparseMatrixInCustomStyle(dataOne, dataTwo, dataThree);
    for (int i = 0; dataThree[i] != -1; i = i+3) {
        printf("(%d,%d,%d)  ",dataThree[i],dataThree[i+1],dataThree[i+2]);
    }
    printf("\n");
    
    return 0;
} 



