//
//  LCBChapterFivePracticeQuestionOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFivePracticeQuestionOne.h"

double meansByRecursive(int numbers[],int count)  {
    if (count == 1) {
        return (double )numbers[0] ;
    }
    return (numbers[count-1] + meansByRecursive(numbers, count - 1 ) * (count - 1))/count ;
}
