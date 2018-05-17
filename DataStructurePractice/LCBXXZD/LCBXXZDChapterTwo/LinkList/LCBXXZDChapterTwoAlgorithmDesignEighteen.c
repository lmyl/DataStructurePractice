//
//  LCBXXZDChapterTwoAlgorithmDesignEighteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignEighteen.h"

LCBXXZDTwoDesignEighteen * splitLinkListToThreeCLinkList(LinkList *list) {
    LinkList *characterResult = initLinkList();
    LinkList *characterResultNext = characterResult ;
    LinkList *numberResult = initLinkList();
    LinkList *numberResultNext = numberResult ;
    LinkList *otherResult = initLinkList();
    LinkList *otherResultNext = otherResult ;
    LinkList *next = list->next;
    LinkList *nextAfter ;
    list->next = NULL ;
    while (next != NULL) {
        nextAfter = next->next ;
        if (next->data >= '0' && next->data <= '9') {
            next->next = numberResultNext->next;;
            numberResultNext->next = next;
            numberResultNext = numberResultNext->next;
            next = nextAfter ;
        }else if ((next->data >= 'a' && next->data <= 'z') || (next->data >= 'A' && next->data <= 'Z')) {
            next->next = characterResultNext->next;;
            characterResultNext->next = next;
            characterResultNext = characterResultNext->next;
            next = nextAfter ;
        }else{
            next->next = otherResultNext->next;;
            otherResultNext->next = next;
            otherResultNext = otherResultNext->next;
            next = nextAfter ;
        }
    }
    numberResultNext->next = numberResult;
    characterResultNext ->next = characterResult;
    otherResultNext->next = otherResult;
    LCBXXZDTwoDesignEighteen *result = (LCBXXZDTwoDesignEighteen *)malloc(sizeof(LCBXXZDTwoDesignEighteen));
    result->result[0] = (CLinkList *)characterResult;
    result->result[1] = (CLinkList *)numberResult;
    result->result[2] = (CLinkList *)otherResult;
    return result ;
}
