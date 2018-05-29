//
//  LCBChapterFourSqString.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/29.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterFourSqString_h
#define LCBChapterFourSqString_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MaxSzie 500

typedef struct  {
    char data[MaxSzie];
    int length;
}SqString;


//生成一个值为string的串s
void sqStrAssign(SqString *string ,char stringValue[]) ;

//将串t复制给s
void sqStrCopy(SqString *toString ,SqString fromString ) ;

//判断两个串是否相等
bool SqStrEqual(SqString stringOne , SqString stringTwo) ;

//求串的长度
int SqStrLength(SqString string);


//串连接
SqString concatSqStr(SqString stringOne , SqString stringTwo) ;

//求子串
SqString subSqStr(SqString string ,int start ,int end) ;

//插入
SqString insertSqStr(SqString stringOne , int index ,SqString stringTwo) ;

//删除
SqString deleteSqStr(SqString string , int start,int end) ;

//替换
SqString replaceSqStr(SqString stringOne , int start ,int end ,SqString stringTwo );

//串输出
void displaySqStr(SqString string) ;


#endif /* LCBChapterFourSqString_h */
