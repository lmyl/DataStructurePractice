//
//  LCBXXZDChapterFourAlgorithmDesignOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/30.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterFourAlgorithmDesignOne.h"

void reverseSqString(SqString *string)  {
    int head = 0 ;
    int tail = string->length -1 ;
    int temp ;
    while (head < tail) {
        temp = string->data[head] ;
        string->data[head] = string->data[tail];
        string ->data[tail] = temp ;
        head ++ ;
        tail -- ;
    }
}
