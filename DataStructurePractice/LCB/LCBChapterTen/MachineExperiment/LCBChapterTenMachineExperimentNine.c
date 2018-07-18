//
//  LCBChapterTenMachineExperimentNine.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTenMachineExperimentNine.h"

void quickSortStringPrivate(StringNodeByLCBXXZD strings[MaxElement] , char string[],int low ,int up) ;
int comparedStringPrivate(StringNodeByLCBXXZD stringOne , StringNodeByLCBXXZD stringTwo , char string[]) ;

void quickSortString(StringNodeByLCBXXZD strings[MaxElement] , char string[] , int stringCount)  {
    quickSortStringPrivate(strings, string, 0, stringCount - 1 ) ;
}

void quickSortStringPrivate(StringNodeByLCBXXZD strings[MaxElement] , char string[],int low ,int up) {
    if (low >= up) {
        return ;
    }
    int middle = (low + up) / 2 ;
    if (middle != low) {
        StringNodeByLCBXXZD temp = strings[middle] ;
        strings[middle] = strings[low] ;
        strings[low] = temp ;
    }
    int i = low ;
    int j = up ;
    StringNodeByLCBXXZD temp = strings[low] ;
    while (i < j) {
        while (j > i && comparedStringPrivate(strings[j], temp, string) >= 0) {
            j -- ;
        }
        if (j == i) {
            break ;
        }
        strings[i] = strings[j] ;
        while (j > i && comparedStringPrivate(temp, strings[i], string) >= 0) {
            i ++ ;
        }
        if (j == i) {
            break ;
        }
        strings[j] = strings[i] ;
    }
    strings[i] = temp ;
    quickSortStringPrivate(strings, string, i+1, up) ;
    quickSortStringPrivate(strings, string, low, i-1) ;
}

int comparedStringPrivate(StringNodeByLCBXXZD stringOne , StringNodeByLCBXXZD stringTwo , char string[]) {
    int lowOne = stringOne.start ;
    int endOne = lowOne + stringOne.length - 1 ;
    int lowTwo = stringTwo.start ;
    int endTwo = lowTwo + stringTwo.length - 1 ;
    while (lowOne <= endOne && lowTwo <= endTwo) {
        if (string[lowOne] > string[lowTwo]) {
            return 1 ;
        }else if (string[lowOne] < string[lowTwo]) {
            return -1 ;
        }
        lowTwo ++ ;
        lowOne ++ ;
    }
    if (lowOne == endOne + 1 && lowTwo == endTwo + 1) {
        return  0 ;
    }else if (lowOne == endOne){
        return -1 ;
    }else{
        return 1 ;
    }
}
