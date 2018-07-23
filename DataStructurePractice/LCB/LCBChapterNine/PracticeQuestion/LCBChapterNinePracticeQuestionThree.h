//
//  LCBChapterNinePracticeQuestionThree.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterNinePracticeQuestionThree_h
#define LCBChapterNinePracticeQuestionThree_h

#include <stdio.h>
#include "LCBChapterNineHash.h"


typedef struct zipnode{
    KeyType key ;
    struct zipnode * next ;
}ZipNode;

typedef ZipNode* ZipHashTable[MaxSize];

//编写一个按第一个字母在字母表中顺序输出哈希表中所有关键字的算法
//线性探测开方法
void displayInitialsByAlphabetSortInHashTable(HashTable hashTable ,int prime) ;
//查找不成功的ASL
//处理冲突方法为拉链法
double countASLUnSuccessInHashTable(ZipHashTable hashTable, int prime) ;
#endif /* LCBChapterNinePracticeQuestionThree_h */
