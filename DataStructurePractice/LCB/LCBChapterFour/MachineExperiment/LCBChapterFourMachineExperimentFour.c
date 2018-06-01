//
//  LCBChapterFourMachineExperimentFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/30.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFourMachineExperimentFour.h"

char codeTable[2][26] = {{
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
},{
    'n', 'g', 'z', 'q', 't', 'c','o', 'b','m', 'u','h', 'e', 'l', 'k', 'p','d', 'a', 'w', 'x', 'f', 'y', 'i', 'v', 'r', 's', 'j'
}};

bool lookUpCodeTable(char character ,int *location)  ;


void encryptedStringByCodeTable(char string[])  {
    SqString input ;
    sqStrAssign(&input, string) ;
    SqString result ;
    result.length = 0;
    int count = 0 ;
    while (count < input.length) {
        int location ;
        if (lookUpCodeTable(input.data[count], &location)) {
            result.data[count] = codeTable[1][location] ;
        }else{
            printf("输入明文不合法\n");
            return ;
        }
        count ++ ;
    }
    result.length = count ;
    displaySqStr(result);
}

bool lookUpCodeTable(char character ,int *location)  {
    int count = 0;
    while (count < 26) {
        if (codeTable[0][count] == character) {
            *location =  count ;
            return true ;
        }
        count ++ ;
    }
    return false ;
}
