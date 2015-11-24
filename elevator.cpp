#include <stdlib.h> 
#include <stdio.h>

typedef struct person{
  int start; 
  int end; 
  bool state; //true if on elevator, false if not
  int timeSpent; //time spent on the elevator so we can average it
} person; 

typedef struct elevator{
  //maybe have two elevators: up and down?
  vector<person> elevator; 
} elevator; 

typedef struct building{
  int numFloors; 
  int numElevators;
} building;

person * createPerson(int _start, int _end, bool _state); 
building * createBuilding(int _numFloors, int _numElevators); 
//elevator * createElevator();
vector<person> randomGenerator(); 

int main(){
  int floors, elevators; 
  cout << "Number of floors: "; 
  cin >> floors; 
  cout << "Number of elevators: "; 
  cin >> elevators; 
  
  building * b = createBuilding(floors, elevators); 
  return 0; 
}

person * createPerson(int _start, int _end, bool _state){
  person * p; 
  p = malloc(sizeof(person)); 
  p->start = _start; 
  p->end = _end; 
  p->state = _state; 
}

vector<person> randomGenerator(){
  /****
       this function returns a bunch of requests for the builing
   ****/
  vector<person> requests; 

  return requests; 
}
