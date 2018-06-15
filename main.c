//
//  main.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include <stdio.h>
#include "LCBChapterSevenPracticeQuestionTen.h"




int main(int argc, const char * argv[]) {
    // insert code here...

    char string[] = "A(C(,T(,I(,k,o))),U(R(,K(M,L))))";
    BinaryTree *result = creatBinaryTree(string);
    displayBinaryTree(result);
    printf("\n");
    BinaryTree *an = result->right ;
    BinaryTree *anot = result->left ;
    BinaryTree *son = an->left->right ;
    BinaryTree *sontwo = an->left->right->right ;
    
    printf("%d",isHaveCommonAncestorInBinaryTree(anot, son, sontwo));
    printf("\n");
    
    return 0;
} 



