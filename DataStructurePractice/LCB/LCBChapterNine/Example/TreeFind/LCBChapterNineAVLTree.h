//
//  LCBChapterNineAVLTree.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterNineAVLTree_h
#define LCBChapterNineAVLTree_h

#include <stdio.h>
#include "LCBChapterNineBSTree.h"

typedef struct avlnode {
    KeyType key ;
    int blanceFactor ;
    InfoType data ;
    struct avlnode * right ;
    struct avlnode * left ;
}AVLNode;


#endif /* LCBChapterNineAVLTree_h */
