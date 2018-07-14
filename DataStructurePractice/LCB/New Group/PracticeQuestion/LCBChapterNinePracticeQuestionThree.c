//
//  LCBChapterNinePracticeQuestionThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterNinePracticeQuestionThree.h"

void displayInitialsByAlphabetSortInHashTable(HashTable hashTable ,int prime) {
    for (int i = 0; i<26; i++) {
        int location = i % prime ;
        int base = location ;
        while (hashTable[location].key != DELKEY && hashTable[location].key != NULLKEY) {
            if (hashTable[location].key == i) {
                printf("%c",hashTable[i].key) ;
            }
            location = (location + 1) %MaxSize  ;
            if (location == base) {
                return ;
            }
        }
    }
}


double countASLUnSuccessInHashTable(ZipHashTable hashTable, int prime) {
    int sum =  0 ;
    for (int i = 0; i<prime; i++) {
        ZipNode *next = hashTable[i];
        int count = 0 ;
        while (next != NULL) {
            count ++ ;
            next = next->next ;
        }
        sum += count ;
    }
    return sum / prime ;
}
