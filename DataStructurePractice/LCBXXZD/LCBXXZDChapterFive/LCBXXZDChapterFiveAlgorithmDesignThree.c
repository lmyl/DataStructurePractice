//
//  LCBXXZDChapterFiveAlgorithmDesignThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/1.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterFiveAlgorithmDesignThree.h"


int solvingDuckProblem(int villageNumber,int remaining) {
    if (villageNumber == 1) {
        return  2 *remaining  + 1;
    }
    return 2 * solvingDuckProblem(villageNumber - 1, remaining) + 1 ;
}
