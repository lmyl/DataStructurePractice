//
//  LCBXXZDChapterFiveAlgorithmDesignNine.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/2.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterFiveAlgorithmDesignNine.h"

bool checkComplete(int data[],int length) {
    int temp = data[0] ;
    int countContinue = 0 ;
    for (int i = 1; i<length; i++) {
        if (temp == 0) {
            temp = data[i] ;
        }else if (data[i] == 0) {
            if (countContinue == length - 2) {
                return true ;
            }else{
                return false ;
            }
        }else if (data[i] != -temp) {
            return false ;
        }else {
            countContinue ++ ;
            temp = data[i] ;
        }
    }
    return true ;
}

void chessMoveProblemByReverse(char data[] ,int length,int number)  ;

void chessMoveProblem(int number) {
    int length = 2*number + 2 ;
    char data[length] ;
    for (int i = 0; i<length; i++) {
        if (i < number) {
            data[i] = '-' ;
        }else if(i >= number && i< 2*number){
            data[i] = '+' ;
        }else{
            data[i] = '_' ;
        }
    }
    for (int i=0; i<length; i++) {
        printf("%c",data[i]) ;
    }
    printf("\n");
    chessMoveProblemByReverse(data, length, length);
}

void chessMoveProblemByReverse(char data[] ,int length,int number) {
    if (length == 10) {
        data[9] = '+' ;
        data[8] = '-' ;
        data[4] = '_' ;
        data[3] = '_' ;
        for (int i=0; i<number; i++) {
            printf("%c",data[i]) ;
        }
        printf("\n");
        data[8] = '_';
        data[7] = '_';
        data[4] = '-' ;
        data[3] = '+' ;
        for (int i=0; i<number; i++) {
            printf("%c",data[i]) ;
        }
        printf("\n");
        data[8] = '-';
        data[7] = '-';
        data[2] = '_' ;
        data[1] = '_' ;
        for (int i=0; i<number; i++) {
            printf("%c",data[i]) ;
        }
        printf("\n");
        data[7] = '_';
        data[6] = '_';
        data[2] = '-' ;
        data[1] = '+' ;
        for (int i=0; i<number; i++) {
            printf("%c",data[i]) ;
        }
        printf("\n");
        data[7] = '+';
        data[6] = '-';
        data[1] = '_' ;
        data[0] = '_' ;
        for (int i=0; i<number; i++) {
            printf("%c",data[i]) ;
        }
        printf("\n");
        return ;
    }else{
        data[length - 1] = '+' ;
        data[length - 2] = '-' ;
        data[(length-4)/2] = '_' ;
        data[(length-2)/2] = '_' ;
        for (int i=0; i<number; i++) {
            printf("%c",data[i]) ;
        }
        printf("\n");
        data[length-3] = '_';
        data[length-4] = '_';
        data[(length-4)/2] = '+' ;
        data[(length-2)/2] = '+' ;
        for (int i=0; i<number; i++) {
            printf("%c",data[i]) ;
        }
        printf("\n");
        chessMoveProblemByReverse(data, length-2,number) ;
    }
}
