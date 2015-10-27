#include <iostream> 
#include <vector>
#include "Elevator.h"
#include "Building.h"

using namespace std;

Building::Building(){
  numFloors = 0; 
  setnumElevators(0); 
  setrestingFloor(0); 
  goal = 0; 
  type = "";
  for(int i = 0; i < numElevators; i++){
    //create a vector of elevator objects representing for each 
    //elevator in the building
    Elevators.push_back(Elevator()); 
  }
}
Building::Building(int _numFloors, int _goal, string _type){
  //full constructor
  numFloors = _numFloors; 
  setnumElevators(_numFloors); 
  setrestingFloor(_numFloors); 
  goal = _goal; 
  type = _type; 
} 
  //get functions:
int Building::getnumFloors(){
  return numFloors; 
}
int Building::getrestingFloor(){
  return restingFloor; 
}
int Building::getGoal(){
  return goal;
}
string Building::getType(){
  return type; 
}
//set functions:
void Building::setnumFloors(int n){ //n: number of floors
  numFloors = n; 
}
void Building::setrestingFloor(int n){ //n: size of building
  //set the resting floor to be half of the building size
  if(n < 1)
    restingFloor = 0;
  else 
    restingFloor = n / 2;
}
void Building::setnumElevators(int n){ //n: number of floors
  if(n < 1)
    numElevators = 0; 
  else 
    numElevators = 1; //set it equal to 1 until we are ready for multiple elevators
}
void Building::setGoal(int n){
  goal = n;
}

void generateRequests(){
  for(int i = 0; i < 100; i++){
    Person p(); 
    
}
