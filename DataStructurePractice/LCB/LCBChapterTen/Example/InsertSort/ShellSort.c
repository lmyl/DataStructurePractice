//
//  ShellSort.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "ShellSort.h"

void ShellSort(SeqList seqlist , int elementNumbers) {
    int stepLength = elementNumbers / 2 ;
    while (stepLength >= 1 ) {
        for (int i = stepLength; i<elementNumbers; i++) {
            NodeType temp = seqlist[i] ;
            int j = i-stepLength ;
            while (j>=0 && temp.key < seqlist[j].key) {
                seqlist[j+stepLength] = seqlist[j] ;
                j = j - stepLength ;
            }
            j += stepLength ;
            seqlist[j] = temp ;
        }
        stepLength /= 2 ;
    }
}
