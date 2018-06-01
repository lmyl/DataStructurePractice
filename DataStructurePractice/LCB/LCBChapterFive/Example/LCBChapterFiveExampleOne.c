//
//  LCBChapterFiveExampleOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFiveExampleOne.h"

int recursiveFactorialSolving(int number )  {
    if (number == 1) {
        return 1 ;
    }else{
        return number * recursiveFactorialSolving(number-1) ;
    }
}
