//
//  WDChapterThreePointThreePracticeQuestionFour.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/28.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "WDChapterThreePointThreePracticeQuestionFour.h"

#define MaxSize 500
#define BoatCapacity 10


typedef struct {
    int carNumber;
    int type ;
}CarType;


typedef struct {
    CarType data[MaxSize];
    int rear,front ;
}CarWaitQueue;


typedef struct {
    CarType data[BoatCapacity];
    int top ;
}Boat;

CarType * initCarType(void);
CarWaitQueue * initCarWaitQueue(void);
Boat * initBoat(void);
void inputCarInformation(int *type,int *number) ;
void displayFerryMenu(int *choice);
bool enCarQueue(CarWaitQueue *queue,CarType car) ;
bool deCarQueue(CarWaitQueue *queue,CarType *car) ;
bool carQueueEmpty(CarWaitQueue *queue);
bool carQueueFull(CarWaitQueue *queue);
bool boatPush(Boat *boat , CarType car);
bool boatPoP(Boat *boat, CarType *car);
bool boatEmpty(Boat *boat);
bool boatFull(Boat *boat);
void adjustWaitQueue(Boat *boat,CarWaitQueue *busWait,CarWaitQueue *lorryWait,int *count) ;
void displayBoat(Boat *boat) ;

void ferryManagerSystem(void) {
    int type,number,choice ,count = 0 ;
    CarWaitQueue *lorryWait = initCarWaitQueue();
    CarWaitQueue *busWait = initCarWaitQueue();
    Boat *boat = initBoat();
    while (true) {
    Wait:
        displayFerryMenu(&choice);
        if (choice == 1) {
            inputCarInformation(&type, &number);
            CarType *car = initCarType();
            car->carNumber = number;
            car->type = type ;
            if (type == 1) {
                if (!enCarQueue(busWait, *car)) {
                    printf("Bus等待队列已满，请稍后操作\n");
                    goto Wait ;
                }
                if (boatFull(boat)) {
                    printf("船已转满，请发船\n");
                    goto Wait;
                }else {
                    adjustWaitQueue(boat, busWait, lorryWait, &count);
                    if (boatFull(boat)) {
                        printf("船已转满，请发船\n");
                        goto Wait;
                    }
                }
            }else{
                if (!enCarQueue(lorryWait, *car)) {
                    printf("Bus等待队列已满，请稍后操作\n");
                    goto Wait ;
                }
                if (count >= 4) {
                    if (boatFull(boat)) {
                        printf("船已转满，请发船\n");
                        goto Wait;
                    }else{
                        adjustWaitQueue(boat, busWait, lorryWait, &count) ;
                        if (boatFull(boat)) {
                            printf("船已转满，请发船\n");
                            goto Wait;
                        }
                    }
                }
            }
            
        }else{
            if (!boatFull(boat) && !carQueueEmpty(lorryWait)) {
                while (!carQueueEmpty(lorryWait) && !boatFull(boat)) {
                    CarType car;
                    deCarQueue(lorryWait, &car);
                    boatPush(boat, car);
                    count = 0 ;
                }
            }
            displayBoat(boat);
            adjustWaitQueue(boat, busWait, lorryWait, &count) ;
            if (boatEmpty(boat)) {
                printf("船已转满，请发船\n");
                goto Wait;
            }
        }
    }
}

void inputCarInformation(int *type,int *number) {
ReInput:
    printf("请输入车辆类型，格式如下：类型,车辆编号\n");
    scanf("%d,%d",type,number);
    if (*type >= 3 || *type <= 0 || *number<=0 ) {
        printf("输入不合法,请重新输入\n");
        goto ReInput;
    }
}

void displayFerryMenu(int *choice) {
ReInput:
    printf("------------菜单-------------\n");
    printf("1.添加车辆\n");
    printf("2.发船\n");
    printf("-------------------------\n");
    scanf("%d",choice);
    if (*choice <= 0 || *choice >= 3) {
        printf("输入不合法,请重新输入\n");
        goto ReInput;
    }
}


CarType * initCarType(void) {
    CarType * car = (CarType *)malloc(sizeof(CarType));
    return car ;
}

CarWaitQueue * initCarWaitQueue(void) {
    CarWaitQueue *queue = (CarWaitQueue *)malloc(sizeof(CarWaitQueue));
    queue->front = queue->rear = 0 ;
    return queue ;
}

Boat * initBoat(void) {
    Boat *boat = (Boat *)malloc(sizeof(Boat));
    boat->top = -1;
    return boat ;
}

bool enCarQueue(CarWaitQueue *queue,CarType car) {
    if (carQueueFull(queue)) {
        return false ;
    }else{
        queue->rear = (queue->rear+ 1)%MaxSize;
        queue->data[queue->rear] = car ;
        return true ;
    }
}

bool deCarQueue(CarWaitQueue *queue,CarType *car)  {
    if (carQueueEmpty(queue)) {
        return false ;
    }else{
        queue->front = (queue->front + 1)%MaxSize ;
        *car = queue->data[queue->front];
        return true ;
    }
}

bool carQueueEmpty(CarWaitQueue *queue) {
    return queue->rear == queue->front ;
}

bool carQueueFull(CarWaitQueue *queue) {
    return (queue->rear + 1)%MaxSize == queue->front ;
}

bool boatPush(Boat *boat , CarType car) {
    if (boatFull(boat)) {
        return false ;
    }else{
        boat->top ++ ;
        boat->data[boat->top] = car ;
        return true ;
    }
}

bool boatPoP(Boat *boat, CarType *car){
    if (boatEmpty(boat)) {
        return false ;
    }else{
        *car = boat->data[boat->top];
        boat->top -- ;
        return true ;
    }
}

bool boatEmpty(Boat *boat){
    return boat->top == -1 ;
}

bool boatFull(Boat *boat) {
    return boat->top == BoatCapacity -1 ;
}

void adjustWaitQueue(Boat *boat,CarWaitQueue *busWait,CarWaitQueue *lorryWait,int *count) {
    int adjust = 1 ;
    while (adjust == 1) {
        if (adjust == 1) {
            adjust = 0 ;
        }
        while (*count >= 4 && !carQueueEmpty(lorryWait) && !boatFull(boat)) {
            if (adjust == 0) {
                adjust = 1;
            }
            CarType car ;
            deCarQueue(lorryWait, &car);
            boatPush(boat, car) ;
            *count = *count -4 ;
        }
        while (*count >= 4 && !boatFull(boat) && carQueueEmpty(lorryWait) && !carQueueEmpty(busWait)) {
            if (adjust == 0) {
                adjust = 1;
            }
            CarType car ;
            deCarQueue(busWait, &car);
            boatPush(boat, car) ;
            *count = *count + 1 ;
        }
        while (*count < 4 && !boatFull(boat) && !carQueueEmpty(busWait)) {
            if (adjust == 0) {
                adjust = 1;
            }
            CarType car ;
            deCarQueue(busWait, &car);
            boatPush(boat, car) ;
            *count = *count + 1 ;
        }
    }
}

void displayBoat(Boat *boat)  {
    while (!boatEmpty(boat)) {
        CarType car ;
        boatPoP(boat, &car);
        if (car.type == 1) {
            printf("客车");
            printf("%d下船\n",car.carNumber);
        }else{
            printf("卡车");
            printf("%d下船\n",car.carNumber);
        }
    }
    printf("船已回岸\n");
}
