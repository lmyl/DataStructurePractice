
//
//  LCBXXZDChapterTwoAlgorithmDesignTen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignTen.h"


bool isSubsquence(LinkList *mainList,LinkList *modelList) {
    LinkList *mainNext = mainList->next;
    LinkList *mainActionNext = mainNext ;
    LinkList *modelNext = modelList->next;
    while (mainNext != NULL) {
        modelNext = modelList->next;
        while (modelNext != NULL && mainActionNext != NULL && modelNext->data == mainActionNext->data) {
            modelNext = modelNext->next;
            mainActionNext = mainActionNext->next;
        }
        if (modelNext == NULL) {
            return true ;
        }else{
            mainNext = mainNext->next;
            mainActionNext = mainNext;
        }
    }
    return false ;
}
