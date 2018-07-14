//
//  LCBChapterNineIndexSearch.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterNineIndexSearch_h
#define LCBChapterNineIndexSearch_h

#include <stdio.h>
#include "LCBChapterNineListFind.h"


#define MaxIndexLength 500

typedef struct {
    KeyType key ;
    int link ;
}IndexType;

typedef IndexType IDX[MaxIndexLength];

int indexSearch(IDX indexList ,int indexLength,SeqList seqList, int elementNumbers , int value) ;

#endif /* LCBChapterNineIndexSearch_h */
