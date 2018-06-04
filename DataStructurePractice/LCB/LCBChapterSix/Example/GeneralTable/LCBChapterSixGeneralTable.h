//
//  LCBChapterSixGeneralTable.h
//  DataStructurePractice
//
//  Created by ly on 2018/6/4.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterSixGeneralTable_h
#define LCBChapterSixGeneralTable_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ElemType;

typedef struct gnode{
    int tag ;
    union {
        ElemType data ;
        struct gnode *sublist ;
    }value ;
    struct gnode *next ;
}GeneralTable;

//广义表长度
int GeneralTableLength(GeneralTable *list) ;

//广义表深度
int GeneralTableDepth(GeneralTable *list) ;

//输出广义表
void displayGeneralTable(GeneralTable *list) ;

//建立广义表的链式存储结构
GeneralTable * createGeneralTable(char string[]);


//初始化
GeneralTable * initGeneralTable(void) ;

#endif /* LCBChapterSixGeneralTable_h */
