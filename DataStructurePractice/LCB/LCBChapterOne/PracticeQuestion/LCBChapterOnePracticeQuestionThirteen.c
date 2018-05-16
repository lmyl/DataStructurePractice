//
//  LCBChapterOnePracticeQuestionThirteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/10.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterOnePracticeQuestionThirteen.h"

Set * initSet() {
    Set *result = (Set *)malloc(sizeof(Set));
    result->length = 0;
    return result;
}

Set * createSet(int numbers[] ,int count) {
    Set *set  = initSet();
    int countElement = 0 ;
    for (int i = 0; i<count; i++) {
        if (!contain(set, numbers[i])) {
            set -> data[countElement] = numbers[i] ;
            countElement ++;
        }
    }
    set -> length = countElement ;
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

Set * add(Set *setOne,Set *setTwo) {
    Set *setThree = initSet();
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
    return setThree;
}

Set * sub(Set *setOne,Set *setTwo) {
    Set *setThree = initSet();
    setThree->length = 0 ;
    for (int i = 0; i<setOne->length; i++) {
        if (!contain(setTwo, setOne->data[i])) {
            setThree->data[setThree->length] = setOne->data[i];
            setThree->length ++ ;
        }
    }
    return setThree;
}

Set * interSection(Set *setOne,Set *setTwo) {
    Set *setThree = initSet();
    setThree->length = 0;
    for (int i = 0; i<setOne->length; i++) {
        if (contain(setTwo, setOne->data[i])) {
            setThree->data[setThree->length] = setOne->data[i];
            setThree->length ++ ;
        }
    }
    return setThree ;
}
