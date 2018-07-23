//
//  LCBChapterNineHash.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterNineHash.h"

int searchHashTable(HashTable hashTable ,int prime ,KeyType key)  {
    int location = key % prime ;
    int base = location ;
    while (hashTable[location].key != key) {
        location  = (location + 1)%MaxSize ;
        if (hashTable[location].key == NULLKEY || location == base) {
            return -1;
        }
    }
    if (hashTable[location].key == key) {
        return location + 1 ;
    }
    return -1 ;
}

bool deleteHashTable(HashTable hashTable ,int prime , KeyType key,int *countNumbers) {
    int location = searchHashTable(hashTable, prime, key) ;
    if (location == -1) {
        return false ;
    }else{
        hashTable[location-1].key = DELKEY ;
        *countNumbers = *countNumbers - 1;
        return true ;
    }
}

bool insertHashTable(HashTable hashTable ,int prime , KeyType key ,int *countNumbers) {
    int location = key % prime ;
    int base = location ;
    int count = 1 ;
    while (hashTable[location].key != NULLKEY && hashTable[location].key != DELKEY) {
        count ++ ;
        location = (location + 1)%MaxSize ;
        if (location == base) {
            return false ;
        }
    }
    hashTable[location].key = key ;
    hashTable[location].count = count ;
    *countNumbers = *countNumbers + 1 ;
    return true ;
}

void creatHashTable(HashTable hashTable , KeyType element[MaxSize],int prime ,int countNumbers) {
    for (int i = 0; i<MaxSize; i++) {
        hashTable[i].key = NULLKEY ;
        hashTable[i].count =  0; 
    }
    int count =  0;
    for (int i = 0; i<countNumbers; i++) {
        insertHashTable(hashTable, prime, element[i], &count) ;
    }
}
