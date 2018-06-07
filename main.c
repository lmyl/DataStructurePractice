//
//  main.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include <stdio.h>
#include "LCBChapterSixMachineExperimentFive.h"



int main(int argc, const char * argv[]) {
    // insert code here...
    char string[] = "((((((1,2,3,4,5)),8)),9))";
    GeneralTable *list = createGeneralTable(string);
    displayGeneralTable(list);
    printf("%c",returnTheMaxAtomInGeneralTable(list));
    
    
    return 0;
} 



