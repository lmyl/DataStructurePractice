//
//  LCBXXZDChapterFourAlgorithmDesignFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/30.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterFourAlgorithmDesignFive.h"


int indexOfSqStringFromLocationBF(SqString targetString , int location , SqString patternString ) {
    int countOne = location -1;
    int countTwo = 0 ;
    while (countOne < targetString.length && countTwo < patternString.length) {
        if (targetString.data[countOne] == patternString.data[countTwo]) {
            countTwo ++ ;
            countOne ++ ;
        }else{
            countOne = countOne - countTwo + 1 ;
            countTwo = 0;
        }
    }
    if (countTwo == patternString.length) {
        return countOne - countTwo + 1 ;
    }else{
        return -1 ;
    }
}
