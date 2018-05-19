//
//  WDChapterTwoPointTheePracticeQuestionEighteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPointTheePracticeQuestionEighteen.h"

void combineTwoCLinkListStoreInFirst(CLinkList *first ,CLinkList *second) {
    CLinkList *firstNext = first->next;
    CLinkList *firstNextPre = first ;
    CLinkList *secondNext = second->next;
    CLinkList *secondNextPre = second ;
    if (second->next == second) {
        return ;
    }
    while (firstNext != first) {
        firstNext = firstNext->next;
        firstNextPre = firstNextPre->next;
    }
    while (secondNext != second) {
        secondNext = secondNext ->next;
        secondNextPre = secondNextPre->next;
    }
    firstNextPre->next = second->next;
    secondNextPre->next = first ;
    second->next = second ;
}
