//
//  LCBChapterNineHash.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterNineHash_h
#define LCBChapterNineHash_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MaxSize 100
#define NULLKEY -1
#define DELKEY -2

typedef int KeyType;
typedef int InfoType[10];

typedef struct {
    KeyType key ;
    InfoType data ;
    int count ;
}HashTable[MaxSize];

int searchHashTable(HashTable hashTable ,int prime ,KeyType key) ;

bool deleteHashTable(HashTable hashTable ,int prime , KeyType key ,int *countNumbers) ;

bool insertHashTable(HashTable hashTable ,int prime , KeyType key ,int *countNumbers) ;

void creatHashTable(HashTable hashTable , KeyType element[MaxSize],int prime ,int countNumbers) ;

#endif /* LCBChapterNineHash_h */
