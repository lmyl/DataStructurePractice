//
//  LCBChapterNineListFind.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterNineListFind_h
#define LCBChapterNineListFind_h

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAXL 500

typedef int  KeyType  ;
typedef int InfoType[10];

typedef struct {
    KeyType key ;
    InfoType data ;
}NodeType;

typedef NodeType SeqList[MAXL];


#endif /* LCBChapterNineListFind_h */
