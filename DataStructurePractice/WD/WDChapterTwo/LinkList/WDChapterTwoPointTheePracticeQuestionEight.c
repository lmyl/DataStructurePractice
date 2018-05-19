//
//  WDChapterTwoPointTheePracticeQuestionEight.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/19.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterTwoPointTheePracticeQuestionEight.h"
#include "LCBXXZDChapterTwoAlgorithmDesignTwelve.h"

LinkList * findOutCommonJointInLinkList(LinkList *first ,LinkList *second)  {
    return findCommonTailStoreLocationLinkList(first, second);
}
