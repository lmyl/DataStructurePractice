//
//  WDChapterFourPointFourPracticeQuestionThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/9.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterFourPointFourPracticeQuestionThree.h"

TSBNode * initTSBNode(void) ;

TSBNode *  creatTSBTreeByHierarchicalSequenceAndNodeOfDegreePrivate(char hierarchicalSequence[MaxSize],int degree[MaxSize] ,int sonStartIndex,int parentIndex,int layerStartIndex,int layerCount) ;

TSBNode * creatTSBTreeByHierarchicalSequenceAndNodeOfDegree(char hierarchicalSequence[MaxSize],int degree[MaxSize] ) {
    TSBNode *root = initTSBNode();
    root->data = hierarchicalSequence[0] - '0' ;
    root->child = creatTSBTreeByHierarchicalSequenceAndNodeOfDegreePrivate(hierarchicalSequence, degree, 1, 0, 0, 1);
    return root ;
}

TSBNode *  creatTSBTreeByHierarchicalSequenceAndNodeOfDegreePrivate(char hierarchicalSequence[MaxSize],int degree[MaxSize] ,int sonStartIndex,int parentIndex,int layerStartIndex,int layerCount) {
    
    int parentDegree = degree[parentIndex] ;
    if (parentDegree <= 0) {
        return NULL ;
    }
    
    int nextLayerStartIndex = layerStartIndex + layerCount  ;
    int nextLayerCount = 0 ;
    for (int i= layerStartIndex; i<layerStartIndex+layerCount; i++) {
        nextLayerCount += degree[i] ;
    }
    
    TSBNode *firstSon = initTSBNode();
    firstSon->data = hierarchicalSequence[sonStartIndex] - '0';
    int nextSonStartIndex = nextLayerStartIndex ;
    for (int j = layerStartIndex; j<sonStartIndex; j++) {
        nextSonStartIndex += degree[j] ;
    }
    firstSon->child = creatTSBTreeByHierarchicalSequenceAndNodeOfDegreePrivate(hierarchicalSequence, degree, nextSonStartIndex, sonStartIndex,nextLayerStartIndex,nextLayerCount);
    
    TSBNode *brother = firstSon ;
    for (int i = 1; i<parentDegree; i++) {
        TSBNode *temp = initTSBNode() ;
        temp->data = hierarchicalSequence[sonStartIndex+i] -'0' ;
        int nextSonStartIndex = nextLayerStartIndex ;
        for (int j = layerStartIndex; j<sonStartIndex + i; j++) {
            nextSonStartIndex += degree[j] ;
        }
        temp->child = creatTSBTreeByHierarchicalSequenceAndNodeOfDegreePrivate(hierarchicalSequence, degree, nextSonStartIndex, sonStartIndex + i,nextLayerStartIndex,nextLayerCount);
        brother->brothers = temp ;
        brother = temp ;
    }
    return firstSon ;
}

TSBNode * initTSBNode(void) {
    TSBNode *tree = (TSBNode *)malloc(sizeof(TSBNode)) ;
    tree->child = NULL ;
    tree->brothers = NULL ;
    return tree ;
}
