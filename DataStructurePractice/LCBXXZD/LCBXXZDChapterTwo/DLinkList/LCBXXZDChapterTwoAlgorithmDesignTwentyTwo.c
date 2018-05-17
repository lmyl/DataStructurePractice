//
//  LCBXXZDChapterTwoAlgorithmDesignTwentyTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTwoAlgorithmDesignTwentyTwo.h"


bool listDLinkInsertAfterLocation(DLinkList *list,int location,ElemType element)  {
    return listDLinkInsert(list, location+1, element);
}
