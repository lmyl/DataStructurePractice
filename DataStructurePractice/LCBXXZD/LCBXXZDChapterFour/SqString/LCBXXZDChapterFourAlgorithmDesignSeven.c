//
//  LCBXXZDChapterFourAlgorithmDesignSeven.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterFourAlgorithmDesignSeven.h"


SqString commonSubStringOfTwoSqString(SqString stringOne , SqString stringTwo ) {
    SqString result ;
    result.length = 0 ;
    int gobalLength =0 ;
    int gobalLocation = -1 ;
    int countOne = 0 ;
    int actionOne = 0 ;
    int countTwo = 0;
    int actionTwo = 0 ;
    while (countOne < stringOne.length) {
        countTwo = 0 ;
        while (countTwo < stringTwo.length) {
            actionOne = countOne ;
            actionTwo = countTwo ;
            while (actionOne < stringOne.length && actionTwo < stringTwo.length && stringOne.data[actionOne] == stringTwo.data[actionTwo]) {
                actionOne ++ ;
                actionTwo ++ ;
            }
            if (actionTwo - countTwo > gobalLength) {
                gobalLength = actionTwo - countTwo ;
                gobalLocation = countTwo ;
            }
            countTwo ++ ;
        }
        countOne ++ ;
    }
    if (gobalLocation >= 0) {
        for (int i = 0; i< gobalLength; i++) {
            result.data[i] = stringTwo.data[gobalLocation + i] ;
        }
        result.length = gobalLength ;
        return result;
    }else{
        return result ;
    }
}
