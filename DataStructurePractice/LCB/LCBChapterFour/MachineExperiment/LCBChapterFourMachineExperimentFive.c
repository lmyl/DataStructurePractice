//
//  LCBChapterFourMachineExperimentFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/30.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFourMachineExperimentFive.h"
#include "LCBChapterFourKMP.h"

void solvingTheFirstTheMostLengthSubString(SqString input,int *location ,int *length) {
    int subStringHead = 0 ;
    int subStringTail = 0 ;
    int gobleLocation = 0 ;
    int gobleLength = 0 ;
    while (subStringHead < input.length ) {
        subStringTail = subStringHead + gobleLength;
        while (subStringTail < input.length) {
            SqString subString = subSqStr(input, subStringHead+1, subStringTail+1) ;
            SqString deleteString = deleteSqStr(input, 1,subStringHead + 1) ;
            if (patternMatchingKMP(deleteString, subString) != -1) {
                if (SqStrLength(subString) > gobleLength) {
                    gobleLength = SqStrLength(subString);
                    gobleLocation = subStringHead + 1 ;
                }
            }
            subStringTail ++ ;
        }
        subStringHead ++ ;
    }
    *location  =gobleLocation ;
    *length = gobleLength ;
}

void solvingTheFirstTheMostLengthSubStringAnoterSolve(SqString input,int *location ,int *length) {
    int gobalLocation = 0 ;
    int gobalLength = 0 ;
    int subStringHeadOne = 0 ;
    int subStringHeadTwo = 0 ;
    int actionOne = 0 ;
    int actionTwo = 0 ;
    while (subStringHeadOne < input.length) {
        subStringHeadTwo = subStringHeadOne + 1 ;
        while (subStringHeadTwo < input.length) {
            actionOne = subStringHeadOne ;
            actionTwo = subStringHeadTwo ;
            while (actionTwo < input.length && input.data[actionOne] == input.data[actionTwo]) {
                actionOne ++ ;
                actionTwo ++ ;
            }
            if (actionOne - subStringHeadOne > gobalLength) {
                gobalLength = actionOne - subStringHeadOne ;
                gobalLocation = subStringHeadOne + 1;
            }
            subStringHeadTwo ++ ;
        }
        subStringHeadOne ++ ;
    }
    *location = gobalLocation ;
    *length = gobalLength ;
}
