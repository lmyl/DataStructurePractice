//
//  main.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include <stdio.h>
#include "LCBChapterSevenThreadedBinaryTreeTraverse.h"




int main(int argc, const char * argv[]) {
    // insert code here...

    char string[] = "A(C(,T(,I(,k,o))),U(R(,K(M,L))))";
    BinaryTree *result = creatBinaryTree(string);
    displayBinaryTree(result);
    printf("\n");
    ThreadedBinaryTree *resultOne = creatThreadedBinaryTreeByBinaryTree(result) ;
    midTraverseThreadedBinaryTree(resultOne);
    printf("\n");
    
    return 0;
} 



