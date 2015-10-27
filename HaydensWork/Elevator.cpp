//
//  Elevator.cpp
//  Elevator_-Algorithm
//
//  Created by Hayden Lalljie on 9/28/15.
//  Copyright (c) 2015 Hayden Lalljie. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Elevator.h"


using namespace std;

Elevator::Elevator()
{
    Velocity = 6.00;
    Load_time = 10.00;
    Unload_time = 5.00;
    Capacity = 50;
    Current_floor = 0;
    Floors = 5;
    Rest_floor = 1;
    for (int i = 0; i < Floors; i++)
    {
        vector<Person> v;
        People.push_back(v);
    }
    direction  = "NONE";
}

Elevator::Elevator(int floors)
{
    Velocity = 6.00;
    Load_time = 10.00;
    Unload_time = 5.00;
    Capacity = 50;
    Current_floor = 0;
    Floors = floors;
    Rest_floor = floors / 2;
    for (int i = 0; i < Floors; i++)
    {
        vector<Person> v;
        People.push_back(v);
    }
}
    
float Elevator::getVelocity()
{
    return Velocity;
}
    
float Elevator::getLoad_time()
{
    return Load_time;
}
    
float Elevator::getUnload_time()
{
    return Unload_time;
}
    
int Elevator::getCapacity()
{
    return Capacity;
}
    
void Elevator::addPerson(Person &P)
{
    cout << "Adding Person to Elevator" << endl;
    People[P.End_floor].push_back(P);
}

float Elevator::calculateTravelTime(float start_floor, float end_floor)
{
    float  floor_difference = fabs(start_floor - end_floor);
    if (floor_difference == 0)
    {
        return 0;
    }
    return 10*(floor_difference / Velocity);
    
}

//No error checking done here can return out of bounds location
float Elevator::calculateElevatorLocation(float start_floor, float end_floor, float time)
{
    if (start_floor > end_floor)
        return start_floor - (Velocity * time);
    else if (start_floor < end_floor)
        return start_floor + (Velocity * time);
    return start_floor;
}

float Elevator::goToFloor(float new_floor)
{
    cout << "Elevator going to floor: " << new_floor << endl;
    
    float time = calculateTravelTime(new_floor, Current_floor);
    for (int i = 0; i < People.size(); i++)
    {
        for (int j = 0; j < People[i].size(); j++)
        {
            People[i][j].addTime(time);
        }
    }
    Current_floor = new_floor;
    return time;
}

void Elevator::unload()
{
    cout << "Unloading on floor: " << Current_floor << endl;
    int exiting = (int)People[Current_floor].size();
    for (int i = 0; i < exiting; i++)
    {
        People[Current_floor].pop_back();
    }
}
