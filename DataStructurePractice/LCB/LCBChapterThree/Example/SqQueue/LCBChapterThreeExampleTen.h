//
//  LCBChapterThreeExampleTen.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/24.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterThreeExampleTen_h
#define LCBChapterThreeExampleTen_h

#include <stdio.h>
#include "LCBChapterThreeCSqQueue.h"

//如果允许在环形队列的前端进行插入和删除操作，这样称为双端队列，编写环形队列的尾部删除和前端插入操作算法

bool enCSqQueueAtFront(CSqQueue *queue,ElemType element);

bool deCSqQueueAtRear(CSqQueue *queue,ElemType *element);
#endif /* LCBChapterThreeExampleTen_h */
