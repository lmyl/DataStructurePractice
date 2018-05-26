//
//  LCBChapterThreeMachineExperimentEight.h
//  DataStructurePractice
//
//  Created by ly on 2018/5/26.
//  Copyright © 2018年 LY. All rights reserved.
//

#ifndef LCBChapterThreeMachineExperimentEight_h
#define LCBChapterThreeMachineExperimentEight_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

/*
 设停车场内只有一个可停放n辆汽车的狭长通道，且只有一个大门可供汽车进出。汽车在停车场内按车辆到达时间依次由南向北排列（大门在最北端，最先到达的第一辆车停放在车场的最南端）
 若车场内已停满n辆汽车，则后来的汽车只能在门外的便道上等候，一旦有车开走，则排在便道上的第一辆车即可开入
 当停车场内某辆车要离开时，在它之后开入的车辆必须先退出车场为它让路，待该辆车开出大门外，其它车辆再按原次序进入车场
 每辆停放在车场的车在它离开停车场时必须按它停留的时间长短交纳费用。试为停车场编制按上述要求进行管理的模拟程序。
 */

void carparkManager(void) ;

#endif /* LCBChapterThreeMachineExperimentEight_h */
