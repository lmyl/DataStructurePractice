//
//  LCBChapterNineMachineExperimentFive.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterNineMachineExperimentFive_h
#define LCBChapterNineMachineExperimentFive_h

#include <stdio.h>
#include <stdlib.h>

#define  MAXL 500

typedef struct charnode{
    char data ;
    int count ;
    struct charnode * left ;
    struct charnode * right ;
}CharNodeByMachineExperiment;

CharNodeByMachineExperiment * initCharNodeByMachineExperiment(void) ;

CharNodeByMachineExperiment * creatCharNodeByString(char string[MAXL] , int countNumbers) ;

void displayCharNodeByMachineExperiment(CharNodeByMachineExperiment * tree) ;

CharNodeByMachineExperiment * insertCharNode(CharNodeByMachineExperiment *tree ,char element) ;
#endif /* LCBChapterNineMachineExperimentFive_h */
