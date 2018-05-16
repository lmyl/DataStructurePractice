//
//  LCBChapterOnePracticeQuestionThirteen.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/10.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterOnePracticeQuestionThirteen_h
#define LCBChapterOnePracticeQuestionThirteen_h
#define Max 10000

/*
 描述一个集合的抽象数据类型ASet，其中所有元素为正整数，集合的基本运算包括：
 1.由整数数组a[0..n-1]创建一个集合
 2.输出一个集合的所有元素
 3.判断一个元素是否在一个集合中
 4.求两个集合的并集
 5.求两个集合的差集
 6.求两个集合的交集
 在此基础上设计集合的顺序存储结构，并实现各基本运算的算法
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int data[Max] ;
    int length ;
} Set ;



Set * createSet(int numbers[] ,int count) ;
void dispset(Set *set) ;
bool contain(Set *set , int element) ;
Set * add(Set *setOne,Set *setTwo) ;
Set * sub(Set *setOne,Set *setTwo) ;
Set * interSection(Set *setOne,Set *setTwo) ;



#endif /* LCBChapterOnePracticeQuestionThirteen_h */
