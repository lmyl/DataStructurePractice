//
//  LCBXXZDChapterSixAlgorithmDesignNine.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterSixAlgorithmDesignNine.h"

void addSparseMatrixInCustomStyle(int addOne[] , int addTwo[] ,int reslut[]) {
    int oneCount = 0;
    int twoCount = 0 ;
    int resultCount = 0 ;
    while (addOne[oneCount] != -1 && addTwo[twoCount] != -1) {
        while ((addOne[oneCount] != -1 && addTwo[twoCount] != -1) && (addOne[oneCount] < addTwo[twoCount] || (addOne[oneCount] == addTwo[twoCount] && addOne[oneCount+1] < addTwo[twoCount+1]))) {
            reslut[resultCount] = addOne[oneCount] ;
            resultCount ++ ;
            oneCount ++ ;
            reslut[resultCount] = addOne[oneCount] ;
            resultCount ++ ;
            oneCount ++ ;
            reslut[resultCount] = addOne[oneCount] ;
            resultCount ++ ;
            oneCount ++ ;
        }
        while ((addOne[oneCount] != -1 && addTwo[twoCount] != -1) && (addOne[oneCount] == addTwo[twoCount] && addOne[oneCount+1] == addTwo[twoCount+1])) {
            reslut[resultCount] = addOne[oneCount] ;
            resultCount ++ ;
            twoCount ++ ;
            oneCount ++ ;
            reslut[resultCount] = addOne[oneCount] ;
            resultCount ++ ;
            twoCount ++ ;
            oneCount ++ ;
            reslut[resultCount] = addOne[oneCount] + addTwo[twoCount] ;
            resultCount ++ ;
            twoCount ++ ;
            oneCount ++ ;
        }
        while ((addOne[oneCount] != -1 && addTwo[twoCount] != -1) && ((addOne[oneCount] == addTwo[twoCount] && addOne[oneCount+1] > addTwo[twoCount+1]) || addOne[oneCount] > addTwo[twoCount])) {
            reslut[resultCount] = addTwo[twoCount] ;
            resultCount ++ ;
            twoCount ++ ;
            reslut[resultCount] = addTwo[twoCount] ;
            resultCount ++ ;
            twoCount ++ ;
            reslut[resultCount] = addTwo[twoCount] ;
            resultCount ++ ;
            twoCount ++ ;
        }
    }
    while (addOne[oneCount] != -1) {
        reslut[resultCount] = addOne[oneCount] ;
        resultCount ++ ;
        oneCount ++ ;
        reslut[resultCount] = addOne[oneCount] ;
        resultCount ++ ;
        oneCount ++ ;
        reslut[resultCount] = addOne[oneCount] ;
        resultCount ++ ;
        oneCount ++ ;
    }
    while (addTwo[twoCount] != -1) {
        reslut[resultCount] = addTwo[twoCount] ;
        resultCount ++ ;
        twoCount ++ ;
        reslut[resultCount] = addTwo[twoCount] ;
        resultCount ++ ;
        twoCount ++ ;
        reslut[resultCount] = addTwo[twoCount] ;
        resultCount ++ ;
        twoCount ++ ;
    }
    reslut[resultCount] = -1 ;
}
