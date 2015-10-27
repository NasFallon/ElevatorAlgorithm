//
//  Person.h
//  Elevator_-Algorithm
//
//  Created by Hayden Lalljie on 9/28/15.
//  Copyright (c) 2015 Hayden Lalljie. All rights reserved.
//

#ifndef Elevator__Algorithm_Person_h
#define Elevator__Algorithm_Person_h
#include <iostream>
using namespace std;

class Person
{
    public:
        Person();
        Person( int new_Start_floor, int new_End_floor);
        int Start_floor;
        int End_floor;
        float Time;
        string direction;
        int getStart_floor();
        int getEnd_floor();
        void addTime(float plus_time);
        float getTime();
};

#endif
