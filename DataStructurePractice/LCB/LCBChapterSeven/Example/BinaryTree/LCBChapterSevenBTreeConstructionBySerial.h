//
//  LCBChapterSevenBTreeConstructionBySerial.h
//  DataStructurePractice
//
//  Created by ly on 2018/6/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterSevenBTreeConstructionBySerial_h
#define LCBChapterSevenBTreeConstructionBySerial_h

#include <stdio.h>
#include "LCBChapterSevenBTree.h"

//通过先序序列和中序序列构造
BinaryTree * constructionBinaryTreeByPreAndMidSerial(char preSerial[] ,int preSerialLow , int preSerialUp ,char midSerial[] ,int midSerialLow , int midSerialUp) ;

//通过后序序列和中序序列构造
BinaryTree * constructionBinaryTreeByAfterAndMidSerial(char afterSerial[] ,int afterSerialLow , int afterSerialUp ,char midSerial[] ,int midSerialLow , int midSerialUp) ;

#endif /* LCBChapterSevenBTreeConstructionBySerial_h */
