//
//  WDChapterSixMindExtend.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterSixMindExtend.h"

#define DELETEKEY -127

int findOutMainElementTheBestSloveByWD(SqList *list) {
    return findOutMainElementTheBestSlove(list) ;
}


int findOutMainElementTheBestSloveAnoterSlove(SqList *list) {
    int after = 0 ;
    int fronter = 1 ;
    int backUp[list->length] ;
    for (int i =  0; i<list->length; i++) {
        backUp[i] = list->data[i] ;
    }
    while (fronter < list->length) {
        if (backUp[fronter] == backUp[after]) {
            fronter ++ ;
        }else{
            backUp[fronter] = DELETEKEY ;
            backUp[after] = DELETEKEY ;
            while (backUp[after] == DELETEKEY) {
                after ++ ;
            }
            if (after > fronter) {
                fronter = after + 1 ;
            }else{
                fronter ++ ;
            }
        }
    }
    if (after >= list->length) {
        return -1 ;
    }
    int count = 0 ;
    for (int i = 0; i<list->length; i++) {
        if (list->data[i] == backUp[after]) {
            count ++ ;
            if (count > list->length / 2) {
                return list->data[i] ;
            }
        }
    }
    return -1 ;
}
