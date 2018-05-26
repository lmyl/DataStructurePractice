//
//  LCBChapterThreeMachineExperimentSeven.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/26.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterThreeMachineExperimentSeven_h
#define LCBChapterThreeMachineExperimentSeven_h

#include <stdio.h>
#include "LCBChapterThreeCSqQueue.h"


/*程序采用菜单方式，其选项及功能说明如下
 排队 - 输入排队病人的病历号，加入到病人排队队列中
 就诊 - 病人排队队列中最前面的病人就诊，并将其从队列中删除
 查看排队 - 从队首到队尾列出所有的排队病人的病历号
 不再排队，余下一次就诊 - 从队首到队尾列出所有的排队病人的病历号，并退出运行
 下班 - 退出运行
 */

void hospitalProcedures(void) ;


#endif /* LCBChapterThreeMachineExperimentSeven_h */
