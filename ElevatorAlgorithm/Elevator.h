//
//  Elevator.h
//  Elevator_-Algorithm
//
//  Created by Hayden Lalljie on 9/28/15.
//  Copyright (c) 2015 Hayden Lalljie. All rights reserved.
//

#ifndef Elevator__Algorithm_Elevator_h
#define Elevator__Algorithm_Elevator_h

#include <iostream>
#include <vector>
#include "Person.h"

using namespace std;


class Elevator
{
    private:
        float Velocity;
        float Load_time;
        float Unload_time;
        int Capacity;
        int Floors;

    
    public:
        vector<vector<Person>> People;
        int Rest_floor;
        int Current_floor;
    
        Elevator();
        Elevator(int floors);
    
        float getVelocity();
        float getLoad_time();
        float getUnload_time();
        int getCapacity();
        void addPerson(Person P);
        float calculateTravelTime(int start_floor, int end_floor);
        float calculateElevatorLocation(int start_floor, int end_floor, float time);
        float goToFloor(float new_floor);
        void unload();
    
    
    
};

#endif
