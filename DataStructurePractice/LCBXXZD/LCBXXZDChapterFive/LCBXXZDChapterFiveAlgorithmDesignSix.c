//
//  LCBXXZDChapterFiveAlgorithmDesignSix.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/1.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterFiveAlgorithmDesignSix.h"

#define MaxSize 500

void reverseInputStringDisplayByReverse(char string[],int number) ;

void reverseInputString(void)  {
    char string[MaxSize] ;
    int count = -1;
    printf("请输入字符串\n");
    do {
        count ++ ;
        scanf("%c",&string[count]) ;
    } while (string[count] != '.');
    reverseInputStringDisplayByReverse(string,0);
    printf("\n");
}

void reverseInputStringDisplayByReverse(char string[],int number) {
    if (string[number] == '.') {
        printf(".");
        return ;
    }
    reverseInputStringDisplayByReverse(string,number+1) ;
    printf("%c",string[number]);
}
