//
//  LCBChapterTwoOrderSqList.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoOrderSqList.h"

OrderSqList * createOrderSqList(ElemType numbers[],int count) {
    OrderSqList *list = initOrderSqList();
    for (int i = 0; i<count; i++) {
        int j = i ;
        while (j>0 && list->data[j-1] > numbers[i]) {
            list->data[j] = list->data[j-1];
            j--;
        }
        list->data[j] = numbers[i];
    }
    list->length = count ;
    return list ;
}

OrderSqList * initOrderSqList(void) {
    OrderSqList *list = (OrderSqList *)malloc(sizeof(OrderSqList));
    list->length = 0 ;
    return list ;
}


void destoryOrderSqList(OrderSqList *list) {
    free(list);
}

bool listOrderSqEmpty(OrderSqList *list) {
    if (list->length == 0) {
        return true;
    }else{
        return false;
    }
}

int listOrderSqLength(OrderSqList *list) {
    return list->length;
}

void dispOrderSqList(OrderSqList *list) {
    printf("(");
    for (int i = 0; i<listOrderSqLength(list); i++) {
        printf("%d  ",list->data[i]);
    }
    printf(")\n");
}

bool getOrderSqElem(OrderSqList *list,int location,ElemType *element) {
    if (location<1 || location> listOrderSqLength(list)) {
        printf("序号超出范围");
        return  false;
    }else{
        *element = list->data[location-1];
        return  true;
    }
}

int locateOrderSqElem(OrderSqList *list,ElemType element) {
    for (int i = 0; i<listOrderSqLength(list); i++) {
        if (list->data[i] == element) {
            return i+1;
        }else if (list->data[i] > element) {
            return 0 ;
        }
    }
    return 0;
}

void listOrderSqInsert(OrderSqList *list, ElemType element) {
    int i = listOrderSqLength(list);
    while (i>0 && list->data[i] > element) {
        list->data[i] = list->data[i-1];
        i--;
    }
    list->data[i] = element;
    list->length += 1;
}

bool listOrderSqDelete(OrderSqList *list,int location, ElemType *element) {
    if (location<1 || location>listOrderSqLength(list)) {
        printf("输入序号超出范围");
        return false;
    }else{
        getOrderSqElem(list, location, element) ;
        if (listOrderSqLength(list) > 1) {
            for (int j = location; j<listOrderSqLength(list); j++) {
                list->data[j-1] = list->data[j] ;
            }
        }
        list->length -= 1;
        return true;
    }
}
