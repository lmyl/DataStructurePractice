//
//  RadixSort.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef RadixSort_h
#define RadixSort_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXD 10

typedef struct radixnode {
    char data[MAXD] ;
    struct radixnode * next ;
}RadixNode;

RadixNode * RadixSort(RadixNode * list ,int digits ,int decimal) ;

#endif /* RadixSort_h */
