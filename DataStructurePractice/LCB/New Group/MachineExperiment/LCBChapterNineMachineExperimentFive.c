//
//  LCBChapterNineMachineExperimentFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterNineMachineExperimentFive.h"



CharNodeByMachineExperiment * initCharNodeByMachineExperiment(void) {
    CharNodeByMachineExperiment *node = (CharNodeByMachineExperiment *)malloc(sizeof(CharNodeByMachineExperiment)) ;
    node->left = NULL ;
    node->right = NULL ;
    node->count = 0 ;
    return node ;
}

CharNodeByMachineExperiment * creatCharNodeByString(char string[MAXL] , int countNumbers) {
    CharNodeByMachineExperiment * tree = NULL ;
    for (int i =  0; i<countNumbers; i++) {
        tree = insertCharNode(tree, string[i]) ;
    }
    return tree ;
}

void displayCharNodeByMachineExperiment(CharNodeByMachineExperiment * tree) {
    if (tree == NULL) {
        return ;
    }
    displayCharNodeByMachineExperiment(tree->left) ;
    printf("%c字母---%d次\n",tree->data ,tree->count) ;
    displayCharNodeByMachineExperiment(tree->right) ;
}

CharNodeByMachineExperiment * insertCharNode(CharNodeByMachineExperiment *tree,char element) {
    if (tree == NULL) {
        CharNodeByMachineExperiment * new = initCharNodeByMachineExperiment() ;
        new->count ++ ;
        new->data = element ;
        return new ;
    }
    if (element == tree->data) {
        tree->count ++ ;
        return tree ;
    }
    if (element > tree->data) {
        tree->right = insertCharNode(tree->right, element) ;
        return tree ;
    }else{
        tree->left = insertCharNode(tree->left, element) ;
        return tree ;
    }
}
