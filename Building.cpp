#include <iostream> 
#include <vector>
#include "Elevator.h"
#include "Building.h"

using namespace std;

Building::Building(){
  Num_floors = 0; 
  Num_elevators = setNum_elevators(0); 
  Resting_floor = setResting_floor(0); 
  Goal = 0; 
  Type = "";
  for(int i = 0; i < Num_elevators; i++){
    //create a vector of elevator objects representing for each 
    //elevator in the building
    Elevators.push_back(Elevator()); 
  }
}
Building::Building(int numFloors, int goal, string type){
  //full constructor
  Num_floors = numFloors; 
  Num_elevators = setNum_elevators(numFloors); 
  Resting_floor = setResting_floor(numFloors); 
  Goal = goal; 
  Type = type; 
} 
  //get functions:
int Building::getNum_floors(){
  return Num_floors; 
}
int Building::getResting_floor(){
  return Resting_floor; 
}
int Building::getGoal(){
  return Goal;
}
string Building::getType(){
  return Type; 
}
//set functions:
int Building::setNum_floors(int n){ //n: number of floors
  return n; 
}
int Building::setResting_floor(int n){ //n: size of building
  //set the resting floor to be half of the building size
  if(n < 1)
    return 0;
  else 
    return n / 2;
}
int Building::setNum_elevators(int n){ //n: number of floors
  if(n < 1)
    return 0; 
  else 
    return 1; //set it equal to 1 until we are ready for multiple elevators
}
void Building::setGoal(int n){
  Goal = n;
}
