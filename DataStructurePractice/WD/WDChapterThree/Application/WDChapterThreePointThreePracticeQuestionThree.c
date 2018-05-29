//
//  WDChapterThreePointThreePracticeQuestionThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/28.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterThreePointThreePracticeQuestionThree.h"

#define MaxSize 100

typedef struct {
    int layer ;
    int value ;
}RecursiveNode;

typedef struct {
    RecursiveNode data[MaxSize];
    int top  ;
}RecursiveCountStack;

int solvingRecursiveFunctions(int layer,int unknown)  {
    RecursiveCountStack stack ;
    int layerBefore,layerBeforeBefore ;
    stack.top = -1;
    RecursiveNode node = {0,1};
    stack.top ++ ;
    stack.data[stack.top] = node ;
    layerBeforeBefore = stack.data[stack.top].value ;
    if (layer == 0) {
        return stack.data[stack.top].value ;
    }
    stack.top ++ ;
    node.layer = 1 ;
    node.value = 2*unknown ;
    stack.data[stack.top] = node ;
    layerBefore = stack.data[stack.top].value ;
    if (layer == 1) {
        return stack.data[stack.top].value ;
    }
    while (stack.data[stack.top].layer < layer) {
        int value = 2*unknown*layerBefore - 2*(stack.data[stack.top].layer)*layerBeforeBefore ;
        node.value = value;
        node.layer ++ ;
        stack.top ++ ;
        stack.data[stack.top] = node ;
        layerBeforeBefore = layerBefore;
        layerBefore = value ;
    }
    return layerBefore ;
}
