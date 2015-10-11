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
    
 public:
  vector<Person> People;    
  Elevator();
  float getVelocity();
  float getLoad_time();
  float getUnload_time();
  int getCapacity();
  void addPerson();
  void addPerson(Person p);
    
};

#endif
