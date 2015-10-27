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
  direction = false; 
}
    
Person::Person(int start, int end)
{
  Start_floor = start;
  End_floor = end;
  if(Start_floor - End_floor > 0)
    direction = Up; 
  else direction = Down; 
}

bool Person::operator < (Person p){
  if(End_floor < p.End_floor)
    return true; 
  else return false; 
}
 
int setLength(int n){
  //will be computer by Elevator class for every Person object
  length = n; 
}
   
int Person::getStart_floor()
{
  return Start_floor;
}
    
int Person::getEnd_floor()
{
  return End_floor;
}

int Person::getDirection(){
  return direction; 
}

int Person::getLength(){
  return length; 
}
