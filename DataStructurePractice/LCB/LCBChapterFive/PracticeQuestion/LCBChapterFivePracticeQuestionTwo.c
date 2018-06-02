//
//  LCBChapterFivePracticeQuestionTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterFivePracticeQuestionTwo.h"


int lengthInNoHeadLinkList(LinkList *list) {
    if (list == NULL) {
        return 0 ;
    }
    return 1 + lengthInNoHeadLinkList(list->next) ;
}

void displayForwardNoHeadLinkList(LinkList *list) {
    if (list == NULL) {
        return ;
    }
    printf("%d  ",list->data);
    dispLinkList(list->next) ;
}

void displayReverseNoHeadLinkList(LinkList *list) {
    if (list == NULL) {
        return ;
    }
    dispLinkList(list->next);
    printf("%d  ",list->data) ;
}

void deleteTheFirstElementEqualValueInNoHeadLinkList(LinkList * list,int value) {
    if (list == NULL) {
        return ;
    }
    if (list->data == value) {
        LinkList *next = list->next ;
        free(list);
        list = next ;
        return ;
    }
    deleteTheFirstElementEqualValueInNoHeadLinkList(list->next, value) ;
}

void deleteAllElementEqualValueInNoHeadLinkList(LinkList *list,int value) {
    if (list == NULL) {
        return ;
    }
    if (list->data == value) {
        LinkList *next = list->next;
        free(list);
        list = next;
        deleteAllElementEqualValueInNoHeadLinkList(list, value) ;
    }else{
        deleteAllElementEqualValueInNoHeadLinkList(list->next, value) ;
    }
}

int maxInNoHeadLinkList(LinkList *list) {
    if (list == NULL) {
        printf("链表为空\n");
        return -1;
    }
    if (list->next == NULL) {
        return list->data ;
    }
    int maxLocation = list->data ;
    int maxGobal = maxInNoHeadLinkList(list->next) ;
    if (maxGobal > maxLocation) {
        return maxGobal ;
    }else{
        return maxLocation ;
    }
}

int minInNoHeadLinkList(LinkList *list) {
    if (list == NULL) {
        printf("链表为空\n");
        return -1;
    }
    if (list->next == NULL) {
        return list->data ;
    }
    int minLocation = list->data;
    int minGobal = minInNoHeadLinkList(list->next);
    if (minGobal < minLocation) {
        return minGobal ;
    }else{
        return minLocation ;
    }
}
