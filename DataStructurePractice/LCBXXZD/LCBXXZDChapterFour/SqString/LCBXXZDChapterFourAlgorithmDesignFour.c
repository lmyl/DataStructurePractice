//
//  LCBXXZDChapterFourAlgorithmDesignFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/30.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterFourAlgorithmDesignFour.h"

void deleteAllValueForSqString(SqString *string , char character)  {
    int countOne = 0 ;
    int countTwo = 0 ;
    while (countOne < string->length) {
        if (string->data[countOne] != character) {
            string->data[countTwo] = character ;
            countTwo ++ ;
        }
        countOne ++ ;
    }
    string->length = countTwo ;
}
