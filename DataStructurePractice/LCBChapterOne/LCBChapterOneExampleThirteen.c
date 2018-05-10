//
//  LCBChapterOneExampleThirteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/29.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterOneExampleThirteen.h"

double studentAvarageGrade(struct stud2 student[],int studentGradeCount,int studentNumber);
double courseAvarageGrade(struct stud2 student[],int studentGradeCount,int coureseNumber);

//求学号为i的学生的平均分
double studentAvarageGrade(struct stud2 student[],int studentGradeCount,int studentNumber) {
    double sum = 0;
    int counter = 0 ;
    for (int j=0; j<studentGradeCount; j++) {
        if (student[j].no == studentNumber) {
            sum += student[j].deg;
            counter++ ;
        }
    }
    return sum/counter ;
}

//求编号为i的课程的平均分
double courseAvarageGrade(struct stud2 student[],int studentGradeCount,int coureseNumber) {
    double sum = 0;
    int counter = 0;
    for (int j = 0; j<studentGradeCount; j++) {
        if (student[j].cno == coureseNumber) {
            counter ++;
            sum += student[j].deg;
        }
    }
    return sum/counter;
}

//求学生平均分和课程平均分,时间复杂度为O(studentCount * studentInfoCount)
void allAvarageGrade(struct stud1 studentInfo[],struct stud2 studentGrade[],int studentGradeCount,int studentInfoCount,int courseAmount) {
    printf("学生平均成绩:\n");
    printf("学号  姓名  平均分\n");
    for (int i=0; i<studentInfoCount; i++) {
        double grade = studentAvarageGrade(studentGrade, studentGradeCount, studentInfo[i].no);
        printf("%4d  %10s  %g\n",studentInfo[i].no,studentInfo[i].name,grade);
    }
    
    printf("课程平均成绩:\n");
    printf("课程号  平均分\n");
    for (int i = 1; i<=courseAmount; i++) {
        double grade = courseAvarageGrade(studentGrade, studentGradeCount, courseAmount);
        printf("%d  %g\n",i,grade);
    }
}
