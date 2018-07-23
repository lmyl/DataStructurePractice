//
//  LCBChapterTwelveMachineExperimentOne.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/22.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTwelveMachineExperimentOne.h"

void writeFileFromArray(StudentInformation  student[MaxPeople],int peopleNumber) {
    FILE * file = fopen("/Users/ly/Documents/私人文件/数据结构/DataStructurePractice/DataStructurePractice/LCB/LCBChapterTwelve/MachineExperiment/stud.dat", "wb") ;
    for (int i = 0; i<peopleNumber; i++) {
        putw(student[i].studentNumber, file) ;
        fwrite(student[i].name, sizeof(char), 10, file) ;
        putw(student[i].age, file) ;
        putw(student[i].sex, file) ;
        putw(student[i].language, file) ;
        putw(student[i].math, file) ;
        putw(student[i].english, file) ;
    }
    fclose(file) ;
}

void writeArrayFromFile(FILE *file , StudentInformation  student[MaxPeople],int *peopleNumber)  {
    int count = 0 ;
    while (true) {
        int studentNumber = getw(file) ;
        if (studentNumber == -1) {
            break ;
        }
        char  name[10] ;
        fread(name, sizeof(char), 10, file) ;
        int age = getw(file) ;
        int sex = getw(file) ;
        int language = getw(file) ;
        int math = getw(file) ;
        int english = getw(file) ;
        StudentInformation result = {studentNumber,"",age,sex,language,math,english} ;
        for (int i = 0; i<10; i++) {
            result.name[i] = name[i] ;
        }
        student[count] = result ;
        count ++ ;
    }
    *peopleNumber = count ;
    fclose(file);
}

void slovingAverageGrade(StudentInformation  student[MaxPeople],int peopleNumber , StudentAvergaeInformation result[MaxPeople]) {
    for (int i = 0 ; i<peopleNumber; i++) {
        result[i].studentNumber = student[i].studentNumber;
        for (int j = 0; j<10; j++) {
            result[i].name[j] = student[i].name[j] ;
        }
        result[i].age = student[i].age ;
        result[i].sex = student[i].sex;
        result[i].avergae = ( student[i].language + student[i].math + student[i].english ) / 3 ;
    }
}

void sortByAverageInStudentAvergaeInformationPrivate(StudentAvergaeInformation student[MaxPeople] , int low ,int up ) ;

void sortByAverageInStudentAvergaeInformation(StudentAvergaeInformation student[MaxPeople] , int peopleNumber ) {
    for (int i = peopleNumber /2 - 1; i>= 0; i--) {
        sortByAverageInStudentAvergaeInformationPrivate(student, i, peopleNumber-1) ;
    }
    for (int i = peopleNumber - 1; i>=1; i--) {
        StudentAvergaeInformation temp = student[0] ;
        student[0] = student[i] ;
        student[i] = temp ;
        sortByAverageInStudentAvergaeInformationPrivate(student, 0, i-1) ;
    }
}

void sortByAverageInStudentAvergaeInformationPrivate(StudentAvergaeInformation student[MaxPeople] , int low ,int up ) {
    int i = low ;
    int j = 2 * low + 1 ;
    StudentAvergaeInformation temp = student[i] ;
    while (j <= up) {
        if (j <up && student[j].avergae > student[j+1].avergae) {
            j ++ ;
        }
        if (temp.avergae > student[j].avergae) {
            student[i] = student[j] ;
            i = j ;
            j = 2 * i + 1 ;
        }else{
            break ;
        }
    }
    student[i] = temp ;
}

void writeFileFromStudentAvergaeInformationArray(StudentAvergaeInformation  student[MaxPeople],int peopleNumber) {
    FILE * file = fopen("/Users/ly/Documents/私人文件/数据结构/DataStructurePractice/DataStructurePractice/LCB/LCBChapterTwelve/MachineExperiment/studTwo.dat", "wb") ;
    for (int i = 0; i<peopleNumber; i++) {
        putw(student[i].studentNumber, file) ;
        fwrite(student[i].name, sizeof(char), 10, file) ;
        putw(student[i].age, file) ;
        putw(student[i].sex, file) ;
        putw(student[i].avergae, file) ;
    }
    fclose(file) ;
}

void writeStudentAvergaeInformationArrayFromFile(FILE *file , StudentAvergaeInformation  student[MaxPeople],int *peopleNumber) {
    int count = 0 ;
    while (true) {
        int studentNumber = getw(file) ;
        if (studentNumber == -1) {
            break ;
        }
        char  name[10] ;
        fread(name, sizeof(char), 10, file) ;
        int age = getw(file) ;
        int sex = getw(file) ;
        int average = getw(file) ;
        StudentAvergaeInformation result = {studentNumber,"",age,sex,average} ;
        for (int i = 0; i<10; i++) {
            result.name[i] = name[i] ;
        }
        student[count] = result ;
        count ++ ;
    }
    *peopleNumber = count ;
    fclose(file);
}
