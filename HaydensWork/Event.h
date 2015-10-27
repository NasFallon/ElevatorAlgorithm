//
//  Event.h
//  Elevator_-Algorithm
//
//  Created by Hayden Lalljie on 10/23/15.
//  Copyright (c) 2015 Hayden Lalljie. All rights reserved.
//

#ifndef __Elevator__Algorithm__Event__
#define __Elevator__Algorithm__Event__

#include <iostream>
#include "Elevator.h"
using namespace std;


class Event
{
    public:
    
    //Variable Declorations
    float time;
    string type;
    float start_floor;
    float end_floor;
    bool interruptOK;
    Elevator E;
    
    
    //Prototypes
    Event (Elevator &elevator, string type, int floor);
    Event (Elevator &elevator, float startFloor, float endFloor);
    float Go (float timeLeft);
    void setStart_floor(float floor);
    
};

#endif /* defined(__Elevator__Algorithm__Event__) */
