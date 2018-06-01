//
//  LCBChapterFiveExampleThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFiveExampleThree.h"

int maxInSqListByRecursive(SqList list) {
    if (list.length == 1) {
        return list.data[0] ;
    }else if (list.length == 0) {
        printf("线性表为空\n");
        return -1 ;
    }
    int theLast = list.data[list.length-1] ;
    list.length -- ;
    int max = maxInSqListByRecursive(list) ;
    if (max > theLast ) {
        return max ;
    }else{
        return theLast ;
    }
}
