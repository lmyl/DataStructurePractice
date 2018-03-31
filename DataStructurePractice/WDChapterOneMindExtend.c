//
//  WDChapterOneMindExtend.c
//  DataStructurePractice
//
//  Created by ly on 2018/3/31.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterOneMindExtend.h"



//递归算法求解第number个斐波拉契数列,并分析算法的时间复杂度
int sloveRecursive(int number) {
    if (number == 1 || number == 2) {
        return 1;
    }else {
        return sloveRecursive(number-1) + sloveRecursive(number-2);
    }
}
//时间复杂度T(n) = T(n-1) + T(n-2) + 1,T(1) = 1;T(2) = 1;
//T(n) = ((5+5^0.5)/5)*(1/2+(5^0.5)/2)^n + ((5-5^0.5)/5)*(1/2-(5^0.5)/2)^n - 1
//T(n) = O((1/2+(5^0.5)/2)^n)

//非递归算法求解第number个斐波拉契数列,并分析算法的时间复杂度

int sloveNonRecursive(int number) {
    if (number == 1 || number == 2) {
        return 1 ;
    }
    int tempVaribleOne = 1;
    int tempVaribleTwo = 1 ;
    int tempVaribleThree = 1 ;
    int count = 3 ;
    while (count <= number) {
        tempVaribleThree = tempVaribleOne + tempVaribleTwo;
        tempVaribleOne = tempVaribleTwo;
        tempVaribleTwo = tempVaribleThree;
        count += 1 ;
    }
    return tempVaribleThree ;
}

//时间复杂度T(n) = O(n)
