//
//  LCBChapterTwoSqList.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoSqList.h"


SqList * createSqList(ElemType numbers[],int count) {
    SqList *list = initSqList();
    for (int i = 0; i<count; i++) {
        list->data[i] = numbers[i];
    }
    list->length = count ;
    return list ;
}

SqList * initSqList(void) {
    SqList *list = (SqList *)malloc(sizeof(SqList));
    list->length = 0 ;
    return list ;
}


void destorySqList(SqList *list) {
    free(list);
}

bool listSqEmpty(SqList *list) {
    if (list->length == 0) {
        return true;
    }else{
        return false;
    }
}

int listSqLength(SqList *list) {
    return list->length;
}

void dispSqList(SqList *list) {
    for (int i = 0; i<listSqLength(list); i++) {
        printf("%d  ",list->data[i]);
    }
    printf("\n");
}

bool getSqElem(SqList *list,int location,ElemType *element) {
    if (location<1 || location> listSqLength(list)) {
        printf("序号超出范围");
        return  false;
    }else{
        *element = list->data[location-1];
        return  true;
    }
}

int locateSqElem(SqList *list,ElemType element) {
    for (int i = 0; i<listSqLength(list); i++) {
        if (list->data[i] == element) {
            return i+1;
        }
    }
    return 0;
}

bool listSqInsert(SqList *list,int location, ElemType element) {
    if (location<1 || location>listSqLength(list)+1) {
        printf("输入序号超出范围");
        return  false;
    }else if (listSqLength(list) == MaxSize) {
        printf("线性表已满");
        return false ;
    }else {
        for (int j = listSqLength(list)-1; j>=location-1; j--) {
            list->data[j+1] = list->data[j];
        }
        list->data[location-1] = element;
        list->length += 1;
        return true;
    }
}

bool listSqDelete(SqList *list,int location, ElemType *element) {
    if (location<1 || location>listSqLength(list)) {
        printf("输入序号超出范围");
        return false;
    }else{
        getSqElem(list, location, element) ;
        if (listSqLength(list) > 1) {
            for (int j = location; j<listSqLength(list); j++) {
                list->data[j-1] = list->data[j] ;
            }
        }
        list->length -= 1;
        return true;
    }
}
