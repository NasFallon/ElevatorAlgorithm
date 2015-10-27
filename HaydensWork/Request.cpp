#include "Request.h"
#include "Person.h"

Request::Request(){ 
  time = 0;
  isRequest = true; //this is a request 
}

Request::Request(Person &p, int _time, bool _isRequest){
  P = p; 
  time = _time; 
  isRequest = _isRequest;
}

void Request::setRequest(bool request){
  isRequest = request; 
}

bool Request::getRequest(){
  return isRequest; 
}

void Request::setTime(int _time){
  time = _time;
}

int Request::getTime(){
  return time;
}