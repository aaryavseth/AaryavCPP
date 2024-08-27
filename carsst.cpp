#include <iostream>
using namespace std;

class car
{
  int carid;
  int modelno;
  string color;
  int saleprice;
  int tax;
  int endprice;
  void calc(){
    tax = saleprice*0.05;
    endprice = saleprice+tax;
  }
  public:
    void getcar(){
      cout<<"\nEnter Car ID: "; cin>>carid;
      cout<<"Enter Model Number: "; cin>>modelno;
      cout<<"Enter Car Color: "; cin>>color;
      cout<<"Enter Sales Price: "; cin>>saleprice;
      calc();
    }
    void dispcar(){
      cout<<"\n\nCar ID: "<<carid;
      cout<<"\nModel Number: "<<modelno;
      cout<<"\nCar Color: "<<color;
      cout<<"\nSales Price: "<<saleprice;
      cout<<"\nTax at 5%: "<<tax;
      cout<<"\nPrice Including Tax: "<<endprice;
    }
};

int main() {
    car c[3];
    for(int i=0;i<3;i++)
      c[i].getcar();
    for(int i=0;i<3;i++)
      c[i].dispcar();
  }
