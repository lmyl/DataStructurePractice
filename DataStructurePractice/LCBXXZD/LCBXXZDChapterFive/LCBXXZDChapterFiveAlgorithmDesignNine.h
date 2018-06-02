//
//  LCBXXZDChapterFiveAlgorithmDesignNine.h
//  DataStructurePractice
//
//  Created by ly on 2018/6/2.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBXXZDChapterFiveAlgorithmDesignNine_h
#define LCBXXZDChapterFiveAlgorithmDesignNine_h

#include <stdio.h>
#include <stdbool.h>
/*
 棋子移动问题，有2n个棋子(n>=4)排成一行，开始位置为白色全部在左边，黑色全部在右边，移动棋子的规则是每次必须同时移动相邻两个棋子，颜色不限，可以移动左移也可以右移到空位上去，但
 不能调换两个棋子的左右位置，每次移动必须跳过若干个棋子(不能平移)，要求最后能够移成黑白相间的一行棋子
 */

//首先将中间两个移到最后，然后将倒数第3-4个棋子移到中间，此时问题变为n-1，当n=4时再用特殊的办法解题

void chessMoveProblem(int number) ;

#endif /* LCBXXZDChapterFiveAlgorithmDesignNine_h */
