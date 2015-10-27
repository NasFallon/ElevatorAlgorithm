//
//  Building.h
//  Elevator_-Algorithm
//
//  Created by Hayden Lalljie on 9/28/15.
//  Copyright (c) 2015 Hayden Lalljie. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Elevator.h"
#include "Person.h"
#include "Event.h"
#include <algorithm>

using namespace std;

class Building{  
 public:
  int Num_floors;
  vector<Elevator> Elevators; //vector containing the elevator objects
  vector<Person> People; //vector containing the Person objects
  int Num_elevators;  //determined by size of building
  int Resting_floor;  //floor elevator rests on when it has no requests
  int Goal;   //the floor the elevator is heading to
  string Type;    //residential or office
  vector<Event> Events;
  
  Building();
  Building(int numFloors, int goal, string type);
  
  //get functions:
  int getNum_floors();
  int getResting_floor();
  int getGoal();
  string getType();    //set functions:
  int setNum_floors(int n);
  int setResting_floor(int n);
  int setNum_elevators(int n);
  
  void setGoal(int n);
  
  //Elevator calls
  void addPerson(Person &P);
  void addPeople(vector<Person> &P);
  void generateRequests(int numRequests); 
};
