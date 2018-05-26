//
//  LCBChapterThreeMachineExperimentEight.c
//  DataStructurePractice
//
//  Created by ly on 2018/5/26.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterThreeMachineExperimentEight.h"

#define MaxCarparkCapacity 4
#define MaxCarWaitParkCapacity 4

typedef struct {
    time_t enCarpark ;
    int carNumber ;
}Car;

typedef struct {
    Car data[MaxCarparkCapacity];
    int top ;
}Carpark;

typedef struct {
    Car data[MaxCarWaitParkCapacity];
    int rear ;
    int front ;
}CarWaitPark;


void displayCarparkMenu(int *choice);   //  显示停车场主菜单
bool enCarWaitPark(CarWaitPark *carWaitPark,Car car,Carpark *carpark) ;//进入候车场，并调整两个停车场的车辆
bool deCarWaitPark(CarWaitPark *carWaitPark,Car *car) ;//出去候车场
Car * initCar(void);
Carpark *initCarpark(void);
CarWaitPark * initCarWaitPark(void);
void inputCarNumber(Car *car) ; //输入汽车编号
bool carWaitParkEmpty(CarWaitPark *carWaitPark);
bool carparkEmpty(Carpark *carpark) ;
double parkingFee(Car car); //计费
void displayCarpark(Carpark carpark,int *choice) ;  //显示停车场的车辆，并选择出去的车编号
bool popCarpark(Carpark *carpark, Car *car);
void adjustCarForOut(Carpark *carpark ,int choice,CarWaitPark *carWaitPark) ;   //出停车场，并调整两个停车场的车辆
bool pushCarpark(Carpark *carpark,Car car) ;

void carparkManager(void) {
    Carpark *carpark = initCarpark();
    CarWaitPark *carWaitPark = initCarWaitPark();
    int choice ;
    while (true) {
        displayCarparkMenu(&choice);
        if (choice == 1) {
            Car *car = initCar() ;
            if ((carWaitPark->rear + 1)%MaxCarWaitParkCapacity == carWaitPark->front) {
                printf("候车场已满!\n");
            }else{
                inputCarNumber(car);
                enCarWaitPark(carWaitPark, *car,carpark);
                printf("汽车%d已进入候车场\n",car->carNumber);
            }
        }else{
            displayCarpark(*carpark, &choice);
            if (choice != -1) {
                adjustCarForOut(carpark, choice,carWaitPark);
            }
        }
    }
}

void displayCarparkMenu(int *choice) {
reInput:
    printf("-----------------菜单----------------\n");
    printf("请选择:\n");
    printf("1.进入候车场\n");
    printf("2.缴费\n");
    printf("-------------------------------------\n");
    scanf("%d",choice);
    if (*choice>=3 || *choice<=0) {
        printf("输入不合法，重新输入\n");
        goto reInput ;
    }
}

bool enCarWaitPark(CarWaitPark *carWaitPark,Car car,Carpark *carpark) {
    if ((carWaitPark->rear + 1)%MaxCarWaitParkCapacity == carWaitPark->front) {
        return false ;
    }else{
        carWaitPark->rear = (carWaitPark->rear + 1)%MaxCarWaitParkCapacity ;
        carWaitPark->data[carWaitPark->rear] = car ;
    }
    Car tempCar ;
    while (carpark->top < MaxCarparkCapacity-1 && !carWaitParkEmpty(carWaitPark)) {
        deCarWaitPark(carWaitPark, &tempCar);
        time(&tempCar.enCarpark);
        pushCarpark(carpark, tempCar);
    }
    return true ;
}

bool deCarWaitPark(CarWaitPark *carWaitPark,Car *car) {
    if (carWaitParkEmpty(carWaitPark)) {
        return false ;
    }else{
        carWaitPark->front = (carWaitPark->front + 1)%MaxCarWaitParkCapacity ;
        *car =  carWaitPark->data[carWaitPark->front] ;
        return true;
    }
}

Car * initCar(void) {
    Car *car = (Car *)malloc(sizeof(Car));
    car->carNumber = 0;
    time(&car->enCarpark);
    return car;
}

Carpark *initCarpark(void) {
    Carpark *carpark = (Carpark *)malloc(sizeof(Carpark));
    carpark->top = -1;
    return carpark ;
}

CarWaitPark * initCarWaitPark(void) {
    CarWaitPark *carWaitPark = (CarWaitPark *)malloc(sizeof(CarWaitPark));
    carWaitPark->front = 0;
    carWaitPark->rear = 0;
    return carWaitPark ;
}

void inputCarNumber(Car *car) {
    printf("请输入汽车牌号:\n");
    scanf("%d",&car->carNumber);
}

bool carWaitParkEmpty(CarWaitPark *carWaitPark) {
    return carWaitPark->front == carWaitPark->rear;
}

bool carparkEmpty(Carpark *carpark)  {
    return carpark->top == -1 ;
}

double parkingFee(Car car) {
    time_t now ;
    time(&now);
    double parkingTime = difftime(now, car.enCarpark);
    double rate = 0.00278 ;
    return parkingTime * rate ;
}

void displayCarpark(Carpark carpark,int *choice) {
    Car car ;
    int carCount = 0;
    printf("-------------停车场列表--------------\n");
    while (!carparkEmpty(&carpark)) {
        carCount ++ ;
        popCarpark(&carpark, &car);
        printf("%d.编号%d\n",carCount ,car.carNumber);
    }
    if (carCount == 0) {
        printf("停车场无车\n");
        *choice = -1 ;
    }else{
    reInput:
        printf("请输入出库车序号：\n");
        int carSerial ;
        scanf("%d",&carSerial);
        if (carSerial <= 0 || carSerial > carCount) {
            printf("输入无效,请重新输入\n");
            goto reInput ;
        }
        *choice = carSerial;
    }
}

bool popCarpark(Carpark *carpark, Car *car) {
    if (carpark->top == -1) {
        return false ;
    }else{
        *car = carpark->data[carpark->top];
        carpark->top -- ;
        return true ;
    }
}

void adjustCarForOut(Carpark *carpark ,int choice,CarWaitPark *carWaitPark)  {
    Carpark *carTempPark = initCarpark() ;
    int count = 1 ;
    Car car ;
    while (choice > count) {
        popCarpark(carpark, &car);
        double free = parkingFee(car);
        printf("汽车%d临时性出库,支付%f元\n",car.carNumber,free);
        pushCarpark(carTempPark, car);
        count ++ ;
    }
    popCarpark(carpark, &car);
    double free = parkingFee(car);
    printf("汽车%d出库,支付%f元\n",car.carNumber,free);
    while (!carparkEmpty(carTempPark)) {
        popCarpark(carTempPark, &car);
        printf("汽车%d临时性进库\n",car.carNumber);
        time(&car.enCarpark);
        pushCarpark(carpark, car);
    }
    while (carpark->top < MaxCarparkCapacity-1 && !carWaitParkEmpty(carWaitPark)) {
        deCarWaitPark(carWaitPark, &car);
        time(&car.enCarpark);
        pushCarpark(carpark, car);
    }
}

bool pushCarpark(Carpark *carpark,Car car) {
    if (carpark->top == MaxCarparkCapacity -1) {
        return false ;
    }else{
        carpark->top ++ ;
        carpark->data[carpark->top] = car ;
        return true ;
    }
}
