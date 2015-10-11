//
//  Elevator.cpp
//  Elevator_-Algorithm
//
//  Created by Hayden Lalljie on 9/28/15.
//  Copyright (c) 2015 Hayden Lalljie. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Person.h"
#include "Elevator.h"

using namespace std;

Elevator::Elevator()
{
  Velocity = 6.00;
  Load_time = 15.00;
  Unload_time = 5.00;
  Capacity = 20;
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
    
void Elevator::addPerson()
{
  Person P;
  People.push_back(P);
}

void Elevator::addPerson(Person p){
  People.push_back(p); 
}
