//
//  LCBChapterTwoSqList.h
//  DataStructurePractice
//
//  Created by ly on 2018/3/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTwoSqList_h
#define LCBChapterTwoSqList_h

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MaxSize 500 //线性表最大长度

typedef int ElemType;//自类型定义

typedef struct {
    ElemType data[MaxSize]; //存放顺序表中的元素
    int length;//存放顺序表的长度
}SqList;//顺序表的类型定义

//MARK:建立顺序表

//建立顺序表：将给定的含有n个元素的数组的每个元素依次放到顺序表中，并将n赋给顺序表的长度
SqList * createSqList(ElemType numbers[],int count) ;

//MARK：顺序表基本运算算法

//初始化线性表：构造一个空的线性表L，只需分配线性表的存储空间并将length域设置为0即可
//时间复杂度：O(1)
SqList * initSqList(void);

//销毁顺序表：释放线性表L占用的空间
//时间复杂度：O(1)
void destorySqList(SqList *list);

//判断线性表是否为空：返回一个值表示L是否为空，若L为空则返回true，否则返回false
//时间复杂度：O(1)
bool listSqEmpty(SqList *list);

//求线性表的长度：返回顺序表L的长度，实际上只需返回length域的值即可
//时间复杂度：O(1)
int listSqLength(SqList *list);

//输出线性表：显示L中各元素的值
//时间复杂度：O(L->length)
void dispSqList(SqList *list);

//求线性表中某个数据元素值：用e返回L中第i(1<=i<=listLength(L))个元素的值
//时间复杂度：O(1)
bool getSqElem(SqList *list,int location,ElemType *element);

//按元素值查找：查找第一个值域与e相等的元素的逻辑序号，若这样的元素不存在，则返回值为0
//时间复杂度：O(L->length)
int locateSqElem(SqList *list,ElemType element);
//插入数据元素:在顺序表第i(1<=i<=listLength(L)+1)个位置上插入新的元素e，如果i的位置不正确，则显示相应的错误星系，否则将顺序表原来第i个元素及其后元素均后移一个位置，移动顺序从右往左，最后顺序表长度加1
//时间复杂度：O(L->length)
bool listSqInsert(SqList *list,int location, ElemType element);

//删除数据元素:删除顺序表L的第i(1<=i<=listLength(L))个元素，如果i值不正确，则显示相应的错误信息，否则将线性表第i个位置之后的元素均向前移动一个位置，移动顺序为从左到右，最后顺序表的长度减1
//时间复杂度：O(L->length)
bool listSqDelete(SqList *list,int location, ElemType *element);

#endif /* LCBChapterTwoSqList_h */
