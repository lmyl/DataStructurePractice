//
//  LCBXXZDChapterFourAlgorithmDesignThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/30.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterFourAlgorithmDesignThree.h"


void replaceAllValueToAnotherValue(SqString *string ,char characterOne ,char characterTwo)  {
    int count = 0 ;
    while (count < string->length) {
        if (string->data[count] == characterOne) {
            string->data[count] = characterTwo ;
        }
        count ++ ;
    }
}
