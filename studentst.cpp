#include <iostream>
using namespace std;

struct Dob{
int dd;
int mm;
int yy;
};

class student
{
  int admno;
  string name;
  string mobile;
  Dob dob;
  int m[5];
  int total;
  float avg;
  void calc(){
    total=0;
    for(int i=0;i<5;i++){
      total+=m[i];
    }
    avg=total/5;
  }
  public:
    void getst(){
      cout<<"Enter Admno: "; cin>>admno;
      cin.get();
      cout<<"Enter Name: "; getline(cin,name);
      cout<<"Enter Mobile: "; cin>>mobile;
      cout<<"Enter Day of Birth: "; cin>>dob.dd;
      cout<<"Enter Month of Birth: "; cin>>dob.mm;
      cout<<"Enter Year of Birth: "; cin>>dob.yy;
      cout<<"Enter Marks of 5 Subjects: ";
      for(int i=0;i<5;i++){
        cin>>m[i];
      }
      calc();
    }
    void display(){
      cout<<"\nAdmno: "<<admno;
      cout<<"\nName: "<<name;
      cout<<"\nMobile: "<<mobile;
      cout<<"\nDate of Birth: "<<dob.dd<<"/"<<dob.mm<<"/"<<dob.yy;
      cout<<"\nTotal Score: "<<total;
      cout<<"\nAverage Score: "<<avg;
    }
};

int main() {
  student s[3];
  for(int i=0;i<3;i++){
    s[i].getst();
  }
  for(int i=0;i<3;i++){
    s[i].display();
  }
}