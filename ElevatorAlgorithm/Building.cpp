#include "Building.h"

Building::Building()
{
    Num_floors = 3;
    Num_elevators = setNum_elevators(1);
    Resting_floor = setResting_floor(1);
    Goal = 0; 
    Type = "";
    for(int i = 0; i < Num_elevators; i++)
    {
      //create a vector of elevator objects representing for each 
      //elevator in the building
        Elevator a;
        Elevators.push_back(a);
    }
}

Building::Building(int numFloors, int goal, string type)
{
    //full constructor
    Num_floors = numFloors;
    Num_elevators = setNum_elevators(numFloors); 
    Resting_floor = setResting_floor(numFloors); 
    Goal = goal; 
    Type = type; 
}

//get functions:
int Building::getNum_floors()
{
    return Num_floors; 
}

int Building::getResting_floor()
{
    return Resting_floor; 
}

int Building::getGoal()
{
    return Goal;
}

string Building::getType()
{
    return Type; 
}

//set functions:
int Building::setNum_floors(int n)
{
    //n: number of floors
    return n; 
}

int Building::setResting_floor(int n)
{
    //n: size of building
    //set the resting floor to be half of the building size
    if(n < 1)
      return 0;
    else 
      return n / 2;
}

int Building::setNum_elevators(int n)
{
    //n: number of floors
    if(n < 1)
      return 0; 
    else 
      return 1; //set it equal to 1 until we are ready for multiple elevators
}

void Building::setGoal(int n)
{
    Goal = n;
}

void Building::addPerson(Person &P)
{
    Elevator E;
    People.push_back(P);
    cout << People[0].End_floor << endl;
    P.addTime(E.goToFloor(People[0].Start_floor));//adds time it takes for elevator to pick person up
    E.addPerson(People[0]);
    E.goToFloor(People[0].End_floor);    //travel time
    cout << "Total Time : " << People[0].Time << " seconds" << endl;
    E.People.pop_back();
}

void Building::addPeople(vector<Person> &P)
{
    Elevator E;
    People.push_back(P[1]);
    People.push_back((P[2]));
    //E.calculateTravelTime(E.Current_floor, <#int end_floor#>)
    //P.addTime(E.goToFloor(P.Start_floor)); //adds time it takes for elevator to pick person up
    //P.addTime(E.goToFloor(P.End_floor));    //travel time
    //People.pop_back();
    //cout << "Total Time : " << P.Time << " seconds" << endl;
    
    //    vector<int> v = *new vector<int> ({4, 2, 3});
    //    vector<int> v; 
    //    sort(v.begin(), v.end());
    //    v.erase(v.begin(), v.end());
    //    for (int i = 0; i < v.size(); i++)
    //    {
    //        cout << v[i] << endl;
    //    }
     
    
}
