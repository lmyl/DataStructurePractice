//
//  RadixSort.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/15.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "RadixSort.h"

RadixNode * RadixSort(RadixNode * list ,int digits ,int decimal) {
    RadixNode * head[decimal] ;
    RadixNode * tail[decimal] ;
    for (int i = digits-1; i>=0; i--) {
        for (int j = 0; j<decimal; j++) {
            head[j] = NULL ;
            tail[j] = NULL ;
        }
        RadixNode * next = list ;
        while (next != NULL) {
            RadixNode * nextToNext = next->next ;
            int index = next->data[i]  ;
            if (head[index] == NULL) {
                head[index] = next ;
                tail[index] = next ;
                next->next = NULL ;
            }else{
                next->next = tail[index]->next ;
                tail[index]->next = next ;
                tail[index] = next;
            }
            next = nextToNext ;
        }
        list = next = NULL ;
        for (int j  =0; j<decimal; j++) {
            if (head[j] == NULL) {
                continue ;
            }
            while (head[j] != NULL) {
                RadixNode * headNext = head[j]->next ;
                if (list == NULL) {
                    list = head[j] ;
                    next = list ;
                    next->next  = NULL;
                }else{
                    head[j]->next = next->next ;
                    next->next = head[j] ;
                    next = next->next ;
                }
                head[j] = headNext ;
            }
        }
        
    }
    return list ;
}
