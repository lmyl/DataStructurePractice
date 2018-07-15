//
//  LCBXXZDChapterNineAlgorithmDesignSix.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterNineAlgorithmDesignSix_h
#define LCBXXZDChapterNineAlgorithmDesignSix_h

#include <stdio.h>
#include "LCBChapterNineBSTree.h"

//假设二叉排序树bt中所有的关键字是由整数构成，为了查找某关键字k，会得到一个查找序列，设计一个算法，判断一个序列是否是从bt中搜索关键字k 的序列


bool isSequenceOfSearchValueInBSTree(BSTNode *tree , KeyType key ,KeyType sequence[MAXL],int sequenceLength);

#endif /* LCBXXZDChapterNineAlgorithmDesignSix_h */
