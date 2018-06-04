//
//  main.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include <stdio.h>
#include "LCBChapterSixPracticeQuestionSeven.h"



int main(int argc, const char * argv[]) {
    // insert code here...

    char data[] = "(4,5,7,(#),(7,8,(#),(9,0,(8))),8)";
    GeneralTable *list = createGeneralTable(data);
    char dataTwo[] = "(4,5,7,8,(#),(7,8,(#),(9,0,(8))),8)";
    GeneralTable *listTwo = createGeneralTable(dataTwo);
    printf("%d\n",isEqualGeneralTable(list, listTwo));
    
    return 0;
} 



