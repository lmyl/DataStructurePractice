//
//  LCBChapterSevenHuffmanCode.h
//  DataStructurePractice
//
//  Created by ly on 2018/6/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterSevenHuffmanCode_h
#define LCBChapterSevenHuffmanCode_h

#include <stdio.h>
#include "LCBChapterSevenHuffmanTree.h"

#define CodeLength 10

typedef struct {
    ElemType code[CodeLength];
    int startIndex ;
}HuffmanCode;

void createHuffmanCode(HuffmanTree tree[],HuffmanCode code[] , int numbers) ;

#endif /* LCBChapterSevenHuffmanCode_h */
