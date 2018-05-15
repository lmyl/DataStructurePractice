//
//  main.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/27.
//  Copyright © 2018年 LY. All rights reserved.
//

#include <stdio.h>

#include "LCBChapterTwoPracticeQuestionSeven.h"



int main(int argc, const char * argv[]) {
    // insert code here...

    int array[] = {-1,2,3,4,5,6,7,8,-1,6,5,7,3,2,3,7,7,-1};
    int arrayTwo[] = {2,3,4,5,6,7,8,9};
//    SqList *list = createSqList(array, 16);
//    dispSqList(list);
//    segmentationTheFirstElementInSqList(list);
//    dispSqList(list);
//    LinkList *list = createLinkListF(array, 2);
//    dispLinkList(list);
//    reverseLinkList(list);
//    dispLinkList(list);
//    DLinkListVariants *list = createDLinkListVariantsF(array, 18);
//    dispDLinkListVariants(list);
//    locateNode(list, -1);
//    dispDLinkListVariants(list);
//    locateNode(list, 7);
//    dispDLinkListVariants(list);
//    locateNode(list, 4);
//    dispDLinkListVariants(list);
//    locateNode(list, 3);
//    dispDLinkListVariants(list);
//    locateNode(list, 6);
//    dispDLinkListVariants(list);
//    locateNode(list, 6);
//    dispDLinkListVariants(list);
//    locateNode(list, -1);
//    dispDLinkListVariants(list);
//    CLinkList *list = createCLinkListR(array, 0);
//    CLinkList *listTwo = createCLinkListR(arrayTwo, 0);
//    CLinkList *result = combineTwoCLinkList(list, listTwo);
//    dispCLinkList(result);
    CDLinkList *list = createCDLinkListR(array, 18);
    CDLinkList *listTwo = createCDLinkListR(arrayTwo, 8);
    dispCDLinkList(list);
    dispCDLinkList(listTwo);
    CDLinkList *result = insertTwoCDLinkList(list, listTwo, 19);
    dispCDLinkList(result);
   
    return 0;
}


