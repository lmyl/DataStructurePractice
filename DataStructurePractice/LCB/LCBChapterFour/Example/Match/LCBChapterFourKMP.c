//
//  LCBChapterFourKMP.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/30.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFourKMP.h"

void solvingNext(SqString patternString,int next[]) ;
void solvingNextVal(SqString patternString,int nextVal[]);

int patternMatchingKMP(SqString targetString,SqString patternString) {
    int next[targetString.length] ;
    solvingNext(patternString, next);
    for (int i = 0; i < patternString.length; i++) {
        printf("%d",next[i]);
    }
 
//    solvingNextVal(patternString, next);
    int countOne = 0 ;
    int countTwo = 0 ;
    while (countOne < targetString.length && countTwo < patternString.length ) {
        if (countTwo == -1 || targetString.data[countOne] == patternString.data[countTwo]) {
            countOne ++ ;
            countTwo ++ ;
        }else{
            countTwo = next[countTwo] ;
        }
    }
    if (countTwo == patternString.length) {
        return countOne - countTwo  ;
    }else{
        return -1;
    }
}


void solvingNext(SqString patternString,int next[])  {
    next[0] = -1;
    int k = -1; //  k = next[j]
    int j = 0 ;
    while (j < patternString.length) {
        if (k == -1 || patternString.data[j] == patternString.data[k]) {
            k ++ ;
            j ++ ;
            next[j] = k ;
        }else{
            k = next[k] ;
        }
    }
}

void solvingNextVal(SqString patternString,int nextVal[]) {
    nextVal[0] = -1;;
    int k = -1 ; //  k = next[j]
    int j = 0 ;
    while (j < patternString.length) {
        if (k == -1 || patternString.data[j] == patternString.data[k]) {
            k ++ ;
            j ++ ;
            if (patternString.data[j] == patternString.data[k]) {
                nextVal[j]  = nextVal[k] ;
            }else{
                nextVal[j] = k ;
            }
        }else{
            k = nextVal[k];
        }
    }
}

