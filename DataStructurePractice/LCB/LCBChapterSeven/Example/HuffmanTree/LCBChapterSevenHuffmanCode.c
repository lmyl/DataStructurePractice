//
//  LCBChapterSevenHuffmanCode.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenHuffmanCode.h"

void createHuffmanCode(HuffmanTree tree[],HuffmanCode code[] , int numbers) {
    for (int i = 0; i<numbers; i++) {
        HuffmanCode newCode ;
        newCode.startIndex = CodeLength ;
        int indexTemp = i ;
        while (tree[indexTemp].parent != -1) {
            HuffmanTree parent = tree[tree[indexTemp].parent] ;
            if (parent.left == indexTemp) {
                newCode.startIndex -- ;
                newCode.code[newCode.startIndex] = '0' ;
            }else if (parent.right == indexTemp) {
                newCode.startIndex -- ;
                newCode.code[newCode.startIndex] = '1' ;
            }
            indexTemp = tree[indexTemp].parent ;
        }
        code[i] = newCode ;
    }
}
