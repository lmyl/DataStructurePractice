//
//  LCBChapterFiveExampleTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFiveExampleTwo.h"

SqString reverseByRecursive(SqString string) {
    if (string.length == 1) {
        return string ;
    }else if (string.length == 0) {
        printf("串为空\n") ;
        return string ;
    }
    SqString result ;
    result.data[0] = string.data[string.length - 1] ;
    result.length = 1 ;
    SqString subString = deleteSqStr(string, string.length , string.length );
    return concatSqStr(result, reverseByRecursive(subString));
}
