//
//  LCBChapterFourLiString.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/29.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterFourLiString_h
#define LCBChapterFourLiString_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct listr{
    char data;
    struct listr * next;
}LiString;

//初始化空串
LiString * initLiString (void) ;


//生成一个值为string的串s
void LiStringAssign(LiString *string ,char stringValue[]) ;

//将串t复制给s
void LiStringCopy(LiString *toString ,LiString *fromString ) ;

//判断两个串是否相等
bool LiStringEqual(LiString *stringOne , LiString *stringTwo) ;

//求串的长度
int LiStringLength(LiString *string);

//串连接 均产生新串
LiString * concatLiString(LiString *stringOne , LiString *stringTwo) ;

//求子串
LiString * subLiString(LiString *string ,int start ,int end) ;

//插入
LiString * insertLiString(LiString *stringOne , int index ,LiString *stringTwo) ;

//删除
LiString * deleteLiString(LiString *string , int start,int end) ;

//替换
LiString * replaceLiString(LiString *stringOne , int start ,int end ,LiString *stringTwo );

//串输出
void displayLiString(LiString *string) ;

#endif /* LCBChapterFourLiString_h */
