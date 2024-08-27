

#include <iostream>

using namespace std;
int main() {
  string name, lname;
  cout<<"Enter A Name: ";
  getline(cin,name);
  cout<<name;
  int m1, m2, m3, m4, m5;
  cout<<"\nEnter Marks In Subject 1: ";
  cin>>m1;
  cout<<"\nEnter Marks In Subject 2: ";
  cin>>m2;
  cout<<"\nEnter Marks In Subject 3: ";
  cin>>m3;
  cout<<"\nEnter Marks In Subject 4: ";
  cin>>m4;
  cout<<"\nEnter Marks In Subject 5: ";
  cin>>m5;
  int total=m1+m2+m3+m4+m5;
  float avg=total/5;
  if(avg>=89)
    avg=avg+2;
  string gr;
  if(avg>90)
    gr="A1";
  else if(avg>80)
    gr="A2";
  else if(avg>70)
    gr="B1";
  else if(avg>60)
    gr="B2";
  else if(avg>50)
    gr="C1";
  else if(avg>33)
      gr="C2";
  else
      gr="E";

  cout<<"Name: "<<name<<endl;
  cout<<"Total Score: "<<total<<endl;
  cout<<"Average: "<<avg<<endl;
  cout<<"Grade: "<<gr;
}