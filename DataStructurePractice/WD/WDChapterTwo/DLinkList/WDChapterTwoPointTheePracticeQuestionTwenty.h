//
//  WDChapterTwoPointTheePracticeQuestionTwenty.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterTwoPointTheePracticeQuestionTwenty_h
#define WDChapterTwoPointTheePracticeQuestionTwenty_h

#include <stdio.h>
#include "LCBChapterTwoDLinkList.h"
#include "LCBChapterTwoPracticeQuestionFive.h"

//设有一个双链表h，每个节点中除有prior、data和next三个域外，还有一个访问频度域freq，在链表被启用之前，其值均初始化为0 ，每当进行LocateNode(h,x)运算时，令元素值为x的节点中freq域的值加1，并调整表中节点的次序，使其按访问频度的递减顺序排列，以便使频繁访问的节点总是靠近头，编写一个符合要求的LocateNode运算算法。
//与 DataStructurePractice/DataStructurePractice/LCB/LCBChapterTwo/PracticeQuestion/LCBChapterTwoPracticeQuestionFive 相同

void locateNodeWDDesign(DLinkListVariants *list,int element) ;


#endif /* WDChapterTwoPointTheePracticeQuestionTwenty_h */
