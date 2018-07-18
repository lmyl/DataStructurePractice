//
//  LCBXXZDChapterTenAlgorithmDesignFive.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/17.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBXXZDChapterTenAlgorithmDesignFive.h"

void quickSortNoRescuriveUseQueue(SeqList seqlist , int elementNumber) {
    QuickSortNoRescuriveRange queue[MAXL] ;
    int front = 0 ;
    int rear = 0 ;
    QuickSortNoRescuriveRange new = {0 , elementNumber - 1} ;
    rear = (rear + 1 )%MAXL ;
    queue[rear] = new ;
    while (rear != front) {
        front = (front + 1) %MAXL ;
        new = queue[front] ;
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
        rear = (rear + 1 )%MAXL ;
        queue[rear] = addOne ;
        rear = (rear + 1 )%MAXL ;
        queue[rear] = addTwo ;
    }
}
