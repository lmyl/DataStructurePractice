//
//  LCBChapterTenMachineExperimentTen.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/16.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterTenMachineExperimentTen.h"

RadixDictionaryNode * RadixSortDictionary(RadixDictionaryNode * list) {
    RadixDictionaryNode * head[27] ;
    RadixDictionaryNode * tail[27] ;
    for (int i = 0; i<MaxLen; i++) {
        for (int j = 0; j<27; j++) {
            head[j] = NULL ;
            tail[j] = NULL ;
        }
        RadixDictionaryNode * next = list ;
        while (next != NULL) {
            RadixDictionaryNode * nextToNext  = next->next ;
            int index = -1 ;
            if (next->data[i] == ' ') {
                index = 0 ;
            }else{
                index = next->data[i] - 'a' + 1 ;
            }
            if (head[index] == NULL) {
                head[index] = next ;
                tail[index] = next ;
                next->next = NULL ;
            }else{
                next->next = tail[index]->next ;
                tail[index]->next = next ;
                tail[index] = next ;
            }
            next = nextToNext ;
        }
        next = list = NULL ;
        for (int j = 0; j<27; j++) {
            if (head[j] == NULL) {
                continue ;
            }
            while (head[j] != NULL) {
                RadixDictionaryNode * headToNext = head[j]->next ;
                if (list == NULL) {
                    list = head[j] ;
                    next = list ;
                    list->next  = NULL ;
                }else{
                    head[j]->next = next->next ;
                    next->next = head[j] ;
                    next = head[j] ;
                }
                head[j] = headToNext ;
            }
        }
    }
    return list ;
}
