//
//  LCBChapterFourExampleOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/29.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFourExampleOne.h"

int strcmpSqStr(SqString stringOne , SqString stringTwo ) {
    if (stringTwo.length == stringOne.length) {
        int count = 0 ;
        while (count < stringOne.length) {
            if (stringOne.data[count] > stringTwo.data[count]) {
                return 1 ;
            }else if (stringOne.data[count] < stringTwo.data[count]) {
                return -1 ;
            }
            count ++ ;
        }
        return 0 ;
    }else if (stringTwo.length < stringOne.length) {
        return 1 ;
    }else{
        return  -1 ;
    }
}
