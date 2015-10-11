//
//  Person.h
//  Elevator_-Algorithm
//
//  Created by Hayden Lalljie on 9/28/15.
//  Copyright (c) 2015 Hayden Lalljie. All rights reserved.
//

#ifndef Elevator__Algorithm_Person_h
#define Elevator__Algorithm_Person_h

class Person{
 public: 
  Person(); 
  Person(int new_Start_floor, int new_End_floor); 
  bool operator < (Person p); 
  int getStart_floor(); 
  int getEnd_floor(); 
  int Start_floor; 
  int End_floor; 
};

#endif