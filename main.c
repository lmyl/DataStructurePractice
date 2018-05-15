//
//  main.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include <stdio.h>

#include "LCBChapterTwoPracticeQuestionTwo.h"



int main(int argc, const char * argv[]) {
    // insert code here...

    int array[] = {1,2,3,4,5,6,7,8,7,6,5,4,3,2,1,7};
    SqList *list = createSqList(array, 16);
    dispSqList(list);
    deletElementRangeInSqList(list, 5, 7);
    dispSqList(list);
   
    return 0;
}


