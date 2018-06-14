//
//  LCBChapterSevenBTree.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/13.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenBTree.h"

BinaryTree *initBinaryTree(void) {
    BinaryTree *tree = (BinaryTree *)malloc(sizeof(BinaryTree)) ;
    tree->left = NULL;
    tree->right = NULL ;
    return tree ;
}

BinaryTree * creatBinaryTreeByRecursive(char string[] ,int *count);

BinaryTree * creatBinaryTree(char string[] ) {
    int location = 0;
    return creatBinaryTreeByRecursive(string, &location);
}

BinaryTree *findNodeInBinaryTree(BinaryTree *tree , ElemType element) {
    if (tree == NULL) {
        return NULL ;
    }
    if (tree->data == element) {
        return tree ;
    }
    BinaryTree *node =  findNodeInBinaryTree(tree->left, element) ;
    if (node == NULL) {
        BinaryTree *nodeTwo = findNodeInBinaryTree(tree->right, element) ;
        if (nodeTwo == NULL) {
            return NULL;
        }else{
            return nodeTwo ;
        }
    }else{
        return node ;
    }
}

BinaryTree *locationLeftChildNode(BinaryTree *tree) {
    return tree->left ;
}

BinaryTree *locationRightChildNode(BinaryTree *tree) {
    return tree->right ;
}

int binaryTreeHeight(BinaryTree *tree) {
    if (tree == NULL ) {
        return 0 ;
    }
    int max= 0 ;
    int maxleft = binaryTreeHeight(tree->left);
    int maxright = binaryTreeHeight(tree->right);
    if (max < maxleft) {
        max = maxleft ;
    }
    if (max < maxright) {
        max = maxright ;
    }
    return max + 1;
}

void displayBinaryTree(BinaryTree *tree) {
    if (tree == NULL) {
        return ;
    }
    printf("%c",tree->data) ;
    if (tree->left == NULL && tree->right == NULL) {
        return ;
    }
    printf("(");
    displayBinaryTree(tree->left);
    if (tree->right == NULL) {
        printf(")");
        return ;
    }
    printf(",");
    displayBinaryTree(tree->right);
    printf(")");
}

BinaryTree * creatBinaryTreeByRecursive(char string[] ,int *count) {
    if (string[*count] == ',' || string[*count] == ')') {
        return NULL ;
    }
    BinaryTree *tree = initBinaryTree() ;
    while (string[*count] != '\0') {
        if (string[*count] == '(') {
            *count = *count + 1 ;
            tree->left = creatBinaryTreeByRecursive(string, count) ;
        }else if (string[*count] == ')') {
            *count = *count + 1;
            return tree ;
        }else if (string[*count] == ',') {
            *count = *count + 1;
            tree->right = creatBinaryTreeByRecursive(string, count) ;
        }else {
            tree->data = string[*count] ;
            *count = *count + 1 ;
            if (string[*count] != '(') {
                return tree ;
            }
        }
    }
    return tree ;
}
