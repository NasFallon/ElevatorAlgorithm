#include <iostream> 
#include <vector>

using namespace std;

class Building{

public: 
  vector<Elevator> Elevators; //vector containing the elevator objects 
  vector<Person> requests; 
  int numFloors;
  int numElevators; //determined by size of building
  int restingFloor; //floor elevator rests on when it has no requests
  int goal; //the floor the elevator is heading to
  string type; //residential or office

  Building();
  Building(int numFloors, int goal, string type);
  //getter functions:
  int getnumFloors();
  int getrestingFloor();
  int getGoal();
  string getType();
  //setter functions:
  void setnumFloors(int n); //n: number of floors
  void setrestingFloor(int n); //n: size of building
  void setnumElevators(int n); //n: number of floors
  void setGoal(int n);
  void generateRequests();
};
