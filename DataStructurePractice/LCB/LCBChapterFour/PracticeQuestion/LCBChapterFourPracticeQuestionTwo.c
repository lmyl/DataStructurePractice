//
//  LCBChapterFourPracticeQuestionTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/30.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFourPracticeQuestionTwo.h"

bool containSqString(SqString string , char character) ;

SqString solvingCommonCharacter(SqString stringOne , SqString stringTwo)  {
    SqString result ;
    result.length = 0 ;
    int count = 0 ;
    while (count < stringOne.length) {
        if (containSqString(stringTwo, stringOne.data[count])) {
            result.data[result.length] = stringOne.data[count] ;
            result.length ++ ;
        }
        count ++ ;
    }
    return result ;
}



bool containSqString(SqString string , char character) {
    int count = 0 ;
    while (count < string.length) {
        if (string.data[count] == character) {
            return true ;
        }
        count ++ ;
    }
    return false ;
}
