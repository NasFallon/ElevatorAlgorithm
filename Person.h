//
//  Person.h
//  Elevator_-Algorithm
//
//  Created by Hayden Lalljie on 9/28/15.
//  Copyright (c) 2015 Hayden Lalljie. All rights reserved.
//

#ifndef Elevator__Algorithm_Person_h
#define Elevator__Algorithm_Person_h
#define Up true 
#define Down false 

class Person{
 public: 
  int length; //distance to the goal floor
  bool direction; //up = true, down = false

  Person(); 
  Person(int Startfloor, int Endfloor); 
  bool operator < (Person p); //overloaded Person operator for algorithm sort
  int getStart_floor(); 
  int getEnd_floor(); 
  int Start_floor; 
  int End_floor; 
  int getDirection();
};

#endif
