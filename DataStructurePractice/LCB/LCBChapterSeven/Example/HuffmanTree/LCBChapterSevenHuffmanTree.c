//
//  LCBChapterSevenHuffmanTree.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenHuffmanTree.h"

#define Max 1000000

void creatHuffmanTree(HuffmanTree tree[] , int numbers)  {
    int length = 2*numbers - 1 ;
    for (int i = 0; i<numbers; i++) {
        tree[i].parent = -1 ;
        tree[i].right = -1 ;
        tree[i].left = -1 ;
    }
    for (int i = numbers; i<length; i++) {
        int minOne = Max ;
        int minOneLocation = -1 ;
        int minTwo = Max ;
        int minTwoLocation = -1 ;
        for (int j = 0; j<i; j++) {
            if (tree[j].parent == -1 ) {
                if (tree[j].weight <= minOne) {
                    minTwo = minOne ;
                    minTwoLocation = minOneLocation ;
                    minOne = tree[j].weight ;
                    minOneLocation = j ;
                }else if (tree[j].weight <= minTwo && tree[j].weight > minOne) {
                    minTwoLocation = j ;
                    minTwo = tree[j].weight ;
                }
            }
            HuffmanTree newTree ;
            newTree.parent = -1 ;
            newTree.left = minOneLocation ;
            newTree.right = minTwoLocation ;
            tree[minOneLocation].parent = i ;
            tree[minTwoLocation].parent = i ;
            tree[i] = newTree ;
        }
    }
}
