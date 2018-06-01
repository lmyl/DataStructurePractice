//
//  LCBChapterFiveExampleFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFiveExampleFour.h"

void destoryAllLinkListNodeInNoHeadNode(LinkList *list) {
    if (list == NULL) {
        return ;
    }
    LinkList *next = list->next ;
    free(list) ;
    destoryAllLinkListNodeInNoHeadNode(next) ;
}
