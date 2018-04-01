//
//  main.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include <stdio.h>
#include "LCBChapterTwoExampleFour.h"

ElemType a[] = {3,8,2,7,1,5,3,4,6,0};

int main(int argc, const char * argv[]) {
    // insert code here...
    SqList L;
    createList(&L, a,10);
    dispList(&L);
    moveOne(&L);
    dispList(&L);
    printf("Hello, World!\n");
    return 0;
}
