//
//  LCBChapterTwelveMachineExperimentTwo.h
//  DataStructurePractice
//
//  Created by ly on 2018/7/23.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterTwelveMachineExperimentTwo_h
#define LCBChapterTwelveMachineExperimentTwo_h

#include <stdio.h>
#include "LCBChapterTwelveMachineExperimentOne.h"

typedef struct {
    int studentNumber ;
    int offest ;
}StudentInformationIndex;

//创建索引文件
void creatStudentInformationIndexFile(StudentInformation  student[MaxPeople],int peopleNumber ) ;
//从索引文件读入索引数据
void readStudentInformationIndexFile(FILE * indexFile , StudentInformationIndex index[MaxPeople] , int *peopleNumber) ;
//按学号进行索引查询
StudentInformation searchStudentInformationByStudentNumber(FILE * file , FILE * indexFile , int studentNumber) ;
#endif /* LCBChapterTwelveMachineExperimentTwo_h */
