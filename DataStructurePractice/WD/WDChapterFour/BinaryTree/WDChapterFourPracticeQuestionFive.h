//
//  WDChapterFourPracticeQuestionFive.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/8.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterFourPracticeQuestionFive_h
#define WDChapterFourPracticeQuestionFive_h

#include <stdio.h>
#include "LCBChapterSevenBTreeConstructionBySerial.h"

//用先序遍历序列和中序遍历序列创建一个二叉树
// 与 DataStructurePractice/DataStructurePractice/LCB/LCBChapterSeven/Example/BinaryTree/LCBChapterSevenBTreeConstructionBySerial.h 相同

BinaryTree * constructionBinaryTreeByPreAndMidSerialByWD(char preSerial[] ,int preSerialLow , int preSerialUp ,char midSerial[] ,int midSerialLow , int midSerialUp) ;

#endif /* WDChapterFourPracticeQuestionFive_h */
