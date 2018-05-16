//
//  LCBChapterTwoMachineExperimentSeven.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTwoMachineExperimentSeven_h
#define LCBChapterTwoMachineExperimentSeven_h

#include <stdio.h>
#include "LCBChapterTwoLinkList.h"

//用单链表存储一元多项式，并实现两个多项式的相加运算
typedef LinkList PolynomialLinkList;

void displayPolynomialLinkList(PolynomialLinkList *list) ;
PolynomialLinkList * addPolynomialLinkList(PolynomialLinkList *listOne , PolynomialLinkList *listTwo);


#endif /* LCBChapterTwoMachineExperimentSeven_h */
