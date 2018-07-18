//
//  main.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include <stdio.h>
#include "DirectInsertSort.h"
#include "BinaryInsertSort.h"
#include "ShellSort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "DirectSelectSort.h"
#include "HeapSort.h"
#include "MergeSort.h"
#include "RadixSort.h"


#include "WDChapterSevenPracticeQuestionFour.h"


int main(int argc, const char * argv[]) {
    // insert code here...


    int array[] = {5,2,4,8,7,4,7,8,9,4,6,778,4,34,6} ;
//    int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16} ;
//    int array[] = {16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    int info[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15} ;
    SeqList list ;
    for (int i = 0; i<15; i++) {
        list[i].key = array[i] ;
        list[i].data[0] = info[i] ;
    }


    printf("%d\n",findRankValueSmallElement(list, 15, 9).key);

    for (int i = 0; i<15; i++) {
        printf("%d ",list[i].key);
    }
//    printf("\n") ;
//    for (int i = 0; i<15; i++) {
//        printf("%d ",list[i].data[0]);
//    }
    printf("\n") ;
    
//    LinkList * list = createLinkListF(array, 15);
//    directSelectSortInLinkList(list) ;
//    dispLinkList(list) ;
    
//    char data[10][2] = {
//        {7,5},
//        {2,3},
//        {9,8},
//        {4,4},
//        {5,7},
//        {1,2},
//        {2,9},
//        {6,4},
//        {3,8},
//        {8,2}
//    };
//    RadixNode * list = NULL ;
//    RadixNode *next = list ;
//    for (int i = 0; i<10; i++) {
//        if (list == NULL) {
//            RadixNode *new = (RadixNode *)malloc(sizeof(RadixNode)) ;
//            new->next = NULL ;
//            for (int j = 0; j<2; j++) {
//                new->data[j] = data[i][j] ;
//            }
//            list = new ;
//            next = list ;
//        }else{
//            RadixNode *new = (RadixNode *)malloc(sizeof(RadixNode)) ;
//            for (int j = 0; j<2; j++) {
//                new->data[j] = data[i][j] ;
//            }
//            new->next = next->next ;
//            next->next = new ;
//            next = next->next ;
//        }
//    }
//
//    list = RadixSort(list, 2, 10) ;
//    next = list ;
//    while (next != NULL) {
//        for (int j = 0; j<2; j++) {
//            printf("%d",next->data[j]) ;
//        }
//        printf("  ") ;
//        next = next->next ;
//    }
//    printf("\n");
    return 0;
} 



