//
//  LCBChapterTwoSqList.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoSqList.h"


void createList(SqList *L,ElemType a[],int n) {
    initList(L);
    for (int i = 0; i<n; i++) {
        L->data[i] = a[i];
    }
    L->length = n ;
}

void initList(SqList *L) {
    L = (SqList *)malloc(sizeof(SqList));
    L->length = 0 ;
}


void destoryList(SqList *L) {
    free(L);
}

bool listEmpty(SqList *L) {
    if (L->length == 0) {
        return true;
    }else{
        return false;
    }
}

int listLength(SqList *L) {
    return L->length;
}

void dispList(SqList *L) {
    for (int i = 0; i<listLength(L); i++) {
        printf("%d   ",L->data[i]);
    }
    printf("\n");
}

bool getElem(SqList *L,int i,ElemType *e) {
    if (i<1 || i> listLength(L)) {
        return  false;
    }else{
        *e = L->data[i];
        return  true;
    }
}

int locateElem(SqList *L,ElemType e) {
    for (int i = 0; i<listLength(L); i++) {
        if (L->data[i] == e) {
            return i;
        }
    }
    return 0;
}

bool listInsert(SqList *L,int i, ElemType e) {
    if (i<1 || i>listLength(L)+1) {
        printf("输入序号超出范围");
        return  false;
    }else if (listLength(L) == MaxSize) {
        printf("线性表已满");
        return false ;
    }else {
        for (int j = listLength(L); j>=i; j--) {
            L->data[j] = L->data[j-1];
        }
        L->data[i-1] = e;
        L->length += 1;
        return true;
    }
}

bool listDelete(SqList *L,int i, ElemType *e) {
    if (i<1 || i>listLength(L)) {
        printf("输入序号超出范围");
        return false;
    }else{
        if (listLength(L) > 1) {
            for (int j = listLength(L)-1;j>=i;j--) {
                L->data[j-1] = L->data[j];
            }
        }
        L->length -= 1;
        return true;
    }
}
