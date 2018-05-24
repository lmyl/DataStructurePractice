//
//  LCBChapterThreePracticeQuestionFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreePracticeQuestionFour.h"

void inputData(int *data[]) ;

void operationQueue(void)  {
    CSqQueue * queue = initCSqQueue();
    printf("请输入数据\n");
    while (true) {
        int data ;
        scanf("%d",&data) ;
        if (data > 0) {
            if (!enCSqQueue(queue, data)) {
                printf("队列已满\n");
                exit(1);
            }
        }else if (data < 0) {
            if (!deCSqQueue(queue, &data)) {
                printf("队列已空\n");
                exit(2);
            }
        }else{
            exit(3);
        }
    }
}


