//
//  main.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include <stdio.h>
#include "LCBChapterNineBSTree.h"
#include "LCBXXZDChapterNineAlgorithmDesignFive.h"
#include "LCBXXZDChapterNineAlgorithmDesignSix.h"


int main(int argc, const char * argv[]) {
    // insert code here...


    KeyType array[] = {7,9,6,4,3,5,12,0,1,-4,2} ;
    
    BSTNode *tree = creatBSTree(array, 11) ;
    
    displayBSTree(tree) ;
    printf("\n");
    displayNotLessThanValueInBSTree(tree, 6);
    printf("\n") ;
    KeyType squence[] = {7,6,4,3,0,1,2} ;
    printf("%d\n",isSequenceOfSearchValueInBSTree(tree, 2, squence, 5));
    
    return 0;
} 



