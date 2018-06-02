//
//  LCBXXZDChapterFiveAlgorithmDesignSeven.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/1.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterFiveAlgorithmDesignSeven.h"

void fullArrangementByReverse(char *string,int countLow,int countUp,int *count) ;

void fullArrangement(char *string,int numbers) {
    int count = 0;
    fullArrangementByReverse(string, 1, numbers, &count);
    
}

void fullArrangementByReverse(char *string,int countLow,int countUp,int *count) {
    if (countUp == countLow) {
        *count = *count + 1 ;
        printf("第%d种排列:%s\n",*count,string);
        return ;
    }
    int location = countLow -1 ;
    char character ;
    while (location <= countUp-1) {
        character = string[countLow-1];
        string[countLow-1] = string[location] ;
        string[location] = character ;
        fullArrangementByReverse(string, countLow+1,countUp,count) ;
        character = string[countLow-1];
        string[countLow-1] = string[location] ;
        string[location] = character ;
        location ++ ;
    }
}
