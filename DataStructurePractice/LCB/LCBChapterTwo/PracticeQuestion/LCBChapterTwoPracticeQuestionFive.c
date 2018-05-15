//
//  LCBChapterTwoPracticeQuestionFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoPracticeQuestionFive.h"


DLinkListVariants * createDLinkListVariantsF(ElemType numbers[], int count){
    DLinkListVariants *list = initDLinkListVariants();
    for (int i = 0; i<count; i++) {
        DLinkListVariants *data = initDLinkListVariants();
        data->data = numbers[i];
        data->next = list->next;
        list->next = data;
        if (data->next != NULL) {
            data->next->prior = data;
        }
        data->prior = list;
    }
    return list;
}

DLinkListVariants * initDLinkListVariants(void) {
    DLinkListVariants *list = (DLinkListVariants *)malloc(sizeof(DLinkListVariants));
    list->prior = NULL;
    list->next = NULL;
    list->freq = 0 ;
    return list;
}

void dispDLinkListVariants(DLinkListVariants *list) {
    printf("(");
    DLinkListVariants *next = list->next;
    while (next != NULL) {
        printf("%d,%d  ",next->data,next->freq);
        next = next->next;
    }
    printf(")\n");
}


void locateNode(DLinkListVariants *list,int element) {
    DLinkListVariants *next = list->next;
    DLinkListVariants *action = list->next;
    while (next != NULL) {
        action = list->next;
        if (next->data == element) {
            next->freq ++;
            while (action != next && action->freq > next->freq) {
                action = action->next;
            }
            if (action != next) {
                DLinkListVariants *nextPre = next->prior;
                DLinkListVariants *actionPre = action->prior;
                actionPre->next = next;
                next->prior = actionPre;
                action->prior = next;
                nextPre->next = next ->next;
                if (next->next != NULL) {
                    next->next->prior = nextPre;
                }
                next->next = action ;
                next = nextPre->next;
            }else{
                next = next->next;
            }
        }else{
            next = next->next;
        }
    }
}

