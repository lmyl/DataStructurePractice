//
//  LCBXXZDChapterFourAlgorithmDesignSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterFourAlgorithmDesignSix.h"

int countSubSqStringInTargetSqString(SqString targetString , SqString subString) {
    int countOne  = 0 ;
    int actionOne = countOne ;
    int countTwo = 0;
    int count = 0 ;
    while (countOne < targetString.length ) {
        actionOne = countOne ;
        while (countTwo < subString.length) {
            if (targetString.data[actionOne] == subString.data[countTwo]) {
                countTwo ++ ;
                actionOne ++ ;
            }else{
                break ;
            }
        }
        if (countTwo == subString.length) {
            count ++ ;
        }
        countTwo = 0 ;
        countOne ++ ;
    
    }
    return count ;
}
