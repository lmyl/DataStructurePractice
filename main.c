//
//  main.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include <stdio.h>

#include "WDChapterTwoPracticeQuestionNine.h"



int main(int argc, const char * argv[]) {
    // insert code here...

    int array[] = {-1,2,3,4,5,6,-7,0,0,8,-1,0,0,0,6,5,7,0,0,0,3,0,2,3,7,7,-1};
    int arrayTwo[] = {2,3,4,5,6,7,8,9};
    int arrayThree[] = {-20,22,12,-21,2,10,2,0,0,-10,0,1};
    int arrayFour[] = {0,0,0,0,7};
    SqList *list = createSqList(arrayTwo, 5);
    dispSqList(list);
    locateSqElementAndAdjust(list, 3);
    dispSqList(list);

    

    
    return 0;
}


