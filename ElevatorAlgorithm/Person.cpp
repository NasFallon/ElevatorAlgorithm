//
//  Person.cpp
//  Elevator_-Algorithm
//
//  Created by Hayden Lalljie on 9/28/15.
//  Copyright (c) 2015 Hayden Lalljie. All rights reserved.
//
#include <iostream>
#include "Person.h"

using namespace std;

Person::Person()
{
    Start_floor = 0;
    End_floor = 1;
    Time = 0;
}
    
Person::Person( int new_Start_floor, int new_End_floor)
{
    Start_floor = new_Start_floor;
    End_floor = new_End_floor;
}
    
int Person::getStart_floor()
{
    return Start_floor;
}
    
int Person::getEnd_floor()
{
    return End_floor;
}

void Person::addTime(float plus_time)
{
    Time += plus_time;
}
float Person::getTime()
{
    return Time;
}
