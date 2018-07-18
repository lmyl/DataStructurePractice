//
//  LCBXXZDChapterTenAlgorithmDesignFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTenAlgorithmDesignFour.h"





void quickSortNoRescurive(SeqList seqlist , int elementNumber) {
    QuickSortNoRescuriveRange stack[MAXL] ;
    int top = -1 ;
    QuickSortNoRescuriveRange new = {0 , elementNumber - 1} ;
    top ++ ;
    stack[top] = new ;
    while (top != -1) {
        new = stack[top] ;
        top -- ;
        int low = new.start ;
        int up = new.end ;
        if (low >= up) {
            continue ;
        }
        NodeType temp = seqlist[low] ;
        int i = low ;
        int j = up ;
        while (i < j) {
            while (i < j && seqlist[j].key >= temp.key) {
                j -- ;
            }
            if (i == j) {
                break ;
            }
            seqlist[i] = seqlist[j] ;
            while (i < j && seqlist[i].key <= temp.key) {
                i ++ ;
            }
            if (i == j ) {
                break ;
            }
            seqlist[j] = seqlist[i] ;
        }
        seqlist[i]  = temp ;
        QuickSortNoRescuriveRange addOne = {low , i - 1} ;
        QuickSortNoRescuriveRange addTwo  = {i+1 ,up} ;
        top ++ ;
        stack[top] = addOne ;
        top ++ ;
        stack[top] = addTwo ;
    }
}
