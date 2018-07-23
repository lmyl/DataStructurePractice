//
//  main.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/27.
//  Copyright © 2018年 LY. All rights reserved.
//



#include "LCBChapterTwelveMachineExperimentTwo.h"


int main(int argc, const char * argv[]) {
    // insert code here...

    StudentInformation student[MaxPeople] ;
    if (/* DISABLES CODE */ (false)) {
        StudentInformation one = {1,"陈华",20,1,78,90,84};
        StudentInformation two = {5,"张明",21,1,78,68,92} ;
        StudentInformation three = {8,"王英",20,-1,86,81,86};
        StudentInformation four = {3,"刘丽",21,-1,78,92,88} ;
        StudentInformation five = {2,"许可",20,1,80,83,78} ;
        StudentInformation six = {4,"陈军",20,1,78,88,82} ;
        StudentInformation seven = {7 , "马胜",21,1,56,67,75} ;
        StudentInformation eight = {6 , "曾强",20,1,78,89,82} ;
        
        student[0] = one ;
        student[1] = two ;
        student[2] = three ;
        student[3] = four ;
        student[4] = five ;
        student[5] = six ;
        student[6] = seven ;
        student[7] = eight ;
        
        writeFileFromArray(student, 8);
    }else{
        FILE * file = fopen("/Users/ly/Documents/私人文件/数据结构/DataStructurePractice/DataStructurePractice/LCB/LCBChapterTwelve/MachineExperiment/stud.dat", "rb") ;
        int count = 0 ;
        writeArrayFromFile(file, student, &count) ;
        printf("%d\n",count);
    }
    StudentAvergaeInformation studentBase[MaxPeople] ;
    slovingAverageGrade(student, 8, studentBase) ;
    sortByAverageInStudentAvergaeInformation(studentBase, 8) ;
    if (/* DISABLES CODE */ (false)) {
        writeFileFromStudentAvergaeInformationArray(studentBase, 8) ;
    }else{
        FILE * file = fopen("/Users/ly/Documents/私人文件/数据结构/DataStructurePractice/DataStructurePractice/LCB/LCBChapterTwelve/MachineExperiment/studTwo.dat", "rb") ;
        int count = 0 ;
        writeStudentAvergaeInformationArrayFromFile(file, studentBase,&count ) ;
        printf("%d\n",count);
    }
    FILE * file = fopen("/Users/ly/Documents/私人文件/数据结构/DataStructurePractice/DataStructurePractice/LCB/LCBChapterTwelve/MachineExperiment/stud.dat", "rb") ;
    creatStudentInformationIndexFile(student, 8) ;
    FILE * indexFile = fopen("/Users/ly/Documents/私人文件/数据结构/DataStructurePractice/DataStructurePractice/LCB/LCBChapterTwelve/MachineExperiment/studIndex.dat", "rb") ;
    StudentInformation search = searchStudentInformationByStudentNumber(file, indexFile, 8) ;
    printf("%d\n",search.math) ;
    
    return 0;
} 



