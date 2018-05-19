//
//  WDChapterTwoPointTheePracticeQuestionSeventeen.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPointTheePracticeQuestionSeventeen.h"


bool isSymmetryForCDLinkList(CDLinkList *list) {
    CDLinkList *head = list->next;
    CDLinkList *tail = list->prior;
    while (head != tail) {
        if (head->data != tail->data) {
            return false ;
        }else{
            if (head->next != tail) {
                head = head->next;
                tail = tail->prior;
            }else{
                return true ;
            }
        }
    }
    return true;
}
