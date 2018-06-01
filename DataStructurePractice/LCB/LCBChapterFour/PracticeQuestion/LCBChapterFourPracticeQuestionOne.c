//
//  LCBChapterFourPracticeQuestionOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/30.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFourPracticeQuestionOne.h"

int wildcardMatchingBF(SqString targetString,SqString patternString) {
    int countOne = 0 ;
    int countTwo = 0 ;
    while (countOne < targetString.length && countTwo < patternString.length) {
        if (patternString.data[countTwo] == '?' || patternString.data[countTwo] == targetString.data[countOne]) {
            countOne ++ ;
            countTwo ++ ;
        }else{
            countOne = countOne - countTwo + 1 ;
            countTwo = 0 ;
        }
    }
    if (countTwo == patternString.length) {
        return countOne - countTwo ;
    }else{
        return -1;
    }
}
