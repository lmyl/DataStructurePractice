//
//  LCBChapterElevenMachineExperimentOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterElevenMachineExperimentOne.h"

SelectChangedSortResult selectChangedSort(int sequence[MAXL] , int elementNumber,int memorySize)  {
    SelectChangedSortResult result  ;
    int memory[memorySize] ;
    int sequenceUseLength = 0 ;
    int memoryLength = 0 ;
    int count = -1 ;
    for (int i = 0; i<memorySize; i++) {
        if (i>=elementNumber) {
            break ;
        }
        memory[i] = sequence[i] ;
        memoryLength ++ ;
        sequenceUseLength ++ ;
    }
    while (memoryLength > 0) {
        int sequenceLength = -1;
        int minLocation = -1 ;
        int minValue = -1 ;
        count ++ ;
        while (memoryLength > 0) {
            bool findSmall = false ;
            int minSelectLocation = -1;
            int minSelectValue = 12357 ;
            for (int i = 0 ; i < memoryLength; i++) {
                if (memory[i] >= minValue && memory[i] <= minSelectValue) {
                    minSelectLocation = i ;
                    minSelectValue = memory[i] ;
                    findSmall = true ;
                }
            }
            if (!findSmall) {
                break ;
            }
            sequenceLength ++ ;
            result.length[count] = sequenceLength + 1 ;
            result.result[count][sequenceLength] = minSelectValue ;
            if (sequenceUseLength < elementNumber) {
                memory[minSelectLocation] = sequence[sequenceUseLength] ;
                sequenceUseLength ++ ;
            }else{
                for (int k = minSelectLocation; k+1<memoryLength; k++) {
                    memory[k] = memory[k+1] ;
                }
                memoryLength -- ;
            }
            minValue = minSelectValue ;
            minLocation = minSelectLocation ;
        }
    }
    result.number = count + 1;
    return result ;
}
