//
//  LCBXXZDChapterFourAlgorithmDesignEight.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterFourAlgorithmDesignEight.h"

typedef struct {
    char character ;
    int count ;
}CharacterNumbers;

void addCountCharacter(char character ,CharacterNumbers countArray[] , int *number) ;
void displayCharacterNumberArray(CharacterNumbers countArray[], int *number) ;

void countEachCharacterNumbers(SqString string)  {
    CharacterNumbers countArray[string.length] ;
    int number = 0;
    for (int i = 0; i<string.length; i++) {
        addCountCharacter(string.data[i], countArray, &number) ;
    }
    displayCharacterNumberArray(countArray,&number);
}


void addCountCharacter(char character ,CharacterNumbers countArray[] ,int *number) {
    for (int i = 0; i< *number; i++) {
        if (countArray[i].character == character) {
            countArray[i].count ++ ;
            return ;
        }
    }
    CharacterNumbers characterType = {character , 1} ;
    countArray[*number] = characterType ;
    *number = *number + 1 ;
}

void displayCharacterNumberArray(CharacterNumbers countArray[], int *number) {
    for (int i = 0; i< *number; i++) {
        printf("%c 出现 %d 次\n",countArray[i].character,countArray[i].count) ;
    }
}
