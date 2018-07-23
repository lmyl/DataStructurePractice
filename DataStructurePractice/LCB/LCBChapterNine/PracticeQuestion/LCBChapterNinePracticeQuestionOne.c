//
//  LCBChapterNinePracticeQuestionOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterNinePracticeQuestionOne.h"

bool displayWayInBSTreePrivate(BSTNode *tree , KeyType key,int way[MAXL] ,int *length)  ;

void displayWayInBSTree(BSTNode *tree , KeyType key)  {
    int way[MAXL] ;
    int length = -1 ;
    if (displayWayInBSTreePrivate(tree, key, way, &length)) {
        for (int i = length; i>=0; i--) {
            printf("%d",way[i]);
        }
        printf("\n") ;
    }
}

bool displayWayInBSTreePrivate(BSTNode *tree , KeyType key,int way[MAXL] ,int *length) {
    if (tree == NULL) {
        return false ;
    }
    if (tree->key == key) {
        *length = *length + 1 ;
        way[*length] = key ;
        return true ;
    }
    if (tree->key > key) {
        if (displayWayInBSTreePrivate(tree->left, key, way, length)) {
            *length = *length + 1 ;
            way[*length] = tree->key ;
            return true ;
        }else{
            return false ;
        }
    }else{
        if (displayWayInBSTreePrivate(tree->right, key, way, length)) {
            *length = *length + 1 ;
            way[*length] = tree->key ;
            return true ;
        }else{
            return false ;
        }
    }
}

void displayWayInBSTreeNoRecursive(BSTNode *tree ,KeyType key) {
    int way[MAXL] ;
    int length = -1 ;
    while (tree != NULL && tree->key != key) {
        length ++ ;
        way[length]  = tree->key ;
        if (tree->key > key) {
            tree = tree->left ;
        }else{
            tree = tree->right ;
        }
    }
    if (tree->key == key) {
        length ++ ;
        way[length]  = tree->key ;
        for (int i = 0; i<=length; i++) {
            printf("%d",way[i]);
        }
        printf("\n") ;
    }
}
