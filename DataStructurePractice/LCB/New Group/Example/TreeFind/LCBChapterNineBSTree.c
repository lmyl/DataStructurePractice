//
//  LCBChapterNineBSTree.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterNineBSTree.h"

BSTreeSearchIncludeParentResult BSTreeSearchIncludeParentPrivate(BSTNode *tree , KeyType key)  ;
deleteBSTreeResult deleteBSTreePrivate(BSTNode *tree ,BSTNode *parent ,KeyType key) ;
deleteBSTreeResult deleteBSTreePrivateExective(BSTNode *tree ,BSTNode *parent ) ;
BSTreeSearchIncludeParentResult findTheMinNodeInBSTreeOfRightSideIncludeParent(BSTNode *tree) ;

InsertBSTResult insertBST(BSTNode *tree , KeyType key ) {
    if (tree == NULL) {
        BSTNode * node = initBSTNode() ;
        node->key = key ;
        InsertBSTResult result = {node , true} ;
        return result ;
    }
    if (tree->key == key) {
        InsertBSTResult result = {tree , false} ;
        return result ;
    }else if (tree->key > key) {
        InsertBSTResult result = insertBST(tree->left, key) ;
        tree->left = result.result ;
        result.result = tree ;
        return result ;
    }else {
        InsertBSTResult result = insertBST(tree->right, key) ;
        tree->right = result.result ;
        result.result = tree ;
        return result ;
    }
}


BSTNode * initBSTNode(void)  {
    BSTNode * node =  (BSTNode *)malloc(sizeof(BSTNode)) ;
    node->left = NULL ;
    node->right  =NULL ;
    node->key = -1 ;
    return node ;
}

BSTNode * creatBSTree(KeyType keyArray[MAXL] , int keyNumbers) {
    BSTNode * tree = NULL ;
    for (int i = 0; i<keyNumbers; i++) {
        tree = insertBST(tree, keyArray[i]).result ;
    }
    return tree ;
}

void displayBSTree(BSTNode *tree) {
    if (tree == NULL) {
        return ;
    }
    printf("%d",tree->key) ;
    if (tree->left == NULL && tree->right == NULL) {
        return ;
    }else if (tree->left != NULL && tree->right != NULL) {
        printf("(") ;
        displayBSTree(tree->left) ;
        printf(",");
        displayBSTree(tree->right) ;
        printf(")") ;
    }else if (tree->left == NULL && tree->right != NULL) {
        printf("(") ;
        printf(",");
        displayBSTree(tree->right) ;
        printf(")") ;
    }else {
        printf("(") ;
        displayBSTree(tree->left) ;
        printf(")") ;
    }
}

BSTNode * BSTreeSearch(BSTNode *tree , KeyType key) {
    if (tree == NULL) {
        return NULL ;
    }else if (tree->key == key) {
        return tree ;
    }else if (tree->key > key) {
        return BSTreeSearch(tree->left, key) ;
    }else {
        return BSTreeSearch(tree->right, key) ;
    }
}

BSTreeSearchIncludeParentResult BSTreeSearchIncludeParent(BSTNode *tree , KeyType key) {
    BSTreeSearchIncludeParentResult result ;
    if (tree == NULL) {
        result.result = NULL ;
        result.resultParent = NULL ;
        return result ;
    }else if (tree != NULL && tree->key == key) {
        result.result = tree ;
        result.resultParent = NULL ;
        return result ;
    }else {
        return BSTreeSearchIncludeParentPrivate(tree, key) ;
    }
}

BSTreeSearchIncludeParentResult BSTreeSearchIncludeParentPrivate(BSTNode *tree , KeyType key)  {
    BSTreeSearchIncludeParentResult result ;
    if (tree->key > key && tree->left == NULL) {
        result.result = NULL ;
        result.resultParent = tree ;
        result.tag = -1 ;
        return result ;
    }else if (tree->key < key && tree->right == NULL) {
        result.result = NULL ;
        result.resultParent = tree ;
        result.tag = 1 ;
        return result ;
    }else if (tree->key > key && tree->left->key == key) {
        result.result = tree->left ;
        result.resultParent = tree ;
        result.tag = -1 ;
        return result ;
    }else if (tree->key < key && tree->right->key == key) {
        result.result = tree->right ;
        result.resultParent = tree ;
        result.tag = 1 ;
        return result ;
    }else if (tree->key < key && tree->right->key != key) {
        return BSTreeSearchIncludeParentPrivate(tree->right, key) ;
    }else {
        return BSTreeSearchIncludeParentPrivate(tree->left, key) ;
    }
}

deleteBSTreeResult deleteBSTree(BSTNode *tree , KeyType key) {
    BSTNode *parent = initBSTNode() ;
    parent->left = tree ;
    deleteBSTreeResult result = deleteBSTreePrivate(tree, parent, key) ;
    free(parent) ;
    return result ;
}


deleteBSTreeResult deleteBSTreePrivate(BSTNode *tree ,BSTNode *parent ,KeyType key)  {
    deleteBSTreeResult result ;
    if (tree == NULL) {
        result.success = false ;
        result.tree = tree ;
        return result ;
    }else if (tree->key < key) {
        result = deleteBSTreePrivate(tree->right, tree,key) ;
        tree->right = result.tree ;
        result.tree = tree ;
        return result ;
    }else if (tree->key > key) {
        result = deleteBSTreePrivate(tree->left, tree,key) ;
        tree->left = result.tree ;
        result.tree = tree ;
        return result ;
    }else {
        return deleteBSTreePrivateExective(tree, parent) ;
    }
}

deleteBSTreeResult deleteBSTreePrivateExective(BSTNode *tree ,BSTNode *parent) {
    deleteBSTreeResult result ;
    int tag = 0 ;
    if (parent->left == tree) {
        tag = -1 ;
    }else{
        tag = 1 ;
    }
    if (tree->left == NULL && tree->right == NULL) {
        if (tag == -1) {
            parent->left = NULL ;
        }else{
            parent->right = NULL ;
        }
        free(tree) ;
        result.success = true ;
        result.tree = NULL ;
        return result ;
    }else if (tree->left == NULL) {
        result.tree = tree->right ;
        if (tag == -1) {
            parent->left = tree->right ;
        }else{
            parent->right = tree->right ;
        }
        free(tree) ;
        result.success = true ;
        return result ;
    }else if (tree->right == NULL) {
        result.tree = tree->left ;
        if (tag == -1) {
            parent->left = tree->left ;
        }else{
            parent->right = tree->left ;
        }
        free(tree) ;
        result.success = true ;
        return result ;
    }else{
        if (tree->right->left == NULL) {
            result.tree = tree->right ;
            if (tag == -1) {
                parent->left = tree->right ;
            }else{
                parent->right = tree->right ;
            }
            result.success = true ;
            return result ;
        }else {
            BSTreeSearchIncludeParentResult searchResult = findTheMinNodeInBSTreeOfRightSideIncludeParent(tree) ;
            tree->key = searchResult.result->key ;
            deleteBSTreeResult deleteResult = deleteBSTreePrivateExective(searchResult.result, searchResult.resultParent) ;
            searchResult.resultParent->left = deleteResult.tree ;
            result.success = deleteResult.success;
            result.tree = tree ;
            return result ;
        }
    }
    
}

BSTreeSearchIncludeParentResult findTheMinNodeInBSTreeOfRightSideIncludeParent(BSTNode *tree) {
    BSTreeSearchIncludeParentResult result ;
    if (tree->right->left == NULL) {
        result.result = tree->right;
        result.resultParent = tree ;
        result.tag = 1 ;
        return result ;
    }
    BSTNode * parent = tree->right ;
    BSTNode *next = parent->left ;
    while (next->left != NULL) {
        next = next->left ;
        parent = parent->left ;
    }
    result.result = next ;
    result.resultParent = parent ;
    result.tag = -1 ;
    return result ;
}
