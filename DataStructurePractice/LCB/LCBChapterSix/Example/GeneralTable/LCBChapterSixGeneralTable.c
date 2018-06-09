//
//  LCBChapterSixGeneralTable.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/4.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSixGeneralTable.h"

int GeneralTableLength(GeneralTable *list) {
    GeneralTable *sublist = list->value.sublist ;
    int count = 0;
    while (sublist != NULL) {
        count ++ ;
        sublist = sublist->next ;
    }
    return count ;
}

int GeneralTableDepth(GeneralTable *list) {
    int max = -1;
    GeneralTable *next = list;
    while (next != NULL) {
        if (next->tag == 1 ) {
            int deep =  GeneralTableDepth(next->value.sublist)  ;
            if (deep > max) {
                max = deep ;
            }
        }
        next = next->next;
    }
    return max + 1 ;
}

void displayGeneralTable(GeneralTable *list) {
    GeneralTable *next = list ;
    if (list == NULL) {
        printf("#") ;   //若为空则直接打印#
    }
    while (next != NULL) {
        if (next->tag == 0) {
            printf("%c",next->value.data);
        }else{
            printf("(");
            displayGeneralTable(next->value.sublist) ;  //陷入下一层
            printf(")");
        }
        next = next->next;  //前往下一个兄弟节点
        if (next != NULL) { //判断自己是否是最后一个节点来打印,
            printf(",") ;
        }
    }
}

GeneralTable * createGeneralTableByRecursive(char string[],int *countLocation)  ;

GeneralTable * createGeneralTable(char string[]) {
    int count = 0;
    return createGeneralTableByRecursive(string, &count);
}

GeneralTable * createGeneralTableByRecursive(char string[],int *countLocation) {
    GeneralTable *result = initGeneralTable() ;
    GeneralTable *next = result ;
    while (string[*countLocation] != '\0') {
        if (string[*countLocation] == '(') {    //将其节点设置成tag = 1
            next->tag = 1 ; //设置节点信息
            *countLocation = *countLocation + 1 ;   //字符串数组往后移动一个
            next->value.sublist = createGeneralTableByRecursive(string,countLocation) ;
        }else if (string[*countLocation] == ')') {
            next->next = NULL ; //将next后面置为空，也可以不设置为空，因为初始化使已经保证最后一个的节点比为空
            return result ; //返回上级
        }else if (string[*countLocation] == ',') {
            GeneralTable *data = initGeneralTable();    //代表必然后面还有一个节点，因此可以将next数组后移一个
            next->next = data ;
            next = next->next ;
        }else if (string[*countLocation] == '#') {  //代表后一个必然是）因此可以数组后移一个，并且将此层设置为空返回上城
            *countLocation = *countLocation + 1 ;
            return NULL ;
        }else { //设置节点信息tag = 0
            next->tag = 0 ;
            next->value.data = (int )string[*countLocation] ;
        }
        *countLocation = *countLocation + 1 ;   //数组继续往后扫描一个
    }
    return result ;
}

GeneralTable * initGeneralTable(void) {
    GeneralTable * list = (GeneralTable *)malloc(sizeof(GeneralTable)) ;
    list->tag = 1 ;
    list->value.sublist = NULL ;
    list->next = NULL ;
    return list ;
}
