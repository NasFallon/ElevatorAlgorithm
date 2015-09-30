#include <iostream> 
#include <vector>
#include "Elevator.cpp"

using namespace std;

Building::Building{

public: 
  int Num_floors;
  vector<Elevator> Elevators; //vector containing the elevator objects 
  int Num_elevators; //determined by size of building
  int Resting_floor; //floor elevator rests on when it has no requests
  int Goal; //the floor the elevator is heading to
  string Type; //residential or office
  Building();
  Building(int numFloors, int goal, string type);
  //get functions:
  int getNum_floors();
  int getResting_floor();
  int getGoal();
  string getType();
  //set functions:
  int setNum_floors(int n); //n: number of floors
  int setResting_floor(int n); //n: size of building
  int setNum_elevators(int n); //n: number of floors
  void setGoal(int n);
};
