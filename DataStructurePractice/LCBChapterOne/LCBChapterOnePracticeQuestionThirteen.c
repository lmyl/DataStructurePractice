//
//  LCBChapterOnePracticeQuestionThirteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/10.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterOnePracticeQuestionThirteen.h"

//此建立算法未考虑数组中出现相同的元素
Set * createSet(int numbers[] ,int count) {
    Set *set  = (Set *)malloc(sizeof(set));
    for (int i = 0; i<count; i++) {
        set -> data[i] = numbers[i] ;
    }
    set -> length = count ;
    return  set ;
}

void dispset(Set *set) {
    printf("(");
    for (int i = 0; i< set->length - 1; i++) {
        printf("  %d  ,",set->data[i]);
    }
    printf("  %d  )",set->data[set->length - 1]);
}

bool contain(Set *set , int element) {
    for (int i = 0; i<set->length; i++) {
        if (set->data[i] == element) {
            return true ;
        }
    }
    return false ;
}

void add(Set *setOne,Set *setTwo,Set *setThree) {
    for (int i = 0; i<setOne->length; i++) {
        setThree->data[i] = setOne->data[i] ;
    }
    setThree->length = setOne->length ;
    for (int i = 0; i<setTwo->length; i++) {
        if (!contain(setOne, setTwo->data[i])) {
            setThree->data[setThree->length] = setTwo->data[i];
            setThree->length ++ ;
        }
    }
}

void sub(Set *setOne,Set *setTwo,Set *setThree) {
    setThree->length = 0 ;
    for (int i = 0; i<setOne->length; i++) {
        if (!contain(setTwo, setOne->data[i])) {
            setThree->data[setThree->length] = setOne->data[i];
            setThree->length ++ ;
        }
    }
}

void interSection(Set *setOne,Set *setTwo,Set *setThree) {
    setThree->length = 0;
    for (int i = 0; i<setOne->length; i++) {
        if (contain(setTwo, setOne->data[i])) {
            setThree->data[setThree->length] = setOne->data[i];
            setThree->length ++ ;
        }
    }
}
