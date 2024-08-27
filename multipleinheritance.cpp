#include <iostream>
using namespace std;

class Vehicle{
public:
  Vehicle(){
    cout<<"\nI Am a Vehicle";
  }
};

class FourWheeler{
public:
  FourWheeler(){
    cout<<"\nI Am a Four Wheeler";
  }
};

class Car:public Vehicle, public FourWheeler{
public:
  Car() {
    cout<<"\nI Am a Car";
  }
};


int main() {
  Car C;
}