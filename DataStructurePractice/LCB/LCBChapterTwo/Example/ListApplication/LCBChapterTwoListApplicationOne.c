//
//  LCBChapterTwoListApplicationOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwoListApplicationOne.h"

#define MaxSize 1000

typedef  int ElemType;

typedef struct Node{
    ElemType data[MaxSize];
    struct Node *next;
}NodeChild;

typedef struct {
    int row,col;
    NodeChild *next;
}NodeHead;


typedef struct{
    int result[2];
} ParamentSet;

NodeHead * input(char *name) ;
ParamentSet * paramentSet(int firstCol,int secondCol);
NodeHead * naturalJoin(NodeHead *first,NodeHead *second,int firstCol,int secondCol);
NodeHead * initNodeHead(void) ;
NodeChild * initNodeChild(void) ;
void displayNodeHead(NodeHead *head);

void solveNaturalJoin(void) {
    NodeHead *first = input("A");
    printf("A数组如下:\n");
    displayNodeHead(first);
    NodeHead *second = input("B");
    printf("B数组如下:\n");
    displayNodeHead(second);
    ParamentSet *parament = paramentSet(first->col, second->col);
    NodeHead *result = naturalJoin(first, second, parament->result[0], parament->result[1]);
    printf("结果如下:\n");
    displayNodeHead(result);
}

void displayNodeHead(NodeHead *head) {
    int row = head->row;
    int col = head->col;
    NodeChild *nextRow = head->next;
    for (int i = 0; i<row; i++) {
        for (int j = 0; j<col; j++) {
            printf("%d  ",nextRow->data[j]);
        }
        nextRow = nextRow->next;
        printf("\n");
    }
}

NodeHead * input(char *name) {
    int inputRow ,inputCol ;
reInput:
    printf("请输入%s数组大小 <Row,Col> 其中Row>=1，Col>=1\n",name);
    scanf("%d,%d",&inputRow,&inputCol);
    if (inputCol < 1 || inputRow < 1) {
        printf("输入不合法，请重新输入\n");
        goto reInput ;
    }
    NodeHead *head = initNodeHead();
    NodeChild *childNext = initNodeChild();
    ElemType inputdata ;
    for (int i = 0; i<inputRow; i++) {
        NodeChild *child = initNodeChild();
        for (int j = 0; j<inputCol; j++) {
            printf("第%d行%d列:",i+1,j+1);
            scanf("%d",&inputdata);
            child->data[j] = inputdata ;
        }
        if (i==0) {
            child->next = head->next;
            head->next = child;
            childNext = head->next;
        }else{
            child->next = childNext->next;
            childNext->next = child;
            childNext = childNext->next;
        }
    }
    head->col = inputCol;
    head->row = inputRow;
    return head ;
}


ParamentSet * paramentSet(int firstCol,int secondCol) {
    int inputFirstCol ,inputSecondCol ;
reInput:
    printf("请输入自然连接的条件 <i=j> 其中1<=i<=%d,1<=j<=%d \n",firstCol,secondCol);
    scanf("%d=%d",&inputFirstCol,&inputSecondCol);
    if (inputFirstCol>firstCol || inputFirstCol<1 || inputSecondCol>secondCol || inputSecondCol<1) {
        printf("输入不合法，请重新输入\n");
        goto reInput ;
    }
    ParamentSet *result = (ParamentSet *)malloc(sizeof(ParamentSet));
    result->result[0] = inputFirstCol;
    result->result[1] = inputSecondCol;
    return result;
}

NodeHead * naturalJoin(NodeHead *first,NodeHead *second,int firstSectionCol,int secondSectionCol) {
    NodeHead *result = initNodeHead();
    NodeChild *resultNext = initNodeChild() ;
    int firstCol = first->col;
    int firstRow = first->row;
    int secondCol = second->col;
    int secondRow = second->row;
    int countRow  = 0 ;
    NodeChild *firstNext = first->next;
    for (int i = 1; i<=firstRow; i++) {
        ElemType data = firstNext->data[firstSectionCol-1];
        NodeChild *secondNext = second->next;
        for (int j = 1; j<=secondRow; j++) {
            if (data == secondNext->data[secondSectionCol-1]) {
                NodeChild *child = initNodeChild();
                for (int k = 0; k<firstCol; k++) {
                    child->data[k] = firstNext->data[k];
                }
                for (int k = firstCol; k<firstCol+secondCol; k++) {
                    child->data[k] = secondNext->data[k-firstCol];
                }
                countRow ++ ;
                if (countRow == 1) {
                    child->next = result->next;
                    result->next = child;
                    resultNext = result->next;
                }else{
                    child->next = resultNext->next;
                    resultNext->next = child;
                    resultNext = resultNext->next;
                }
            }
            secondNext = secondNext->next;
        }
        firstNext = firstNext->next;
    }
    if (countRow != 0) {
        result->col = firstCol+secondCol;
        result->row = countRow;
    }else{
        result->col = 0;
        result->row = countRow;
    }
    
    return result ;
}

NodeHead * initNodeHead(void)  {
    NodeHead *head = (NodeHead *)malloc(sizeof(NodeHead));
    head->col = 0;
    head->row = 0;
    head->next = NULL;
    return head;
}

NodeChild * initNodeChild(void)  {
    NodeChild *child = (NodeChild *)malloc(sizeof(NodeChild));
    child->next = NULL;
    return child ;
}
