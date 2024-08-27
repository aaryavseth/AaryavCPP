#include <iostream>
using namespace std;

int main() {
  string name;
  int marks[5];
  int tot=0;
  float avg;
  cout<<"Enter Name: ";
  getline(cin,name);
  cout<<"Enter Marks In 5 Subjects (Out of 100): ";
  for(int i=0;i<5;i++){
    cin>>marks[i];
    tot+=marks[i];
  }
  cout<<"\nName: "<<name;
  cout<<"\nTotal Score: "<<tot;
  avg=(float)tot/5;
  cout<<"\nAverage Score: "<<avg;
}