//
//  main.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include <stdio.h>
#include "WDChapterFourMindExtend.h"



int main(int argc, const char * argv[]) {
    // insert code here...


    char string[] = "1(5(4,7),1(9(3,2)))";
    BinaryTree *tree = creatBinaryTree(string) ;
    
    displayWeightEqualValueWayInBinaryTree(tree, 13);
    
    return 0;
} 



