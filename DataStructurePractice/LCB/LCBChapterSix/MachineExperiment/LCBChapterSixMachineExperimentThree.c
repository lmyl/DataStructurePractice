//
//  LCBChapterSixMachineExperimentThree.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/7.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSixMachineExperimentThree.h"

void displaySymmetricMatrix(int data[] ,int number) ;

void displaySymmetricMatrixByTwoDimensionalMatrix(int *data ,int number);

int getSymmetricMatrixValue(int data[],int number,int row ,int col) ;

int inputSymmetricMatrixLarge(void) ;

void inputSymmetricMatrix(int data[],int number);

void addSymmetricMatrix(void) {
    int large = inputSymmetricMatrixLarge();
    int length = large * (large + 1) /2 ;
    int symmetricMatrixOne[length] ;
    int symmetricMatrixTwo[length] ;
    inputSymmetricMatrix(symmetricMatrixOne, length);
    displaySymmetricMatrix(symmetricMatrixOne, large) ;
    inputSymmetricMatrix(symmetricMatrixTwo, length);
    displaySymmetricMatrix(symmetricMatrixTwo, large) ;
    int symmetricMatrixThree[length];
    for (int i =0; i<length; i++) {
        symmetricMatrixThree[i] = symmetricMatrixOne[i]+symmetricMatrixTwo[i] ;
    }
    displaySymmetricMatrix(symmetricMatrixThree, large) ;
}

void multiplySymmetricMatrix(void) {
    int large = inputSymmetricMatrixLarge();
    int length = large * (large + 1) /2 ;
    int symmetricMatrixOne[length] ;
    int symmetricMatrixTwo[length] ;
    inputSymmetricMatrix(symmetricMatrixOne, length);
    displaySymmetricMatrix(symmetricMatrixOne, large) ;
    inputSymmetricMatrix(symmetricMatrixTwo, length);
    displaySymmetricMatrix(symmetricMatrixTwo, large) ;
    int resultMatrix[large][large] ;
    for (int i = 0; i<large; i++) {
        for (int j = 0; j<large; j++) {
            int sum = 0;
            for (int k = 0; k<large; k++) {
                sum += getSymmetricMatrixValue(symmetricMatrixOne, large, i, k) * getSymmetricMatrixValue(symmetricMatrixTwo, large, k, j) ;
            }
            resultMatrix[i][j] = sum ;
        }
    }
    displaySymmetricMatrixByTwoDimensionalMatrix(resultMatrix, large) ;
}


void displaySymmetricMatrix(int data[] ,int number) {
    for (int i = 0; i < number; i++) {
        for (int j = 0; j<number; j++) {
            if (i>=j) {
                printf("%d  ",data[i*(i+1)/2 + j]);
            }else {
                printf("%d  ",data[j*(j+1)/2 + i]);
            }
        }
        printf("\n");
    }
}

void displaySymmetricMatrixByTwoDimensionalMatrix(int *data ,int number) {
    for (int i = 0; i<number; i++) {
        for (int j = 0; j<number; j++) {
            printf("%d  ",*(data + i * number + j)) ;
        }
        printf("\n");
    }
}

int getSymmetricMatrixValue(int data[],int number,int row ,int col) {
    if (row>=col) {
        return  data[row*(row+1)/2 + col];
    }else {
        return  data[col*(col+1)/2 + row];
    }
}

int inputSymmetricMatrixLarge(void) {
    int large ;
reInput:
    printf("输入矩阵的阶数\n");
    scanf("%d",&large) ;
    if (large <= 0) {
        printf("输入不合法!\n");
        goto reInput ;
    }
    return large ;
}

void inputSymmetricMatrix(int data[],int number) {
    printf("请输入矩阵\n");
    for (int i = 0 ; i<number; i++) {
        scanf("%d",&data[i]) ;
    }
}
