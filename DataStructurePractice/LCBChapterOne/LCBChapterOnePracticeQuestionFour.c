//
//  LCBChapterOnePracticeQuestionFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/10.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterOnePracticeQuestionFour.h"

//并给出时间复杂度
//求一个n阶方阵的所有元素之和
//O(n^2)
int sumNOrderSquare(int square[][Max],int n) {
    int sum = 0 ;
    for (int i = 0; i<n; i++) {
        for (int j=0; j<n; j++) {
            sum += square[i][j];
        }
    }
    return sum ;
}


//对于输入的任意三个整数，将它们按从小到大的顺序输出
//O(1)
void orderThreeElement(int one,int two ,int three) {
    if (one <= two) {
        if (two <= three) {
            printf("%d <= %d <= %d",one,two,three) ;
        }else if (one >= three) {
            printf("%d <= %d <= %d",three,one,two) ;
        }else {
            printf("%d <= %d <= %d",one,three,two) ;
        }
    }else {
        if (one <= three) {
            printf("%d <= %d <= %d",two,one,three) ;
        }else if (two >= three) {
            printf("%d <= %d <= %d",two,one,three) ;
        }else {
            printf("%d <= %d <= %d",two,three,one) ;
        }
    }
}

//对于输入的任意n个整数，输出其中的最大和最小元素
//O(n)
void pickMaxAndMin(int numbers[],int count) {
    int min = numbers[0] ;
    int max = numbers[0] ;
    for (int i = 0; i<count; i++) {
        if (min > numbers[i]) {
            min = numbers[i] ;
        }
        if (max < numbers[i]) {
            max = numbers[i] ;
        }
    }
    printf("Max : %d   Min : %d",max,min);
}
