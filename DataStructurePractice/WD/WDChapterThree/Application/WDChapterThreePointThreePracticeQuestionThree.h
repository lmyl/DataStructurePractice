//
//  WDChapterThreePointThreePracticeQuestionThree.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/28.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef WDChapterThreePointThreePracticeQuestionThree_h
#define WDChapterThreePointThreePracticeQuestionThree_h

#include <stdio.h>


/*利用一个栈实现以下递归函数的非递归计算
        1                                 n=0
 Pn(x) =   2x                                n=1
        2xPn-1(x) - 2(n-1)Pn-2(x)         n>1
 */

int solvingRecursiveFunctions(int layer,int unknown) ;

#endif /* WDChapterThreePointThreePracticeQuestionThree_h */
