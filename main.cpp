//
//  main.cpp
//  Elevator_-Algorithm
//
//  Created by Hayden Lalljie on 9/28/15.
//  Copyright (c) 2015 Hayden Lalljie. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Elevator.h"
#include "Person.h"
#include <algorithm>

using namespace std;


int main(int argc, const char * argv[])
{

  // insert code here...
  std::cout << "Hello, World!\n";
  Elevator E;
  Person a; 
  a.Start_floor = 0; 
  a.End_floor = 4; //new Person(0, 4); 
  Person b; 
  b.Start_floor = 0; 
  b.End_floor = 7; //= new Person(0, 7); 
  Person c; //= new Person(0, 2); 
  c.Start_floor = 0; 
  c.End_floor = 2; 
  Person d; 
  d.Start_floor = 0; 
  d.End_floor = 5; //= new Person(1, 5); 
  Person e; 
  e.Start_floor = 0; 
  e.End_floor = 22; //= new Person(1, 5);  
  Person f; 
  f.Start_floor = 0; 
  f.End_floor = 1; //= new Person(1, 5); 
  Person g; 
  g.Start_floor = 0; 
  g.End_floor = 53; //= new Person(1, 5); 

  /*E.addPerson(a);
  E.addPerson(b);
  E.addPerson(c);
  E.addPerson(d);  
  E.addPerson(e);  
  E.addPerson(f);
  E.addPerson(g); 
  sort(E.People.begin(), E.People.end());
  for(int i = 0; i < E.People.size(); i++){
    cout << E.People.at(i).End_floor << endl; 
    }*/
  return 0;
}
