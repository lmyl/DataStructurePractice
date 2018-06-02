//
//  LCBXXZDChapterFiveAlgorithmDesignOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/1.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterFiveAlgorithmDesignOne.h"

void deleteAllElement(LinkList *list)  {
    if (list == NULL) {
        return ;
    }
    LinkList *next = list->next ;
    free(list) ;
    deleteAllElement(next) ;
}
