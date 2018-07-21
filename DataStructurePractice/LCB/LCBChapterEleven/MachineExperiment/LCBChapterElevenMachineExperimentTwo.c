//
//  LCBChapterElevenMachineExperimentTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterElevenMachineExperimentTwo.h"

LoserTreeResult loserTree(SelectChangedSortResult sequence ) {
    LoserTreeResult result ;
    result.length = 0 ;
    int wayCount = sequence.number ;
    int loserBinaryTree[2 *wayCount] ;
    int locationLoserTree[wayCount] ;
    for (int i = 0 ; i<wayCount; i++) {
        loserBinaryTree[i] = NegativeINF ;
        locationLoserTree[i] = wayCount ;
    }
    int sequenceUseLength[wayCount] ;
    for (int i = wayCount; i<2*wayCount; i++) {
        loserBinaryTree[i] = sequence.result[i-wayCount][0] ;
        sequenceUseLength[i-wayCount] = 1 ;
    }
    
    for (int i = 2*wayCount-1; i>=wayCount; i--) {
        int temp = loserBinaryTree[i] ;
        int tempLocation = i - wayCount ;
        int fater = i / 2 ;
        while (fater != 0) {
            if (temp >= loserBinaryTree[fater]) {
                int changeTemp = temp ;
                int changeTempLocation = tempLocation ;
                temp = loserBinaryTree[fater] ;
                tempLocation = locationLoserTree[fater] ;
                loserBinaryTree[fater] = changeTemp ;
                locationLoserTree[fater] = changeTempLocation ;
            }
            fater = fater / 2 ;
        }
        loserBinaryTree[0] = temp ;
        locationLoserTree[0] = tempLocation ;
    }
    while (loserBinaryTree[0] != INF) {
        result.result[result.length] = loserBinaryTree[0] ;
        result.length ++ ;
        
        int tempLoaction = locationLoserTree[0] ;
        if (sequenceUseLength[tempLoaction] >= sequence.length[tempLoaction]) {
            loserBinaryTree[wayCount+tempLoaction] = INF ;
        }else{
            loserBinaryTree[wayCount+tempLoaction] = sequence.result[tempLoaction][sequenceUseLength[tempLoaction]] ;
            sequenceUseLength[tempLoaction] ++ ;
        }
        int temp = loserBinaryTree[wayCount+tempLoaction] ;
        int fater = (wayCount+tempLoaction) / 2 ;
        while (fater != 0) {
            if (temp >= loserBinaryTree[fater]) {
                int changeTemp = temp ;
                int changeTempLocation = tempLoaction ;
                temp = loserBinaryTree[fater] ;
                tempLoaction = locationLoserTree[fater] ;
                loserBinaryTree[fater] = changeTemp ;
                locationLoserTree[fater] = changeTempLocation ;
            }
            fater = fater / 2 ;
        }
        loserBinaryTree[0] = temp ;
        locationLoserTree[0] = tempLoaction ;
    }
    
    return result ;
}
