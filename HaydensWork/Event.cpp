//
//  Event.cpp
//  Elevator_-Algorithm
//
//  Created by Hayden Lalljie on 10/23/15.
//  Copyright (c) 2015 Hayden Lalljie. All rights reserved.
//

#include "Event.h"
//Types are UP, DOWN, LOAD, and UNLOAD
Event::Event (Elevator &elevator, string eventType, int floor)
{
    E = elevator;
    type = eventType;
    start_floor = -1;
    end_floor = floor;
    if (eventType == "LOAD")
    {
        time = E.getLoad_time();
        interruptOK = false;
    }
    else if(eventType == "UNLOAD")
    {
        time = E.getUnload_time();
        interruptOK = false;
    }
    else if (eventType == "UP" || eventType == "DOWN")
    {
        cout << "Using wrong constructor use constructor: Event(Elevator elevator, int startFloor, int endFloor)" << endl;
    }
    else
        cout << "Invalid eventType decloration in Event(Elevator elevator, string eventType) constructor.  Valid eventType names are \"UP\", \"DOWN\", \"LOAD\", or \"UNLOAD\"" << endl;
}

Event::Event (Elevator &elevator, float startFloor, float endFloor)
{
    E = elevator;
    start_floor = startFloor;
    end_floor = endFloor;
    if (startFloor > endFloor)
    {
        time = E.calculateTravelTime(start_floor, end_floor);
        type = "DOWN";
    }
    else if (startFloor < endFloor)
    {
        time = E.calculateTravelTime(start_floor, end_floor);
        type = "UP";
    }
    cout << startFloor << " " << endFloor << endl;
    if (startFloor == endFloor)
    {
        cout << "In Event (Elevator elevator, int startFloor, floatEndFloor) startFloor and endFloor are equal" << endl;
    }
}

//Returns elevator location
float Event::Go(float timeLeft)
{
    if (type == "UP" || type == "DOWN")
    {
        E.direction = type;
        if (timeLeft >= time)
        {
            E.goToFloor(end_floor);
            return end_floor;
        }
        else
        {
            float l = E.calculateElevatorLocation(start_floor, end_floor, time);
            E.goToFloor(l);
            setStart_floor(l);
            return l;
        }
    }
    if (type == "UNLOAD")
    {
        if (timeLeft < time)
            time = time - timeLeft;
        else
            E.unload();
    }
    else if (type == "LOAD")
    {
        //recalculate
    }
    
    return start_floor;
}

void Event::setStart_floor(float floor)
{
    start_floor = floor;
    time = E.calculateTravelTime(start_floor, end_floor);
}


