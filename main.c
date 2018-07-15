//
//  main.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include <stdio.h>
#include "WDChapterSixMindExtend.h"


int main(int argc, const char * argv[]) {
    // insert code here...


    int array[] = {5,5,5,3,-1,1,0,5} ;
    SqList * list = createSqList(array, 8) ;
    printf("%d\n",findOutMainElementTheBestSloveByWD(list)) ;
    printf("%d\n",findOutMainElementTheBestSloveAnoterSlove(list)) ;
    
    
    return 0;
} 



