#include "Person.h"

#define second 1 
#define minute second * 60
#define hour minute * 60
#define day hour * 24 

class Request{
  //I don't know what these are supposed to do, but here ya go
 public: 
  Person P; 
  int time;
  bool isRequest; 
  Request(); 
  Request(Person &P, int time, bool isRequest); 
  void setRequest(bool request); 
  void setTime(int _time); 
  bool getRequest(); 
  int getTime(); 
};
