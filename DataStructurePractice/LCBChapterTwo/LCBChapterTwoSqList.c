//
//  LCBChapterTwoSqList.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoSqList.h"


SqList * createList(ElemType numbers[],int count) {
    SqList *list = initList();
    list = (SqList *)malloc(sizeof(SqList));
    for (int i = 0; i<count; i++) {
        list->data[i] = numbers[i];
    }
    list->length = count ;
    return list ;
}

SqList * initList(void) {
    SqList *list = (SqList *)malloc(sizeof(SqList));
    list->length = 0 ;
    return list ;
}


void destoryList(SqList *list) {
    free(list);
}

bool listEmpty(SqList *list) {
    if (list->length == 0) {
        return true;
    }else{
        return false;
    }
}

int listLength(SqList *list) {
    return list->length;
}

void dispList(SqList *list) {
    for (int i = 0; i<listLength(list); i++) {
        printf("%d  ",list->data[i]);
    }
    printf("\n");
}

bool getElem(SqList *list,int location,ElemType *element) {
    if (location<1 || location> listLength(list)) {
        printf("序号超出范围");
        return  false;
    }else{
        *element = list->data[location-1];
        return  true;
    }
}

int locateElem(SqList *list,ElemType element) {
    for (int i = 0; i<listLength(list); i++) {
        if (list->data[i] == element) {
            return i+1;
        }
    }
    return 0;
}

bool listInsert(SqList *list,int location, ElemType element) {
    if (location<1 || location>listLength(list)+1) {
        printf("输入序号超出范围");
        return  false;
    }else if (listLength(list) == MaxSize) {
        printf("线性表已满");
        return false ;
    }else {
        for (int j = listLength(list)-1; j>=location-1; j--) {
            list->data[j+1] = list->data[j];
        }
        list->data[location-1] = element;
        list->length += 1;
        return true;
    }
}

bool listDelete(SqList *list,int location, ElemType *element) {
    if (location<1 || location>listLength(list)) {
        printf("输入序号超出范围");
        return false;
    }else{
        getElem(list, location, element) ;
        if (listLength(list) > 1) {
            for (int j = location; j<listLength(list); j++) {
                list->data[j-1] = list->data[j] ;
            }
        }
        list->length -= 1;
        return true;
    }
}
