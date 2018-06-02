//
//  LCBXXZDChapterFiveAlgorithmDesignTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/1.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterFiveAlgorithmDesignTwo.h"

bool judgementOneCharacterInSqString(SqString string , char character) {
    if (string.length == 0) {
        return false ;
    }
    if (string.data[string.length - 1] == character) {
        return true ;
    }
    SqString newString = subSqStr(string, 2, string.length);
    return judgementOneCharacterInSqString(newString, character);
}
