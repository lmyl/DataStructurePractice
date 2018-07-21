//
//  main.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/27.
//  Copyright © 2018年 LY. All rights reserved.
//



#include "LCBChapterElevenMachineExperimentTwo.h"


int main(int argc, const char * argv[]) {
    // insert code here...


    int array[] = {15,4,97,64,17,32,108,44,76,9,39,82,56,31,80,73,255,68} ;

    SelectChangedSortResult result = selectChangedSort(array, 18, 5) ;

    printf("%d\n",result.number) ;

    for (int i = 0; i<result.number; i++) {
        for (int j = 0; j<result.length[i]; j++) {
            printf("%d  ",result.result[i][j]) ;
        }
        printf("\n");
    }

    LoserTreeResult sort = loserTree(result) ;
    

    for (int i = 0 ; i<sort.length; i++) {
        printf("%d  ",sort.result[i] );
    }
    printf("\n");


    return 0;
} 



