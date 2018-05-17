//
//  LCBXXZDChapterTwoAlgorithmDesignSeventeen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignSeventeen.h"


LCBXXZDTwoDesignSeventeen * splitLinkListToTwoLinkList(LinkList *list) {
    LinkList *resultOne = initLinkList();
    LinkList *resultOneNext = resultOne;
    LinkList *resultTwo = initLinkList();
    LinkList *resultTwoNext = resultTwo;
    LinkList *next = list->next;
    while (next != NULL) {
        LinkList *dataOne = initLinkList();
        dataOne->data = next->data;
        dataOne->next = resultOneNext->next;
        resultOneNext->next = dataOne;
        resultOneNext = resultOneNext->next;
        next = next->next ;
        if (next  != NULL) {
            LinkList *dataTwo = initLinkList();
            dataTwo->data = next->data;
            dataTwo->next = resultTwoNext->next;
            resultTwoNext->next = dataTwo;
            resultTwoNext = resultTwoNext->next;
            next = next->next;
        }
    }
    LCBXXZDTwoDesignSeventeen *result = (LCBXXZDTwoDesignSeventeen *)malloc(sizeof(LCBXXZDTwoDesignSeventeen));
    result->result[0] = resultOne;
    result->result[1] = resultTwo;
    return result ;
}
