//
//  LCBChapterSevenHuffmanTree.h
//  DataStructurePractice
//
//  Created by ly on 2018/6/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterSevenHuffmanTree_h
#define LCBChapterSevenHuffmanTree_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char ElemType;

typedef struct {
    ElemType data ;
    double weight ;
    int parent ;
    int left ;
    int right ;
}HuffmanTree;

void creatHuffmanTree(HuffmanTree tree[] , int numbers) ;
#endif /* LCBChapterSevenHuffmanTree_h */
