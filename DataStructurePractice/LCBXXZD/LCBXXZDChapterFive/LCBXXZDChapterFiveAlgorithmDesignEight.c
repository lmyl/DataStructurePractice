//
//  LCBXXZDChapterFiveAlgorithmDesignEight.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/1.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterFiveAlgorithmDesignEight.h"


void arrangementOfNaturalNumbers(int data[] , int low ,int up,int nowLayer,int number,int *count) ;

void arrangementOfNaturalNumbersByReverse(int number,int layer) {
    int data[number] ;
    for (int i = 0 ;i<number; i++) {
        data[i] = i+1 ;
    }
    int count = 0;
    arrangementOfNaturalNumbers(data, 1, number, 0, layer, &count);
}

void arrangementOfNaturalNumbers(int data[] , int low ,int up,int nowLayer,int number,int *count) {
    if (nowLayer == number ) {
        *count = *count + 1;
        printf("第%d种组合:",*count) ;
        for (int i = 0; i<=number-1; i++) {
            printf("%d ",data[i]);
        }
        printf("\n");
        return ;
    }
    int temp ;
    int location = low -1 ;
    while (location <= up -1) {
        temp = data[location];
        data[location] = data[low-1];
        data[low-1] = temp ;
        arrangementOfNaturalNumbers(data, low+1, up, nowLayer+1,number,count) ;
        temp = data[location];
        data[location] = data[low-1];
        data[low-1] = temp ;
        location ++ ;
    }
}

void combinationOfNaturalNumbers(int data[] ,int low ,int up , int layer,int combination[],int length,int *count) ;

void combinationOfNaturalNumbersByReverse(int number,int layer)  {
    int data[number] ;
    for (int i = 0 ;i<number; i++) {
        data[i] = i+1 ;
    }
    int count = 0;
    int combination[number] ;
    combinationOfNaturalNumbers(data, 1, number, layer, combination, 0, &count);
}


void combinationOfNaturalNumbers(int data[] ,int low ,int up , int layer,int combination[],int length,int *count) {
    if (length == layer) {
        *count = *count + 1 ;
        printf("第%d种组合:",*count) ;
        for (int i = 0; i<length; i++) {
            printf("%d  ",combination[i]) ;
        }
        printf("\n");
        return ;
    }
    if (low <= up) {
        combinationOfNaturalNumbers(data, low+1, up, layer, combination, length,count) ;
        length ++ ;
        combination[length - 1] = data[low-1] ;
        combinationOfNaturalNumbers(data, low+1, up, layer, combination, length,count) ;
        length -- ;
    }
}
