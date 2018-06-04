//
//  LCBChapterSixSparseMatrixMatNode.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/4.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSixSparseMatrixMatNode.h"


void creatCrossLinkedList(CrossLinkedList *matHead , ElemType data[Row][Col],int row , int col )  {
    matHead->col = col ;
    matHead->row = row ;
    CrossLinkedList *next = matHead  ;
    int max = row > col ? row : col ;
    CrossLinkedList *colNext[max] ;
    CrossLinkedList *rowNext[max] ;
    for (int i = 0; i<max; i++) {
        CrossLinkedList *head = initCrossLinkedListNode() ;
        head->tag.link = next->tag.link ;
        next->tag.link = head ;
        next = next->tag.link ;
        colNext[i] = head ;
        rowNext[i] = head ;
    }
    for (int i = 0; i<row; i++) {
        for (int j = 0; j<col; j++) {
            if (data[i][j] != 0) {
                CrossLinkedList *dataNode = initCrossLinkedListNode() ;
                dataNode->tag.value = data[i][j] ;
                dataNode->col = j ;
                dataNode->row = i ;
                dataNode->right = rowNext[i]->right;
                rowNext[i]->right = dataNode ;
                rowNext[i] = rowNext[i]->right ;
                dataNode->down  = colNext[j]->down ;
                colNext[j]->down = dataNode ;
                colNext[j] = colNext[j]->down ;
            }
        }
    }
}

void displayCrossLinkedList(CrossLinkedList *matHead) {
    int flagNewline = 0 ;
    int row = matHead->row ;
    int col = matHead->col ;
    printf("%d行  %d列\n",row,col) ;
    CrossLinkedList *rowHead = matHead->tag.link ;
    CrossLinkedList *rowAction = rowHead->right ;
    while (rowHead != matHead) {
        rowAction = rowHead ->right ;
        while (rowAction != rowHead) {
            printf("(%d,%d,%d)  ",rowAction->row,rowAction->col,rowAction->tag.value) ;
            rowAction  = rowAction->right ;
            flagNewline = 1 ;
        }
        if (flagNewline == 1) {
            flagNewline = 0;
            printf("\n");
        }
        rowHead = rowHead->tag.link ;
    }
    
}


CrossLinkedList * initCrossLinkedListNode(void) {
    CrossLinkedList *node = (CrossLinkedList *)malloc(sizeof(CrossLinkedList));
    node->right = node ;
    node->down = node ;
    node->tag.link = node ;
    return node ;
}
