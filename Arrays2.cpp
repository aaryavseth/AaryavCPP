#include <iostream>
using namespace std;

int main() {
  string name[3]; // hold 3 names
  int marks[3][5]; // array for 5 int elements and 3 students
  int tot[3]; // 3 totals
  float avg[3]; // 3 averages
  int j;
  for(j=0;j<3;j++){
    tot[j]=0;
    cout<<"Enter Name: ";
    getline(cin, name[j]);
    cout<<"Enter Marks in 5 Subjects (Out of 100): ";
    for(int i=0;i<5;i++){
      cin>>marks[j][i];
      tot[j]+=marks[j][i];
    }
    getline(cin,name[j]);
  }
  for(j=0;j<3;j++){
    cout<<"\nName: "<<name[j];
    cout<<"\nTotal Score: "<<tot[j];
    avg[j]=(float)tot[j]/5;
    cout<<"\nAverage Score: "<<avg[j];
  }
}