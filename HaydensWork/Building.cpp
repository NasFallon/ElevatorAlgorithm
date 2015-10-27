


#include "Building.h"

Building::Building()
{
    Num_floors = 5;
    E = *new Elevator(5);
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
    lastUpdate = 0;
}

Building::Building(int numFloors, int numElevators, string type)
{
    //full constructor
    Num_floors = numFloors;
    Num_elevators = setNum_elevators(numElevators);
    Resting_floor = setResting_floor(numFloors);
    for(int i = 0; i < Num_elevators; i++)
    {
        //create a vector of elevator objects representing for each
        //elevator in the building
        Elevator a;
        Elevators.push_back(a);
    }
    Type = type;
    lastUpdate = 0;
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

//At this point P.direction will == E.direction unless the elevator is about to change directions
void Building::addPerson(Person &P, float time)
{
    People.push_back(P);
    runEvents(time);
    Event U = *new Event(E, "UNLOAD", P.End_floor); //Unload event
    E.addPerson(P);
    //E.People[P.End_floor][0].Time = 15;
    
    cout << "People[0].Time: " << People[0].Time << endl;
    cout << "E.People[P.End_floor][0].Time: " << E.People[P.End_floor][0].Time << endl;
    if (Events.size() == 0)
    {
        Event event = *new Event(E, P.Start_floor, P.End_floor);
        //event.E.addPerson(P);
        Events.push_back(event);
        Events.push_back(U);
        return;
    }
    for (int i = 0; i < Events.size(); i++)
    {
        if (P.direction == "UP")
        {
            if (Events[i].type == "UP")
            {
                if (Events[i].end_floor > P.End_floor)
                {
                    Event event = *new Event (E, Events[Events.size()-1].end_floor, P.End_floor);
                    Events[i].setStart_floor(P.End_floor);
                    //event.E.addPerson(P);
                    Events.insert(Events.begin()+i, event);
                    Events.insert(Events.begin()+i+1, U);
                    return;
                }
                if (Events[i].end_floor == P.End_floor)
                    return;
            }
            else if (Events[i].type == "DOWN")
            {
                Event event = *new Event (E, Events[Events.size()-1].end_floor, P.End_floor);
                Events[i].setStart_floor(P.End_floor);
                //event.E.addPerson(P);
                Events.insert(Events.begin()+i, event);
                Events.insert(Events.begin()+i+1, U);
                return;
            }
        }
        else if (P.direction == "DOWN")
        {
            if (Events[i].type == "DOWN")
            {
                if (Events[i].end_floor <= P.End_floor)
                {
                    Event event = *new Event (E, Events[Events.size()-1].end_floor, P.End_floor);
                    Events[i].setStart_floor(P.End_floor);
                    //event.E.addPerson(P);
                    Events.insert(Events.begin()+i, event);
                    Events.insert(Events.begin()+i+1, U);
                    return;

                }
                if (Events[i].end_floor == P.End_floor)
                    return;
            }
            else if (Events[i].type == "UP")
            {
                Event event = *new Event (E, Events[Events.size()-1].end_floor, P.End_floor);
                Events[i].setStart_floor(P.End_floor);
                //event.E.addPerson(P);
                Events.insert(Events.begin()+i, event);
                Events.insert(Events.begin()+i+1, U);
                return;
            }
        }
    }
    Event event = *new Event (E, Events[Events.size()-1].end_floor, P.End_floor);
    event.E.addPerson(P);
    Events.push_back(event);
    Events.push_back(U);
}

void Building::runEvents(float time)
{
    float t = time - lastUpdate;
    lastUpdate = time;
    while (t > 0 && Events.size() != 0)
    {
        float etime = Events[0].time;
        Events[0].Go(t);
        if (t >= etime)
            Events.erase(Events.begin());
        t = t - etime;
        
    }
}







