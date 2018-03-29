//
//  LCBChapterOneExampleThirteen.h
//  DataStructurePractice
//
//  Created by ly on 2018/3/29.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterOneExampleThirteen_h
#define LCBChapterOneExampleThirteen_h

#include <stdio.h>

struct stud1 {
    int no; //学号
    char name[10];//姓名
    int bno;    // 班号
};

struct stud2 {
    int no;//学号
    int cno;//课程号
    int deg;//成绩
};

double courseAvarageGrade(struct stud2 student[],int studentCount,int i);
double studentAvarageGrade(struct stud2 student[],int studentCount,int i);
void allAvarageGrade(struct stud1 studentInfo[],struct stud2 studentGrade[],int studentGradeCount,int studentInfoCount,int courseAmount);

#endif /* LCBChapterOneExampleThirteen_h */
