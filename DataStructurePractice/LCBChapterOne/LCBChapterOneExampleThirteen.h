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

//有若干学生数据(学生数据小于50)，每个学生数据包含学号、姓名、班号和若干门课程成绩(每个学生所选课程数目可能不等，但最多不超6门，当学生未选某门课时，则无成绩记录)，要求设计一个程序输出每个学生的学号、姓名和平均分以及每门课程(课程编号1～6)的平均分

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

void allAvarageGrade(struct stud1 studentInfo[],struct stud2 studentGrade[],int studentGradeCount,int studentInfoCount,int courseAmount);

#endif /* LCBChapterOneExampleThirteen_h */
