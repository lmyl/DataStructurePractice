//
//  WDChapterSevenPracticeQuestionFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/18.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterSevenPracticeQuestionFive.h"

void slovingPracticeQuestionFiveInWDPrivate(SeqList seqlist , int low ,int up,int location) ;

void slovingPracticeQuestionFiveInWD(SeqList seqlist , int elementNumber ,SeqList setOne , int *elementNumberOne , SeqList setTwo ,int *elementNumberTwo) {
    int flag = elementNumber / 2 ;
    slovingPracticeQuestionFiveInWDPrivate(seqlist, 0, elementNumber-1, flag-1) ;
    for (int i  =0 ; i<flag; i++) {
        setOne[i] = seqlist[i] ;
        *elementNumberOne = flag ;
    }
    for (int i = flag; i<elementNumber; i++) {
        setTwo[i-flag] = seqlist[i] ;
        *elementNumberTwo = elementNumber - (*elementNumberOne) ;
    }
}

void slovingPracticeQuestionFiveInWDPrivate(SeqList seqlist , int low ,int up,int location) {
    if (low > up) {
        return ;
    }
    int middle = (low + up) / 2 ;
    if (middle != low) {
        NodeType change = seqlist[middle] ;
        seqlist[middle] = seqlist[low] ;
        seqlist[low] = change ;
    }
    NodeType temp  = seqlist[low] ;
    int baseLow = low ;
    int baseUp = up ;
    while (low < up) {
        while (up > low && seqlist[up].key >= temp.key) {
            up -- ;
        }
        if (up == low) {
            break;
        }
        seqlist[low] = seqlist[up] ;
        while (low < up && seqlist[low].key <= temp.key) {
            low ++ ;
        }
        if (up == low) {
            break ;
        }
        seqlist[up] = seqlist[low] ;
    }
    seqlist[low] = temp ;
    if (low == location) {
        return ;
    }else if (low < location) {
        slovingPracticeQuestionFiveInWDPrivate(seqlist, low+1, baseUp,location) ;
    }else{
        slovingPracticeQuestionFiveInWDPrivate(seqlist, baseLow, low-1,location) ;
    }
}
