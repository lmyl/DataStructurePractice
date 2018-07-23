//
//  LCBChapterTwelveMachineExperimentOne.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/22.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTwelveMachineExperimentOne_h
#define LCBChapterTwelveMachineExperimentOne_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MaxPeople 500

typedef struct {
    int studentNumber ;
    char name[10] ;
    int age ;
    int sex ;
    int language;
    int math ;
    int english ;
}StudentInformation;

typedef struct {
    int studentNumber ;
    char name[10] ;
    int age ;
    int sex ;
    int avergae ;
}StudentAvergaeInformation;

//将数组内容写入文件
void writeFileFromArray(StudentInformation  student[MaxPeople],int peopleNumber) ;
//将文件写入数组
void writeArrayFromFile(FILE *file , StudentInformation  student[MaxPeople],int *peopleNumber) ;
//求平均分
void slovingAverageGrade(StudentInformation  student[MaxPeople],int peopleNumber , StudentAvergaeInformation result[MaxPeople]) ;
//按平均分排序
void sortByAverageInStudentAvergaeInformation(StudentAvergaeInformation student[MaxPeople] , int peopleNumber ) ;
//将排序结果写入文件
void writeFileFromStudentAvergaeInformationArray(StudentAvergaeInformation  student[MaxPeople],int peopleNumber) ;
//将文件读入数组
void writeStudentAvergaeInformationArrayFromFile(FILE *file , StudentAvergaeInformation  student[MaxPeople],int *peopleNumber) ;

#endif /* LCBChapterTwelveMachineExperimentOne_h */
