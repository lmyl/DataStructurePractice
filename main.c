//
//  main.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include <stdio.h>
#include "LCBChapterSevenMachineExperimentSeven.h"




int main(int argc, const char * argv[]) {
    // insert code here...

    char string[] = "-(+(1,*(2,3)),/(4,5))";
    BinaryTree *result = creatBinaryTree(string);
    displayBinaryTree(result);
    printf("\n");
    printf("%0.3f\n",solveExpressionValueByBinaryTree(result));
    printf("\n");

    
    return 0;
} 



