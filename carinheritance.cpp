#include <iostream>
using namespace std;

class Vehicle{
  int wheels;
  string fuel;
public:
  void getvehicle() {
    cout<<"Enter # of Wheels: "; cin>>wheels;
    cout<<"Enter Fuel Type: "; cin>>fuel;
  }
  void dispv() {
    cout<<"\n# of Wheels: "<<wheels;
    cout<<"\nFuel Type: "<<fuel;
  }
};

class Car:public Vehicle {
  int doors;
  string trunksize;
public:
  void getcar() {
    getvehicle();
    cout<<"Enter # of Doors: "; cin>>doors;
    cout<<"Enter Trunk Size (Big or Small): "; cin>>trunksize;
  }
  void dispc() {
    dispv();
    cout<<"\n# of Doors: "<<doors;
    cout<<"\nThe Trunk Is "<<trunksize;
  }
};

class ElecCar:public Car {
  int battery;
  float chargetime;
public:
  void getelec() {
    getcar();
    cout<<"Enter Battery Capacity (kWh): "; cin>>battery;
    cout<<"Enter Charging Time: "; cin>>chargetime;
  }
  void dispelec() {
    dispc();
    cout<<"\nBattery Capacity (kWh): "<<battery;
    cout<<"\nCharge Time: "<<chargetime<<" hours";
  }
};

int main() {
  ElecCar CarE;
  CarE.getelec();
  CarE.dispelec();
}