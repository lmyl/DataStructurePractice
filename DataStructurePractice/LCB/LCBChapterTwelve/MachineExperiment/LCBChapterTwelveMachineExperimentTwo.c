//
//  LCBChapterTwelveMachineExperimentTwo.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/23.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwelveMachineExperimentTwo.h"

void sortByStudentNumberInStudentInformationIndex(StudentInformationIndex student[MaxPeople] , int peopleNumber )  ;

void creatStudentInformationIndexFile(StudentInformation  student[MaxPeople],int peopleNumber ) {
    StudentInformationIndex indexArray[MaxPeople] ;
    for (int i = 0; i<peopleNumber; i++) {
        indexArray[i].studentNumber = student[i].studentNumber ;
        indexArray[i].offest = 7*i ;
    }
    sortByStudentNumberInStudentInformationIndex(indexArray, peopleNumber) ;
    FILE * file = fopen("/Users/ly/Documents/私人文件/数据结构/DataStructurePractice/DataStructurePractice/LCB/LCBChapterTwelve/MachineExperiment/studIndex.dat", "wb") ;
    for (int i = 0; i<peopleNumber; i++) {
        putw(indexArray[i].studentNumber, file) ;
        putw(indexArray[i].offest, file) ;
    }
    fclose(file) ;
}

void sortByStudentNumberInStudentInformationIndexPrivate(StudentInformationIndex student[MaxPeople] , int low ,int up ) ;

void sortByStudentNumberInStudentInformationIndex(StudentInformationIndex student[MaxPeople] , int peopleNumber ) {
    for (int i = peopleNumber /2 - 1; i>= 0; i--) {
        sortByStudentNumberInStudentInformationIndexPrivate(student, i, peopleNumber-1) ;
    }
    for (int i = peopleNumber - 1; i>=1; i--) {
        StudentInformationIndex temp = student[0] ;
        student[0] = student[i] ;
        student[i] = temp ;
        sortByStudentNumberInStudentInformationIndexPrivate(student, 0, i-1) ;
    }
}

void sortByStudentNumberInStudentInformationIndexPrivate(StudentInformationIndex student[MaxPeople] , int low ,int up ) {
    int i = low ;
    int j = 2 * low + 1 ;
    StudentInformationIndex temp = student[i] ;
    while (j <= up) {
        if (j <up && student[j].studentNumber < student[j+1].studentNumber) {
            j ++ ;
        }
        if (temp.studentNumber < student[j].studentNumber) {
            student[i] = student[j] ;
            i = j ;
            j = 2 * i + 1 ;
        }else{
            break ;
        }
    }
    student[i] = temp ;
}

void readStudentInformationIndexFile(FILE * indexFile , StudentInformationIndex index[MaxPeople] , int *peopleNumber) {
    int count = 0 ;
    while (true) {
        int studentNumber = getw(indexFile) ;
        if (studentNumber == -1) {
            break ;
        }
        int offest = getw(indexFile) ;
        StudentInformationIndex result = {studentNumber,offest} ;
        index[count] = result ;
        count ++ ;
    }
    *peopleNumber = count ;
    fclose(indexFile);
}

StudentInformation searchStudentInformationByStudentNumber(FILE * file , FILE * indexFile , int studentNumber) {
    StudentInformationIndex index[MaxPeople] ;
    int peopleNumber =  0 ;
    readStudentInformationIndexFile(indexFile, index, &peopleNumber) ;
    int low = 0 ;
    int up = peopleNumber - 1 ;
    while (low <= up) {
        int middle = (low + up) / 2 ;
        if (index[middle].studentNumber < studentNumber) {
            low = middle + 1 ;
        }else{
            up = middle - 1 ;
        }
    }
    if (low >= peopleNumber) {
        StudentInformation result = {-1} ;
        return result ;
    }
    int offest = index[low].offest ;
    for (int i = 0 ; i<offest/7; i++) {
        getw(file) ;
        char  name[10] ;
        fread(name, sizeof(char), 10, file) ;
        getw(file) ;
        getw(file) ;
        getw(file) ;
        getw(file) ;
        getw(file) ;
    }
    int sNumber = getw(file) ;
    char  name[10] ;
    fread(name, sizeof(char), 10, file) ;
    int age = getw(file) ;
    int sex = getw(file) ;
    int language = getw(file) ;
    int math = getw(file) ;
    int english = getw(file) ;
    StudentInformation result = {sNumber,"",age,sex,language,math,english} ;
    for (int i = 0; i<10; i++) {
        result.name[i] = name[i] ;
    }
    return result ;
}
