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
}
    
Person::Person(int new_Start_floor, int new_End_floor)
{
  Start_floor = new_Start_floor;
  End_floor = new_End_floor;
}

bool Person::operator < (Person p){
  if(End_floor < p.End_floor)
    return true; 
  else return false; 
}
    
int Person::getStart_floor()
{
  return Start_floor;
}
    
int Person::getEnd_floor()
{
  return End_floor;
}
